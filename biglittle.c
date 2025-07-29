#include <stdio.h>
int main (){
	int num =0;
	printf("num=%d\n", num);
	short *ptr = (short*)&num;
	*ptr = 0;
	printf("%p *ptr=%d\n", &*ptr , *ptr);
        *(ptr +1) = 1;
	printf("%p *(ptr+1)=%d\n", &*(ptr+1) , *(ptr+1));
	printf("%d\n", num);
return 0;

}
