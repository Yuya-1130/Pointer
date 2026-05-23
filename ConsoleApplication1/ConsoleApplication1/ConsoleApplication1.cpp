

#include <stdio.h>

int main()
{ 
	// int 型の変数に10 を代入する
	int a = 10;
	printf("a が保持する値は %d です。\n", a);

	// 変数のアドレスを int 型のポインタ変数 pointer に代入する
	int* pointer = &a;
	printf("pointer が保持する値は %p です。\n", pointer);
}

