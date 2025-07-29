#include <stdio.h>
int main (){
	int num1 = 0;
	int num2 = 0;
	int *ptr1 = &num1;
	int *ptr2 = &num2;
	scanf("%d", &num1  );
	scanf("%d", &num2);
	int x = 0;
	int y = 0;
 	 x =  *ptr1 + *ptr2;
	y = *ptr1 - *ptr2;
	printf("%d\n %d\n", x , y );


return 0;

}
