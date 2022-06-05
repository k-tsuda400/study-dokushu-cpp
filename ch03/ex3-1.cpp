#include <iostream>

// p. 131
///////////////////
// ���K��� 3.1
// (1)
class A
{
    int v;

public:
    void set(int value);
    int get();
    const int& get() const;
};

void A::set(int value)
{
    v = value;
}

int A::get()
{
    return v;
}

// (2)
// "const�Q��" : const int&
// ���̈Ӑ}���Ă���ō����Ă�E�E�E�H�߂��Ⴍ����Y��
// �߂�l�̈Ⴂ�����ł̃I�[�o�[���[�h�͂ł��Ȃ�������
const int& A::get() const
{
    return v;
}

//int main()
//{
//    A a;
//    a.set(42);
//
//    const A& ca = a;
//    std::cout << ca.get();
//    // �G���[�����F�I�u�W�F�N�g��const�Q�ƌ^�Ȃ̂ɁAget�ɂ�const�����Ă��Ȃ�
//    // ��`�Ɛ錾�̗�����"int get() const"�Ƃ����ӂ���const�����ɂ��Ă������OK
//}

// (3)
// - mutable�́A�����o�֐���const�������ꍇ�ł����Ă��A�����o�[�ϐ��̒l��ς���Ƃ��Ɏg��
//   - ����ɂ��A�Q�b�^�[�̃L���b�V������邱�Ƃ��ł���悤�ɂȂ����肷��
//   - �������A�g���̂ɏ\���ȗ��R�����鎞�ȊO�͎g�p���Ȃ����Ƃ��]�܂����iconst�Ȃ̂ɕς�����A�Ƃ����̂͋��͂Ȃ���