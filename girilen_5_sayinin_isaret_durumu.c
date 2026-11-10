#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int sayi=0;


    for(int i=0;i<5;i++){
        printf("sayi girin=\n");
        scanf("%d",&x);

       if(x<0){
      sayi++;

       }
    }
    printf("girilen sayilardan %d'si negatiftir.\n",sayi);
    printf("girilen sayilarin %d'si pozitiftir.\n",5-sayi);
    return 0;
}
