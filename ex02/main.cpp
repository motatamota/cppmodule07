#include "Array.h"
#include <iostream>

int main() {
	try {
		// サイズ指定コンストラクタのテスト
		Array<int> arr1(5);
		for (unsigned int i = 0; i < arr1.size(); ++i) {
			arr1[i] = i * 10;
		}

		// 配列の内容を出力
		for (unsigned int i = 0; i < arr1.size(); ++i) {
			std::cout << arr1[i] << " ";
		}
		std::cout << std::endl;

		// コピーコンストラクタのテスト
		Array<int> arr2 = arr1;
		arr2[0] = 999;
		std::cout << "arr1[0]: " << arr1[0] << ", arr2[0]: " << arr2[0] << std::endl;

		// 範囲外アクセスのテスト
		std::cout << arr1[10] << std::endl; // 例外が発生する
	} catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
