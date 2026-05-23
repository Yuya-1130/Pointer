
#include <stdio.h>
#include <iostream>

int main()
{
	
	
	printf("ポインタ版の値を入れ替えるプログラム\n");
	void Swap(); {
		int Point = 1;
		printf("Point が保持する値は %d です\n", Point);

		int* Pointer = &Point;

		*Pointer = 2;
		printf("Pointer が保持する値は %d です\n", *Pointer);
	 
   }
	printf("参照版の値を入れ替えるプログラム\n");
	void Swap2(); {
		int Count = 3;
		printf("Count が保持する値は %d です\n", Count);

		int& Counter = Count;

		Counter = 4;
		printf("Counter が保持する値は %d です\n", Counter);

		std::cout << "Counter = " << Counter << std::endl; // 4と表示される
	}

}

