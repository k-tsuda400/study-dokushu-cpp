#include <iostream>

// p. 101
///////////////////
// 練習問題 2.5  
//(p.99 参照)

// --- 定義（本来ならヘッダ）
class someLongLongSoLongClassName
{
public:
	// ネストした型名の宣言。内容はintと同じ。
	using nestTypedNameInt = int;
	nestTypedNameInt getValue();
	void setValue(nestTypedNameInt value);
private:
	nestTypedNameInt mValue;
};

// --- 実装（本来ならCPP）
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
	auto slc = new someLongClass(); // usingで与えられた別名を使用

	slc->setValue(55); // new で領域を確保しているため、アロー演算子でないとエラーになる
	std::cout << slc->getValue() << std::endl;
}