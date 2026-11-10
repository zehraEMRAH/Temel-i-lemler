#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=1;
    int y;
    int toplam=0;
    int carpim=1;
    int z;
    char a;
    int t;
    printf("faktoriyel hesabi=F,carpim tablosu=C,bir sayidan baska bir sayiya kadar olan sayilarin toplami=T,\n");
    printf("yapmak istediginiz islemi harf ile girin=\n");
    scanf(" %c",&a);//BOSLUK KOYMADAN CALISMAZ
    if (a!='F' && a!='C'&& a!='T'){
        printf("Tanimsiz harf girisi!\n");
        return 0;
    }
    printf("sayi girin=\n");
    scanf("%d",&y);

    switch(a){
     case 'F':
        for(x=1;x<=y;x++){
                carpim=carpim*x;
        }printf("%d sayisinin faktoriyeli=%d\n",y,carpim);
        break;
     case 'C':
        while(x<=10){
            carpim=y*x;
            printf("%d*%d=%d\n",x,y,carpim);
            x++;
        }break;
     case 'T':
        printf("ikinci sayiyi girin=\n");
        scanf("%d",&z);
        t=y;
         for(t;t<=z;t++){
            toplam=toplam+t;
         }printf("%d sayisindan %d sayisina kadar olan sayilarin toplami=%d\n",y,z,toplam);
     break;

  }
    return 0;
}
