#include <iostream>
#include <string>

// p. 150
///////////////////
// 練習問題 3.2
class Book
{
    std::string title;
    std::string writer;
    int price;

public:
    Book(std::string title, std::string writer, int price);
    // (2) コピーコンストラクタ
    Book(const Book& other);
    void printData();
};

// (1) コンストラクターの定義
Book::Book(std::string title, std::string writer, int price)
{
    this->title = title;
    this->writer = writer;
    this->price = price;
}
// (2) コピーコンストラクタ実装
Book::Book(const Book& other)
{
    this->title = other.title;
    this->writer = other.writer;
    this->price = other.price;
}

void Book::printData()
{
    std::cout << title << ", " << writer << "," << price << std::endl;
}


int main()
{
    Book book1("SomeTitle", "Someone", 1000);
    Book book2(book1);//book1をコピー

    book1.printData();
    book2.printData();
}

// (3)
// インスタンスの初期化時に=を使うことができないとき：
// - コンストラクターにexplicit指定子がついているとき
//   - これがついていると、明示的なコンストラクター呼び出し"x(n)"しか受け付けない
// - X x(n); // OK
// - X x = n; // コンパイルエラー