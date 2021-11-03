#include <stdio.h>
#include <stdlib.h>
int main()
{
	// f[0]=suma, f[1]=producto, f[2]=promedio, f[3]=cant deb_prom
	int n[11]={0};
	int i;
	float f[4]={0,1,0,0};
	for(i=1;i<11;i++){
		printf("Ingrese un numero: ");
		scanf("%i",&n[i]);
	}
	for(i=1;i<11;i++){
		f[0]+=n[i];
		f[1]=f[1]*n[i];
	}
	f[2]=f[0]/10;
	for(i=1;i<11;i++)
	{
		if(n[i]<f[2])
		{
			f[3]+=1;
		}
	}
	printf("Suma=%.0f\n",f[0]);
	printf("producto=%.0f\n",f[1]);
	printf("promedio=%.2f\n",f[2]);
	printf("Debajo del prom=%.0f\n",f[3]);
	getchar();
	return 0;
}

