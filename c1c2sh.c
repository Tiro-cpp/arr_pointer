#include <stdio.h>
int main (){
	int num =0; 
	char *c1 = (char *)&num;
	char *c2 = (c1 +1);
	short *sh =(short*)(c2 + 1);
	printf("character 1-");
	scanf(" %c", c1);
	printf("chracter 2-");
	scanf(" %c", &*c2);
	printf("short integer-");
	scanf("%hd", &*sh);
	 


	printf("%p\n %p\n %p \n %p\n", &*c1,&*c2,&*sh, &*(sh+1)  );

return 0;


}
