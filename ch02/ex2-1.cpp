#include <iostream>

int main()
{
	// p. 80
	///////////////////
	// 練習問題 2.1 (1)
	struct product
	{
		int id;
		int price;
		int stock;

		// 面倒なので、関数を構造体の中に書いちゃう
		// C++では、構造体の中に関数を宣言できる
		// 詳細：https://qiita.com/pink_bangbi/items/e25302df7f4ba7fa0db4

		// 変更前
		//static void show_product(product product)
		//{
		//	std::cout << "商品ID: " << product.id << std::endl;
		//	std::cout << "単価: " << product.price << std::endl;
		//	std::cout << "在庫数: " << product.stock << std::endl;
		//}
		// 変更後
		static void show_product(product* product)
		{
			std::cout << "商品ID: " << product->id << std::endl;
			std::cout << "単価: " << product->price << std::endl;
			std::cout << "在庫数: " << product->stock << std::endl;
		}
	};// 構造体の最後にセミコロンつけるの忘れずに

	product pen =
	{
		0,   // 商品ID
		100, // 単価
		200, // 在庫数
	};

	// 変更前
	//product::show_product(pen);

	// 変更後
	auto* pen_ptr = &pen; // autoはポイント型まで推定してくれないので、*をつける
	product::show_product(pen_ptr);



	// -----
	///////////////////
	// 練習問題 2.1 (2)
	// 共用体と構造体の違いは、
	// 共用体：変数がすべて同一のアドレス上に存在している
	// 構造体：変数がすべて別々のアドレス上に存在している
	// である。そして、共用体は「先頭のメンバー変数のみ初期化できる」という、
	// 用途が非常に限られた使い方をする（組み込みソフトとか）


	// -----
	///////////////////
	// 練習問題 2.1 (3)

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
	// 実行結果は「10」だった。
}