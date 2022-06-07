#include <iostream>
#include <string>

// p. 165
///////////////////
// 練習問題 3.5

// (1)
// 継承元のクラス：基底クラス
// 継承先のクラス：派生クラス

// (2)
class Base
{
public:
    virtual std::string name() const;
    virtual std::string most_name() const = 0;
};

std::string Base::name() const { return "Base"; }

class Derived : public Base
{
public:
    std::string name() const override;
};

std::string Derived::name() const { return "Derived"; }

// さらに派生したクラス
class MoreDerived : public Derived
{
public:
    std::string name() const override;
    std::string most_name() const override;
};

std::string MoreDerived::name() const { return "MoreDerived"; }
std::string MoreDerived::most_name() const { return "MoreDerived: MostName!"; }

int main()
{
    MoreDerived moreDerived;
    std::cout << moreDerived.most_name();

    //Derived derived; // 純粋仮想関数most_name()をオーバーライドしていないので、コンパイルエラー
}