
#include <stdio.h>

int main(){
	// int 配列を6要素で初期化
	int array[6] = { 1, 2, 3, 4, 5, 6 };
	printf("添え字アクセスで全要素を表示する:\n");

	// 添え字アクセスで全要素を表示
	for(int i = 0; i < 6; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
	printf("----------------------------\n");

	//ポインタのインクリメントで同じ配列を表示する
	int* p = array;
	printf("ポインタのインクリメントで同じ配列を表示する:\n");

	for(int i = 0; i < 6; i++) {
		printf("%d ", *p);
		p++;
	}
}
