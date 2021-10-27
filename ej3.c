#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n[2]={0};
	int i=0;
	printf("Ingrese 2 numeros:");
	for(i=0;i<2;i++){
        scanf("%d",&n[i]);
	}
	if (n[0]>n[1]){
        for(i=n[1]+1;i<n[0];i++){
            printf("%d ",i);
        }
	}else{
	    if(n[1]>n[0]){
     for(i=n[0]+1;i<n[1];i++){
            printf("%d ",i);
	}}else{
	printf("Los numeros son iguales.");
	}
	}
	return 0;
}
