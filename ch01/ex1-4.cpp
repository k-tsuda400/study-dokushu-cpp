#include <iostream>

int main()
{
	// p. 35
	// 練習問題 1.4 の2
	// int a = 4 だと、Dafaultに該当するが、Defaultが消えたので何も表示されない
	int a = 4;
	switch (a + 1)
	{
		case 1:
			std::cout << "a + 1 is 1" << std::endl;
			break;
		case 2:
			std::cout << "a + 1 is 2" << std::endl;
			break;
		// default を消してみる
		case 3:
			std::cout << "a + 1 is 3" << std::endl;
			break;
	}

	// 練習問題 1.4 の3
	/*
	auto statement = a + 1;
	if (statement == 1) {
		std::cout << "a + 1 is 1" << std::endl;
	} else if () (statement == 2) {
		std::cout << "a + 1 is 2" << std::endl;
	} else if () (statement == 1) {
		std::cout << "a + 1 is 3" << std::endl;
	} else {
		std::cout << "a + 1 is not 1, 2, 3" << std::endl;
	}
	*/
}