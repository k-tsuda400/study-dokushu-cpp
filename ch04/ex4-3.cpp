#include <iostream>

// p. 204
///////////////////
//���K���4-3

// (1)
// �X�R�[�v���甲�����ϐ��͔j�������
// �ȑO�̒l�̍Ď擾�͂ł��Ȃ�

// (2)
int get_counter()
{
    // before
    //int counter = 0;
    //return counter++;

    // after (p. 202�Q��)
    static int counter = 0;
    return counter++;
}

int main()
{
    // before: ���s���ʂ� 0, 0, 0
    // after: ���s���ʂ� 0, 1, 2
    std::cout << get_counter() << std::endl;
    std::cout << get_counter() << std::endl;
    std::cout << get_counter() << std::endl;
}