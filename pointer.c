#include <stdio.h>
int main (){
	int num1 = 12;
	int num2 = 13;
	int num3 = 14;
	int *ptr1 = &num1;
	int *ptr2 = &num2;
	int *ptr3 = &num3;
	printf("%p\n", ptr1);
	printf("%p\n", ptr2);
	printf("%p\n", ptr3);



return 0;
}

