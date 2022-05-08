#include <iostream>

// p. 121
///////////////////
// 2章の章末問題

// 定義
class vector3d
{
public:
    // あとで型を変更しやすくするために、ネストした型名を使用
    using vecType = int;

    // ゲッターセッター
    vector3d get();
    vecType getX();
    vecType getY();
    vecType getZ();
    void set(vecType x, vecType y, vecType z = 0); // Zが省略されたら0を代入
private:
    vecType x;
    vecType y;
    vecType z;
};

// 関数の実装
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
    std::cout << "vector3dの3要素を入力してください（型はintでそろえてください）";
    std::cin >> x >> y >> z;

    vector3d v3;
    v3.set(x, y, z);
    std::cout << v3.getX() << ", " << v3.getY() << ", " << v3.getZ() << std::endl;

    // Z成分を省略しても、デフォルト引数が格納されるのでOK
    v3.set(x, y);
    std::cout << v3.getX() << ", " << v3.getY() << ", " << v3.getZ() << std::endl;
}

// (4)
// - ラムダ式のキャプチャに"="とつけることで、
//   - ラムダ式内で使っている変数を、ラムダ式の外部から自動でキャプチャしてくれる
//   - ただし、スコープはラムダ式外と同一なので、スコープ外の変数はキャプチャできない