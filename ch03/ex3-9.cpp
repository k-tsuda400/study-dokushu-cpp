#include <iostream>
#include <string>

// p. 184
///////////////////
// ���K��� 3.9

// (1)
// static�����o�[�Ƃ́A����̃C���X�^���X�ƌ��т��Ȃ������o�[�̂��Ƃł���A�C���X�^���X���Ȃ��Ă��Ăяo���郁���o�[�ł���B
// �܂��A�C���X�^���X�Ƃ͌��т��Ȃ����߁A�錾�����ł̓����������蓖�Ă��Ȃ����߁A�����l��^����K�v������ꍇ�͏������\����p���āA�ʂŒ�`����K�v������B
// �t�ɁA�ʏ�̃N���X�����o�[�̓C���X�^���X���Ȃ��ƌĂяo���Ȃ��B

// (2)
class A
{
    static int count;

public:
    A();
    static void show_count();
};

int A::count = 0; // ���Ԃ̐錾

A::A()
{
    ++count;
}

void A::show_count()
{
    std::cout << count << std::endl;
}

int main()
{
    A a1;
    A::show_count();

    A a2;
    A::show_count();

    A a3, a4, a5;
    A::show_count();
}