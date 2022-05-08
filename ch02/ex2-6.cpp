#include <iostream>
#include <string> //<--- getlineで使用

// p. 104
///////////////////
// 練習問題 2.6
int main()
{
    // (1)
    int i = 0;
    std::cout << "(1) 数値を入力してください: ";
    std::cin >> i;
    std::cout << "入力された数値は`" << i << "`です" << std::endl;

    // (2)
    std::string s;
    std::cout << "-----" << std::endl;
    std::cout << "(2) 次に、1列の文字列を入力してください: ";
    std::getline(std::cin, s);
    std::cout << "入力された1行文字列は`" << s << "`です" << std::endl;
    // ↑地続きにすると想定通りの結果が得られないんだけど、何で？

    // (3)
    //do {
    //    std::cout << "(3) 最後に、文字列を入力してください: ";
    //    std::cin >> s;
    //    std::cout << "入力された文字列は`" << s << "`です" << std::endl;
    //    std::cout << s << std::endl;
    //} while(s != "");

    // 参考：https://uyota.asablo.jp/blog/2020/01/27/9207099
    std::string input;
    do {
        std::cout << "(3)入力結果:" << input << std::endl;
    }
    while (std::cin >> input);
    // Visual Studio 2022 だと、上記のコードでもループ脱出できない
    // 原因を調べたい

    std::cout << "プログラムを終了します" << std::endl;
}