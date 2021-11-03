#include <stdio.h>
#include <stdlib.h>
int main()
{
	int fb[3]={0,0,1};
	int i,n;
	printf("Ingrese un numero:");
	scanf("%d",&n);
	printf("1,");
	for(i=1;i<n;i++)
	{
			fb[0]=fb[1]+fb[2];
			fb[1]=fb[2];
			fb[2]=fb[0];
			printf("%d,",fb[0]);
	}
	return 0;
}


