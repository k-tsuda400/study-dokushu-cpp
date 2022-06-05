#include <iostream>
#include <string>

// p. 150
///////////////////
// ���K��� 3.2
class Book
{
    std::string title;
    std::string writer;
    int price;

public:
    Book(std::string title, std::string writer, int price);
    // (2) �R�s�[�R���X�g���N�^
    Book(const Book& other);
    void printData();
};

// (1) �R���X�g���N�^�[�̒�`
Book::Book(std::string title, std::string writer, int price)
{
    this->title = title;
    this->writer = writer;
    this->price = price;
}
// (2) �R�s�[�R���X�g���N�^����
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
    Book book2(book1);//book1���R�s�[

    book1.printData();
    book2.printData();
}

// (3)
// �C���X�^���X�̏���������=���g�����Ƃ��ł��Ȃ��Ƃ��F
// - �R���X�g���N�^�[��explicit�w��q�����Ă���Ƃ�
//   - ���ꂪ���Ă���ƁA�����I�ȃR���X�g���N�^�[�Ăяo��"x(n)"�����󂯕t���Ȃ�
// - X x(n); // OK
// - X x = n; // �R���p�C���G���[