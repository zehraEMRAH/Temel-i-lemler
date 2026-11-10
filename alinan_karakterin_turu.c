#include <stdio.h>
#include <stdlib.h>

int main()
{
    char karakter;
    printf("bir karakrter girin=\n");
    scanf("%c",&karakter);

    if((karakter>='A')&& (karakter<='Z')){
        printf("buyuk harf girdiniz.\n");

    }else if((karakter>='a')&&(karakter<='z')){
       printf("kucuk harf girdiniz.\n");

    }else{
       printf("%c harf degildir.\n",karakter);
    }
    return 0;
}
