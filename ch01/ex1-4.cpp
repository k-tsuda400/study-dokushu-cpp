#include <iostream>

int main()
{
	// p. 35
	// ���K��� 1.4 ��2
	// int a = 4 ���ƁADafault�ɊY�����邪�ADefault���������̂ŉ����\������Ȃ�
	int a = 4;
	switch (a + 1)
	{
		case 1:
			std::cout << "a + 1 is 1" << std::endl;
			break;
		case 2:
			std::cout << "a + 1 is 2" << std::endl;
			break;
		// default �������Ă݂�
		case 3:
			std::cout << "a + 1 is 3" << std::endl;
			break;
	}

	// ���K��� 1.4 ��3
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