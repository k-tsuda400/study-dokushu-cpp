#include <iostream>

void show_value(float f)
{
	std::cout << f << std::endl;
}

int main()
{
	// p. 50
	// ���K��� 1.5 (1)
	// �C���O
	// int i = 42.195f;
	// �C����
	float i = 42.195f;
	show_value(i);
	// �C�����R�Ffloat�l��int�^�̕ϐ��Ɋi�[����ƁA�����_���؂�̂Ă��邽�߁Afloat�^�ɕύX����

	// ---

	// ���K��� 1.5 (2)
	float f = 100.001f;
	f -= 100;
	std::cout << f << std::endl;
	// ���s���ʂ� 0.000999451
	// (0.001 �ɂ͂Ȃ�Ȃ�)
	// ���R�F���������_�́A�����قǒl�����m�ł͂Ȃ����߁A���̂悤�Ȍ덷����������

	// ---

	// ���K��� 1.5 (3)
	int ii = 0;
	// �C���ӏ�(p.41�Q��)
	int* pii = &ii; // (�ϐ�ii�̃A�h���X�����|�C���^�ϐ����쐬)
	*pii = 42; // (�ϐ�ii�̃A�h���X�̒��g���A0����42�ɏ㏑��)
	std::cout << ii << std::endl; // 42�Əo�͂����
}