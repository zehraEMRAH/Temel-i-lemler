#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("sayi girin=\n");
    scanf("%d",&a);
    switch(a){
    case 1 ... 19:
        printf("merhaba!\n");
        break;
    case 20:
        printf("selam!\n");
        break;
    default:
        printf("varsayilan\n");

    }
    return 0;
}
