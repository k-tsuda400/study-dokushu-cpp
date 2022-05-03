#include <iostream>

int main()
{
	// p. 68
	///////////////////
	// 練習問題 1.7 (1)
	int array[] = { 4, 2, 1, 9, 5 };

	// 配列の大きさを変数として獲得するイディオム。配列総数のバイト数 ÷ 配列の1要素のバイト数
	// 参考：https://qiita.com/SaitoAtsushi/items/ee17466c464fb7a270d2
	int sizeOfArray = sizeof(array) / sizeof(*array);

	int i = 0;
	while (i < 5)
	{
		// before (配列を、頭から表示)
		//std::cout << array[i] << std::endl;
		//i += 1;

		// after (配列を、後ろから表示)
		std::cout << array[sizeOfArray - i - 1] << std::endl;
		i += 1;
	}

	// ---
	std::cout << "---" << std::endl;

	///////////////////
	// 練習問題 1.7 (2)
	for (i = 0; i < 5; i++)
	{
		std::cout << array[sizeOfArray - i - 1] << std::endl;
	}

	// ---
	std::cout << "---" << std::endl;

	///////////////////
	// 練習問題 1.7 (3)
	i = 0;
	do 
	{
		std::cout << array[sizeOfArray - i - 1] << std::endl;
		i += 1;
	} while (i < 5);
	// 備考：whileのあとのセミコロンつけわすれ注意

	
}