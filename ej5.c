#include <stdio.h>
#include <stdlib.h>
int main()
{
	int vdi[16]={0};
	int vtg=0,vm=0;
	int i=0,i2=0;
	for(i=1;i<21;i++)
	{
    printf("Vendedor %d\n",i);
	    for(i2=1;i2<16;i2++){
            printf("Venta del dia %d:",i2);
            scanf("%d",&vdi[i]);
            vtg=vtg+vdi[i];
            if(vdi[i]>vm){
                vm=vdi[i];
            }
	    }
	}
	printf("Venta total:%d\n",vtg);
    printf("Mayor venta:%d",vm);
	return 0;
}
