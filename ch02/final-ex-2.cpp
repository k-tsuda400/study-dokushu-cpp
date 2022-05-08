#include <iostream>

// p. 121
///////////////////
// 2�͖͂̏����

// ��`
class vector3d
{
public:
    // ���ƂŌ^��ύX���₷�����邽�߂ɁA�l�X�g�����^�����g�p
    using vecType = int;

    // �Q�b�^�[�Z�b�^�[
    vector3d get();
    vecType getX();
    vecType getY();
    vecType getZ();
    void set(vecType x, vecType y, vecType z = 0); // Z���ȗ����ꂽ��0����
private:
    vecType x;
    vecType y;
    vecType z;
};

// �֐��̎���
vector3d vector3d::get()
{
    vector3d v;
    v.x = x;
    v.y = y;
    v.z = z;
    return v;
}

vector3d::vecType vector3d::getX()
{
    return x;
}

vector3d::vecType vector3d::getY()
{
    return y;
}

vector3d::vecType vector3d::getZ()
{
    return z;
}

void vector3d::set(vector3d::vecType x, vector3d::vecType y, vector3d::vecType z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

// main.cpp
int main()
{
    int x;
    int y;
    int z;
    std::cout << "vector3d��3�v�f����͂��Ă��������i�^��int�ł��낦�Ă��������j";
    std::cin >> x >> y >> z;

    vector3d v3;
    v3.set(x, y, z);
    std::cout << v3.getX() << ", " << v3.getY() << ", " << v3.getZ() << std::endl;

    // Z�������ȗ����Ă��A�f�t�H���g�������i�[�����̂�OK
    v3.set(x, y);
    std::cout << v3.getX() << ", " << v3.getY() << ", " << v3.getZ() << std::endl;
}

// (4)
// - �����_���̃L���v�`����"="�Ƃ��邱�ƂŁA
//   - �����_�����Ŏg���Ă���ϐ����A�����_���̊O�����玩���ŃL���v�`�����Ă����
//   - �������A�X�R�[�v�̓����_���O�Ɠ���Ȃ̂ŁA�X�R�[�v�O�̕ϐ��̓L���v�`���ł��Ȃ�