#include <iostream>

int main()
{
	// —ûK–â‘è 1.4 ‚Ì2
	int a = 2;
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
}