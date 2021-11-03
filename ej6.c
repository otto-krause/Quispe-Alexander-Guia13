
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int suel[20]={0};
	int ct[1]={0};
	int i;
	for(i=1;i<21;i++)
    {
	printf("Ingrese sueldo %d:",i);
	    scanf("%d",&suel[i]);
	    if(suel[i]>2000){
            ct[0]+=1;
	    }else{
	        ct[1]+=1;
	    }
	}
    printf("Sueldo mayor a 2000:%d\n",ct[0]);
    printf("Sueldo menor a 2000:%d",ct[1]);
	return 0;
}
