#include <iostream>
#include <string>

// p. 165
///////////////////
// ���K��� 3.6 (p. 169)

// (1)
//  p.167 �Q�ƁB�����o�[�֐��̉������ƃ����o�ϐ������܂��ܓ������O�������Ƃ��ɁA�����o�[�ϐ��ł��邱�Ƃ������Ƃ���`this`�|�C���^���g�p����

// (2)
class A
{
    int value = 0;

public:
    void init_value();
    void set_value_with_this(int value);
    void set_value_without_this(int value);
    int get_value() const;
};

void A::init_value()
{
    this->value = 0;
}

void A::set_value_with_this(int value)
{
    this->value = this->value + 10 * value;
}

void A::set_value_without_this(int value)
{
    value = value + 10 * value;
}

int A::get_value() const
{
    return value;
}

int main()
{
    A a;

    a.init_value();
    a.set_value_with_this(10);
    // ���ʂ�100
    // 0(this->value) + 10 * 10(������value)
    std::cout << a.get_value() << std::endl;

    a.init_value();
    a.set_value_without_this(10);
    // ���ʂ�0
    // 0(this->value) + 10 * 0(this->value)
    std::cout << a.get_value() << std::endl;
}

// (3)
// p.168 �Q�ƁB
// - this�|�C���^�[��const�|�C���^�[�ƂȂ��Ă���
// - �Ȃ̂ŁA��{�I��this�|�C���^�[���w����̃I�u�W�F�N�g�͕ύX�ł��Ȃ�
//   - �i����̈Ӑ}�ɍ����Ă�H�j