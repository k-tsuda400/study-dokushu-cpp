#include <iostream>

int main()
{
	// p. 56
	// 練習問題 1.6 (1)
	int array[] = { 4, 2, 1, 9, 5 };

	std::cout << array[0] << std::endl;
	std::cout << array[1] << std::endl;
	std::cout << array[2] << std::endl;
	std::cout << array[3] << std::endl;
	std::cout << array[4] << std::endl;

	// ---

	// 練習問題 1.6 (2)
	// p. 56参照
	char string[] = "Hello, \0world";
	std::cout << string << std::endl;
	// 実行結果：Hello, 
	// char型の場合、終端文字があると、終端文字の後ろにいくら文字列があろうが認識されない

	// ---
	// 練習問題 1.6 (3)
	std::string stringFix = "Hello, \0world";
	std::cout << stringFix << std::endl;
	// 実行結果：Hello, 
	// std::string型に変更した場合でも、終端文字が途中で出てくると後ろの文字は認識されないようだ
}