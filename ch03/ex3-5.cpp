#include <iostream>
#include <string>

// p. 165
///////////////////
// ���K��� 3.5

// (1)
// �p�����̃N���X�F���N���X
// �p����̃N���X�F�h���N���X

// (2)
class Base
{
public:
    virtual std::string name() const;
    virtual std::string most_name() const = 0;
};

std::string Base::name() const { return "Base"; }

class Derived : public Base
{
public:
    std::string name() const override;
};

std::string Derived::name() const { return "Derived"; }

// ����ɔh�������N���X
class MoreDerived : public Derived
{
public:
    std::string name() const override;
    std::string most_name() const override;
};

std::string MoreDerived::name() const { return "MoreDerived"; }
std::string MoreDerived::most_name() const { return "MoreDerived: MostName!"; }

int main()
{
    MoreDerived moreDerived;
    std::cout << moreDerived.most_name();

    //Derived derived; // �������z�֐�most_name()���I�[�o�[���C�h���Ă��Ȃ��̂ŁA�R���p�C���G���[
}