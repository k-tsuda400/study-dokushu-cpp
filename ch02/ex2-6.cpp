#include <iostream>
#include <string> //<--- getline�Ŏg�p

// p. 104
///////////////////
// ���K��� 2.6
int main()
{
    // (1)
    int i = 0;
    std::cout << "(1) ���l����͂��Ă�������: ";
    std::cin >> i;
    std::cout << "���͂��ꂽ���l��`" << i << "`�ł�" << std::endl;

    // (2)
    std::string s;
    std::cout << "-----" << std::endl;
    std::cout << "(2) ���ɁA1��̕��������͂��Ă�������: ";
    std::getline(std::cin, s);
    std::cout << "���͂��ꂽ1�s�������`" << s << "`�ł�" << std::endl;
    // ���n�����ɂ���Ƒz��ʂ�̌��ʂ������Ȃ��񂾂��ǁA���ŁH

    // (3)
    //do {
    //    std::cout << "(3) �Ō�ɁA���������͂��Ă�������: ";
    //    std::cin >> s;
    //    std::cout << "���͂��ꂽ�������`" << s << "`�ł�" << std::endl;
    //    std::cout << s << std::endl;
    //} while(s != "");

    // �Q�l�Fhttps://uyota.asablo.jp/blog/2020/01/27/9207099
    std::string input;
    do {
        std::cout << "(3)���͌���:" << input << std::endl;
    }
    while (std::cin >> input);
    // Visual Studio 2022 ���ƁA��L�̃R�[�h�ł����[�v�E�o�ł��Ȃ�
    // �����𒲂ׂ���

    std::cout << "�v���O�������I�����܂�" << std::endl;
}