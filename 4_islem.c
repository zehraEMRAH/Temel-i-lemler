#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("1.sayiyi girin=\t");
    scanf("%d",&a);

    printf("2.sayiyi giriin=\t");
    scanf("%d",&b);

    int toplam=a+b;
    printf("sayilarin toplami=%d\n",toplam);

    int fark=a-b;
    printf("sayilarin farki=%d\n",fark);

    double carpim=a*b;
    printf("sayilarin carpimi=%.40f\n",carpim);

    return 0;
}
