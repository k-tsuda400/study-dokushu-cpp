#include <iostream>
#include <string>

// p. 185
///////////////////
// 3章の章末問題

// (1)
class A
{
public:
    A();
    A(const A& other);
    void testMethod();
};

A::A()
{

}

A::A(const A& other)
{
}

void A::testMethod()
{
    std::cout << "基底メソッド" << std::endl;
}

int main()
{
    //A a;
    // ↑コンパイルエラー内容：
    // 「クラス"A"の既定のコンストラクターは存在しません」
}
// このコードのエラー原因は「コピーコンストラクタを自前で宣言したため、コンパイラによるコンストラクタ自動生成がなくなった」
// ことによる「デフォルトコンストラクタの定義がない」である
// なので、「コピーコンストラクタの宣言を消す」か、「現状のコードにデフォルトコンストラクタの宣言を足す」のいずれかでエラーがなくなる

// -----

// (2) (NSDMI p. 150)
class vector3d
{
    float x = 0;
    float y = 0;
    float z = 0;

public:
    vector3d();
    vector3d(float x, float y);
    vector3d(float x, float y, float z);
};

vector3d::vector3d()
{
}

vector3d::vector3d(float x, float y)
{
    this->x = x;
    this->y = y;
    this->z = 0;
}

vector3d::vector3d(float x, float y, float z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

// -----

// (3) (名前の隠ぺい p.159)
class DerivedA : public A
{
public:
    using A::testMethod;
    void testMethod(int value);
    friend void accessMember(const DerivedA& value);
private:
    int a = 0;
};

void DerivedA::testMethod(int value)
{
    std::cout << "派生メソッド" << std::endl;
}

// -----

// (4) 
// フレンド関数は非メンバーなので、クラス名をつけない
//void DerivedA::accessMember()
void accessMember(const DerivedA& value)
{
    // private変数にアクセス
    // DerivedAの中のfriendを取り除くと、エラーになる
    std::cout << value.a << std::endl;
}

// -----

// (5) (p. 180 にコード例あり)
class S
{
    static int counter;
    const int Ccounter = 0;
public:
    void set(int v) const;
    static int get();
};

void S::set(int v) const
{
    counter = v;
    // constメンバー変数はconstメンバー関数の中で変更できない
    //Ccounter = v; // コンパイルエラー
}

int S::get()
{
    return counter;
}