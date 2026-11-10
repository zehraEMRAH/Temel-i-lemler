#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("1. sayiyi girin=\n");
    scanf("%d",&a);
    printf("2. sayiyi girin=\n");
    scanf("%d",&b);

    if(a>b){
        printf("%d sayisi%d sayisindan buyuktur.\n",a,b);

    }else if(a<b){
    printf("%d sayisi %d sayisindan kucuktur.\n",a,b);

    }else{
    printf("%d sayisi %d sayisina esittir.\n",a,b);
    }
    return 0;
}
