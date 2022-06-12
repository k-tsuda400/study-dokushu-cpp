#include <iostream>
#include <string>

// p. 185
///////////////////
// 3�͖͂̏����

// (1)
class A
{
public:
    A();
    A(const A& other);
    void testMethod();
};

A::A()
{

}

A::A(const A& other)
{
}

void A::testMethod()
{
    std::cout << "��ꃁ�\�b�h" << std::endl;
}

int main()
{
    //A a;
    // ���R���p�C���G���[���e�F
    // �u�N���X"A"�̊���̃R���X�g���N�^�[�͑��݂��܂���v
}
// ���̃R�[�h�̃G���[�����́u�R�s�[�R���X�g���N�^�����O�Ő錾�������߁A�R���p�C���ɂ��R���X�g���N�^�����������Ȃ��Ȃ����v
// ���Ƃɂ��u�f�t�H���g�R���X�g���N�^�̒�`���Ȃ��v�ł���
// �Ȃ̂ŁA�u�R�s�[�R���X�g���N�^�̐錾�������v���A�u����̃R�[�h�Ƀf�t�H���g�R���X�g���N�^�̐錾�𑫂��v�̂����ꂩ�ŃG���[���Ȃ��Ȃ�

// -----

// (2) (NSDMI p. 150)
class vector3d
{
    float x = 0;
    float y = 0;
    float z = 0;

public:
    vector3d();
    vector3d(float x, float y);
    vector3d(float x, float y, float z);
};

vector3d::vector3d()
{
}

vector3d::vector3d(float x, float y)
{
    this->x = x;
    this->y = y;
    this->z = 0;
}

vector3d::vector3d(float x, float y, float z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

// -----

// (3) (���O�̉B�؂� p.159)
class DerivedA : public A
{
public:
    using A::testMethod;
    void testMethod(int value);
    friend void accessMember(const DerivedA& value);
private:
    int a = 0;
};

void DerivedA::testMethod(int value)
{
    std::cout << "�h�����\�b�h" << std::endl;
}

// -----

// (4) 
// �t�����h�֐��͔񃁃��o�[�Ȃ̂ŁA�N���X�������Ȃ�
//void DerivedA::accessMember()
void accessMember(const DerivedA& value)
{
    // private�ϐ��ɃA�N�Z�X
    // DerivedA�̒���friend����菜���ƁA�G���[�ɂȂ�
    std::cout << value.a << std::endl;
}

// -----

// (5) (p. 180 �ɃR�[�h�Ⴀ��)
class S
{
    static int counter;
    const int Ccounter = 0;
public:
    void set(int v) const;
    static int get();
};

void S::set(int v) const
{
    counter = v;
    // const�����o�[�ϐ���const�����o�[�֐��̒��ŕύX�ł��Ȃ�
    //Ccounter = v; // �R���p�C���G���[
}

int S::get()
{
    return counter;
}