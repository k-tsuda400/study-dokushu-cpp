#include <iostream>
#include <string> //<--- getline�Ŏg�p

// p. 110
///////////////////
// ���K��� 2.7
// (1)
/*
int sum(int a, int b, int c, int d)
{
    return a + b + c + d;
}
*/

// (2)
struct vector2d
{
    float x;
    float y;
};

// p.107���Q�l�ɂ���΁Asub�֐��̎����\
int sub(int a, int b)
{
    return a - b;
}

vector2d sub(vector2d va, vector2d vb)
{
    vector2d v;
    v.x = va.x - vb.x;
    v.y = va.y - vb.y;
    return v;
}

int main()
{
    std::cout << sub(10, 20) << std::endl;

    vector2d a = {-10, 30};
    vector2d b = {  5, 10};
    auto v = sub(a, b);
    std::cout << v.x << ", " << v.y << std::endl;
}

// (3)
// - �f�t�H���g�����́A�������X�g�̌�납�珇�Ԃɂ����w��ł��Ȃ�
//   - ���̂��߁A�擪��r���̉������Ƀf�t�H���g�l���w�肷��ƃG���[�ɂȂ�
// - �܂��A�Q�Ƃ������Ƃ��Ď󂯎��֐��̏ꍇ�A�f�t�H���g�����ł͂Ȃ��I�[�o�[���[�h���g���̂��őP