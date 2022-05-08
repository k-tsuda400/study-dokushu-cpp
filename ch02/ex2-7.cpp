#include <iostream>
#include <string> //<--- getlineで使用

// p. 110
///////////////////
// 練習問題 2.7
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

// p.107を参考にすれば、sub関数の実現可能
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
// - デフォルト引数は、引数リストの後ろから順番にしか指定できない
//   - そのため、先頭や途中の仮引数にデフォルト値を指定するとエラーになる
// - また、参照を引数として受け取る関数の場合、デフォルト引数ではなくオーバーロードを使うのが最善