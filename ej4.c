#include <stdio.h>
#include <stdlib.h>
int main()
{
	float n[31]={0};
	int i=0;
	for(i=1;i<31;i++)
	{
		printf("Ingrese nota del Alumno %d: ",i);
		scanf("%f",&n[i]);
		n[0]=n[0]+n[i];
	}
	n[31]=n[0]/30;
   printf("%.1f",n[31]);
	return 0;
}
