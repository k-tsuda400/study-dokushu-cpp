#include <iostream>
#include <string>

// p. 153
///////////////////
// ���K��� 3.4

// �ύX�O�F��NSDMI (Non-Static Data Member Initializer)
//class vector3d
//{
//    float x;
//    float y;
//    float z;
//
//public:
//    vector3d();
//};
//
//vector3d::vector3d()
//    : x(0), y(0), z(0)
//{
//
//}

// �ύX��FNSDMI
class vector3d
{
public: // ����m�F�p�ɁAx, y, z��public�ɕύX
    float x = 0;
    float y = 0;
    float z = 0;

public:
    vector3d();
};

vector3d::vector3d()
{
    // NSDMI���g���A�����o�[���������X�g���g��Ȃ��悤�ɂ���
    // ����͓���
}

int main()
{
    vector3d hoge;
    std::cout << hoge.x <<std::endl;  // 0
    std::cout << hoge.y << std::endl; // 0
    std::cout << hoge.z << std::endl; // 0
}