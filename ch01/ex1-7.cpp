#include <iostream>

int main()
{
	// p. 68
	///////////////////
	// ���K��� 1.7 (1)
	int array[] = { 4, 2, 1, 9, 5 };

	// �z��̑傫����ϐ��Ƃ��Ċl������C�f�B�I���B�z�񑍐��̃o�C�g�� �� �z���1�v�f�̃o�C�g��
	// �Q�l�Fhttps://qiita.com/SaitoAtsushi/items/ee17466c464fb7a270d2
	int sizeOfArray = sizeof(array) / sizeof(*array);

	int i = 0;
	while (i < 5)
	{
		// before (�z����A������\��)
		//std::cout << array[i] << std::endl;
		//i += 1;

		// after (�z����A��납��\��)
		std::cout << array[sizeOfArray - i - 1] << std::endl;
		i += 1;
	}

	// ---
	std::cout << "---" << std::endl;

	///////////////////
	// ���K��� 1.7 (2)
	for (i = 0; i < 5; i++)
	{
		std::cout << array[sizeOfArray - i - 1] << std::endl;
	}

	// ---
	std::cout << "---" << std::endl;

	///////////////////
	// ���K��� 1.7 (3)
	i = 0;
	do 
	{
		std::cout << array[sizeOfArray - i - 1] << std::endl;
		i += 1;
	} while (i < 5);
	// ���l�Fwhile�̂��Ƃ̃Z�~�R�������킷�꒍��

	
}