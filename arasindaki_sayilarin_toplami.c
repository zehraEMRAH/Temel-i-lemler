#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ilkTerim;
    int sonTerim;
    int toplam=0;
    int baslangic;


    printf("ilk terimi girin=\n");
    scanf("%d",&ilkTerim);
    printf("son terimi girin=\n");
    scanf("%d",&sonTerim);
    if(ilkTerim>sonTerim){
        printf("gecersiz sayilar.\n");
        ;
    return 0;
    }

        baslangic=ilkTerim;
     while( ilkTerim<=sonTerim){
        toplam=ilkTerim+toplam;
        ilkTerim++;
}
    printf("%d sayisindan %d sayisina kadar olan sayilarin toplami=%d\n",baslangic,sonTerim,toplam);
    return 0;
}
