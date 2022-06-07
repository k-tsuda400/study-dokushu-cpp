#include <iostream>
#include <string>

// p. 153
///////////////////
// 練習問題 3.4

// 変更前：非NSDMI (Non-Static Data Member Initializer)
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

// 変更後：NSDMI
class vector3d
{
public: // 動作確認用に、x, y, zをpublicに変更
    float x = 0;
    float y = 0;
    float z = 0;

public:
    vector3d();
};

vector3d::vector3d()
{
    // NSDMIを使い、メンバー初期化リストを使わないようにした
    // 動作は同じ
}

int main()
{
    vector3d hoge;
    std::cout << hoge.x <<std::endl;  // 0
    std::cout << hoge.y << std::endl; // 0
    std::cout << hoge.z << std::endl; // 0
}