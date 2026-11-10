#include <stdio.h>
#include <stdlib.h>

int main()
{   int kullaniciNumarasi=1234567890;
    int sifre=1234;
    int x;
    int y;
     printf("kullanici numarasi girin=\n");
     scanf("%d",&x);
        if(x==1234567890){
          printf("sifre girin=\n");
          scanf("%d",&y);
          if(y==1234){
            printf("Giris basarili\nHos geldiniz.1234567890");
          }else{
            printf("sifre uyusmamaktadir.\n");
          }
        }else{
            printf("Kullanici ID uyusmamaktadir.\n");
           }


    return 0;
}
