#include <iostream>

int main()
{
	// p. 56
	// ���K��� 1.6 (1)
	int array[] = { 4, 2, 1, 9, 5 };

	std::cout << array[0] << std::endl;
	std::cout << array[1] << std::endl;
	std::cout << array[2] << std::endl;
	std::cout << array[3] << std::endl;
	std::cout << array[4] << std::endl;

	// ---

	// ���K��� 1.6 (2)
	// p. 56�Q��
	char string[] = "Hello, \0world";
	std::cout << string << std::endl;
	// ���s���ʁFHello, 
	// char�^�̏ꍇ�A�I�[����������ƁA�I�[�����̌��ɂ����當���񂪂��낤���F������Ȃ�

	// ---
	// ���K��� 1.6 (3)
	std::string stringFix = "Hello, \0world";
	std::cout << stringFix << std::endl;
	// ���s���ʁFHello, 
	// std::string�^�ɕύX�����ꍇ�ł��A�I�[�������r���ŏo�Ă���ƌ��̕����͔F������Ȃ��悤��
}