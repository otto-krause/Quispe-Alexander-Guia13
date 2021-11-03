#include <stdio.h>
#include <stdlib.h>
int main()
{
	int nt[16]={0};
	int i;
	for(i=1;i<16;i++)
	{
		printf("Ingrese nota %d: ",i);
		scanf("%d",&nt[i]);
	}
	for(i=1;i<16;i++){
	if(nt[i]>8)
	{
	printf("[%d]",i);
	}
	}
	getchar();
	return 0;
}


