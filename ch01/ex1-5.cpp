#include <iostream>

void show_value(float f)
{
	std::cout << f << std::endl;
}

int main()
{
	// p. 50
	// 練習問題 1.5 (1)
	// 修正前
	// int i = 42.195f;
	// 修正後
	float i = 42.195f;
	show_value(i);
	// 修正理由：float値をint型の変数に格納すると、小数点が切り捨てられるため、float型に変更した

	// ---

	// 練習問題 1.5 (2)
	float f = 100.001f;
	f -= 100;
	std::cout << f << std::endl;
	// 実行結果は 0.000999451
	// (0.001 にはならない)
	// 理由：浮動小数点は、整数ほど値が正確ではないため、このような誤差が発生した

	// ---

	// 練習問題 1.5 (3)
	int ii = 0;
	// 修正箇所(p.41参照)
	int* pii = &ii; // (変数iiのアドレスを持つポインタ変数を作成)
	*pii = 42; // (変数iiのアドレスの中身を、0から42に上書き)
	std::cout << ii << std::endl; // 42と出力される
}