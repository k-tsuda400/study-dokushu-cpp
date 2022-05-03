#include <iostream>

int main()
{
	// p. 35
	// —ûK–â‘è 1.4 ‚Ì2
	// int a = 4 ‚¾‚ÆADafault‚ÉŠY“–‚·‚é‚ªADefault‚ªÁ‚¦‚½‚Ì‚Å‰½‚à•\¦‚³‚ê‚È‚¢
	int a = 4;
	switch (a + 1)
	{
		case 1:
			std::cout << "a + 1 is 1" << std::endl;
			break;
		case 2:
			std::cout << "a + 1 is 2" << std::endl;
			break;
		// default ‚ğÁ‚µ‚Ä‚İ‚é
		case 3:
			std::cout << "a + 1 is 3" << std::endl;
			break;
	}

	// —ûK–â‘è 1.4 ‚Ì3
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