#include <iostream>

int main()
{
	// 練習問題 1.4 の2
	int a = 2;
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
}