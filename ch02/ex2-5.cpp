#include <iostream>

// p. 101
///////////////////
// ���K��� 2.5  
//(p.99 �Q��)

// --- ��`�i�{���Ȃ�w�b�_�j
class someLongLongSoLongClassName
{
public:
	// �l�X�g�����^���̐錾�B���e��int�Ɠ����B
	using nestTypedNameInt = int;
	nestTypedNameInt getValue();
	void setValue(nestTypedNameInt value);
private:
	nestTypedNameInt mValue;
};

// --- �����i�{���Ȃ�CPP�j
someLongLongSoLongClassName::nestTypedNameInt someLongLongSoLongClassName::getValue()
{
	return mValue;
}

void someLongLongSoLongClassName::setValue(someLongLongSoLongClassName::nestTypedNameInt value)
{
	mValue = value;
}

// --- main.cpp

int main()
{
	using someLongClass = someLongLongSoLongClassName;
	auto slc = new someLongClass(); // using�ŗ^����ꂽ�ʖ����g�p

	slc->setValue(55); // new �ŗ̈���m�ۂ��Ă��邽�߁A�A���[���Z�q�łȂ��ƃG���[�ɂȂ�
	std::cout << slc->getValue() << std::endl;
}