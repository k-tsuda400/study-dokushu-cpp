#include <iostream>

int main()
{
	// p. 80
	///////////////////
	// ���K��� 2.1 (1)
	struct product
	{
		int id;
		int price;
		int stock;

		// �ʓ|�Ȃ̂ŁA�֐����\���̂̒��ɏ������Ⴄ
		// C++�ł́A�\���̂̒��Ɋ֐���錾�ł���
		// �ڍׁFhttps://qiita.com/pink_bangbi/items/e25302df7f4ba7fa0db4

		// �ύX�O
		//static void show_product(product product)
		//{
		//	std::cout << "���iID: " << product.id << std::endl;
		//	std::cout << "�P��: " << product.price << std::endl;
		//	std::cout << "�݌ɐ�: " << product.stock << std::endl;
		//}
		// �ύX��
		static void show_product(product* product)
		{
			std::cout << "���iID: " << product->id << std::endl;
			std::cout << "�P��: " << product->price << std::endl;
			std::cout << "�݌ɐ�: " << product->stock << std::endl;
		}
	};// �\���̂̍Ō�ɃZ�~�R��������̖Y�ꂸ��

	product pen =
	{
		0,   // ���iID
		100, // �P��
		200, // �݌ɐ�
	};

	// �ύX�O
	//product::show_product(pen);

	// �ύX��
	auto* pen_ptr = &pen; // auto�̓|�C���g�^�܂Ő��肵�Ă���Ȃ��̂ŁA*������
	product::show_product(pen_ptr);



	// -----
	///////////////////
	// ���K��� 2.1 (2)
	// ���p�̂ƍ\���̂̈Ⴂ�́A
	// ���p�́F�ϐ������ׂē���̃A�h���X��ɑ��݂��Ă���
	// �\���́F�ϐ������ׂĕʁX�̃A�h���X��ɑ��݂��Ă���
	// �ł���B�����āA���p�̂́u�擪�̃����o�[�ϐ��̂ݏ������ł���v�Ƃ����A
	// �p�r�����Ɍ���ꂽ�g����������i�g�ݍ��݃\�t�g�Ƃ��j


	// -----
	///////////////////
	// ���K��� 2.1 (3)

	struct S
	{
		int x;
		int y;
	};

	union U
	{
		S s;
	};
	U u = {};
	u.s.x = 10;
	u.s.y = 20;

	std::cout << "-----" << std::endl;
	std::cout << u.s.x << std::endl;
	// ���s���ʂ́u10�v�������B
}