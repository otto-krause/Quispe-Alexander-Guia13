#include <stdio.h>
#include <stdlib.h>
int main() {
	int res[5]={0};
	int i;
	int rt=0;
	printf("Ingrese 5 resistencias: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&res[i]);
	}
	for(i=0;i<5;i++)
	{
		res[5]=res[5]+res[i] ;
		printf("R%d:%d\n",i,res[i]);
	}
	printf("RT:%d",res[5]);
	return 0;
}

