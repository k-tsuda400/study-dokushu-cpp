#include <iostream>

// p. 131
///////////////////
// 練習問題 3.1
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
// "const参照" : const int&
// 問題の意図ってこれで合ってる・・・？めちゃくちゃ悩んだ
// 戻り値の違いだけでのオーバーロードはできないそうだ
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
//    // エラー原因：オブジェクトがconst参照型なのに、getにはconstがついていない
//    // 定義と宣言の両方を"int get() const"というふうにconstを後ろにつけてあげればOK
//}

// (3)
// - mutableは、メンバ関数にconstがついた場合であっても、メンバー変数の値を変えるときに使う
//   - これにより、ゲッターのキャッシュを取ることができるようになったりする
//   - ただし、使うのに十分な理由がある時以外は使用しないことが望ましい（constなのに変えられる、というのは強力なため