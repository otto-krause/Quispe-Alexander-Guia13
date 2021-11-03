#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int n[12]={0};
    int a[3]={0};
    int i;
    for(i=1;i<11;i++)
    {
        printf("Ingrese numero:");
        scanf("%d",&n[i]);
    }
    for(i=1;i<11;i++)
    {
        if(n[i]<n[i+1])
        {
            a[0]+=1;
        }
        else{
            if(n[i]>n[i+1]){
                a[1]+=1;
            }
        }
    }
    a[3]=n[1]+n[10];
    if(a[0]==9)
    {
        printf("Ascendente\n");
        printf("Suma de los extremos: %d",a[3]);
    }else
    {
        if(a[1]==10){
            printf("Descendente\n");
            printf("Suma de los extremos: %d",a[3]);
        }else{
            printf("Desordenada\n");
            printf("Suma de los extremos: %d",a[3]);
        }
    }
}
