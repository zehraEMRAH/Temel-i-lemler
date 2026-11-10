#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kun=4565;                        ;
    int birler,onlar,yuzler,binler,temp;
    birler=kun %10;
    onlar=(kun/10)%10;
    yuzler=(kun/100)%10;
    binler=(kun/1000)%10;

    printf("sayi=%d\n",kun);
    printf("birler basamagi=%d\n",birler);
    printf("onlar basamagi=%d\n",onlar);
    printf("yuzler basamagi=%d\n",yuzler);
    printf("binler basamagi=%d\n",binler);


    temp=birler;
    birler=binler;
    binler=temp;

    printf("yeni birler basamagi=%d\n",birler);
    printf("yeni binler basamagi=%d\n",binler);
    

    onlar=onlar*10;
    yuzler=yuzler*100;
    binler=binler*1000;
    binler=binler+yuzler+onlar+birler;

    printf("eski sayi=%d\n",kun);
    printf("yeni sayi=%d\n",binler);

    return 0;


}
