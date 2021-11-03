#include <stdio.h>
#include <stdlib.h>
int main()
{
	float n[6]={0};
	float m[1]={0};
	float p[1]={0};
	int i;
	printf("Ingrese 5 numeros: ");
	for(i=0;i<5;i++)
	{
		scanf("%f",&n[i]);
	}
	for(i=0;i<5;i++)
	{
		n[5]=n[5]+n[i];
	}
	for(i=0;i<5;i++)
	{
        if(n[i]>m[1])
		{
			m[1]=n[i];
		}

	}
	p[1]=n[5]/5;
	printf("Prom:%.2f\n",p[1]);
	printf("Mayor:%.0f",m[1]);
	return 0;
}

