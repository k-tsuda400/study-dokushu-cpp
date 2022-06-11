#include <iostream>
#include <string>

// p. 165
///////////////////
// 練習問題 3.6 (p. 169)

// (1)
//  p.167 参照。メンバー関数の仮引数とメンバ変数がたまたま同じ名前だったときに、メンバー変数であることを示すときに`this`ポインタを使用する

// (2)
class A
{
    int value = 0;

public:
    void init_value();
    void set_value_with_this(int value);
    void set_value_without_this(int value);
    int get_value() const;
};

void A::init_value()
{
    this->value = 0;
}

void A::set_value_with_this(int value)
{
    this->value = this->value + 10 * value;
}

void A::set_value_without_this(int value)
{
    value = value + 10 * value;
}

int A::get_value() const
{
    return value;
}

int main()
{
    A a;

    a.init_value();
    a.set_value_with_this(10);
    // 結果は100
    // 0(this->value) + 10 * 10(仮引数value)
    std::cout << a.get_value() << std::endl;

    a.init_value();
    a.set_value_without_this(10);
    // 結果は0
    // 0(this->value) + 10 * 0(this->value)
    std::cout << a.get_value() << std::endl;
}

// (3)
// p.168 参照。
// - thisポインターはconstポインターとなっている
// - なので、基本的にthisポインターが指す先のオブジェクトは変更できない
//   - （質問の意図に合ってる？）