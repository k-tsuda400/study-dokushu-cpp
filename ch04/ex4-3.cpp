#include <iostream>

// p. 204
///////////////////
//練習問題4-3

// (1)
// スコープから抜けた変数は破棄される
// 以前の値の再取得はできない

// (2)
int get_counter()
{
    // before
    //int counter = 0;
    //return counter++;

    // after (p. 202参照)
    static int counter = 0;
    return counter++;
}

int main()
{
    // before: 実行結果は 0, 0, 0
    // after: 実行結果は 0, 1, 2
    std::cout << get_counter() << std::endl;
    std::cout << get_counter() << std::endl;
    std::cout << get_counter() << std::endl;
}