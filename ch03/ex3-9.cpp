#include <iostream>
#include <string>

// p. 184
///////////////////
// 練習問題 3.9

// (1)
// staticメンバーとは、特定のインスタンスと結びつかないメンバーのことであり、インスタンスがなくても呼び出せるメンバーである。
// また、インスタンスとは結びつかないため、宣言だけではメモリが割り当てられないため、初期値を与える必要がある場合は初期化構文を用いて、別で定義する必要がある。
// 逆に、通常のクラスメンバーはインスタンスがないと呼び出せない。

// (2)
class A
{
    static int count;

public:
    A();
    static void show_count();
};

int A::count = 0; // 実態の宣言

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