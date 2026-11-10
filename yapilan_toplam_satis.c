#include <stdio.h>
#include <stdlib.h>

int main()
{
    // girilen güne kadar geçen tüm günlerdeki satışların toplamı.
    int yapilanToplamSatis=0;
    int gun;
    char *gunIsmi;
    printf("gun girin(1-7)=\n");
    scanf("%d",&gun);

    switch(gun){
        case 7:yapilanToplamSatis+=7;
              if(gun==7){ gunIsmi="pazar";}
        case 6:yapilanToplamSatis+=15;
              if (gun==6){ gunIsmi="cumartesi";}
        case 5:yapilanToplamSatis+=12;
              if (gun==5){ gunIsmi="cuma";}
        case 4:yapilanToplamSatis+=6;
              if (gun==4){ gunIsmi="persembe";}
        case 3:yapilanToplamSatis+=11;
              if (gun==3){ gunIsmi="carsamba";}
        case 2:yapilanToplamSatis+=8;
              if (gun==2){ gunIsmi="sali";}
        case 1:yapilanToplamSatis+=13;
              if (gun==1){ gunIsmi="pazartesi";}//if yapýsý gun ismi doðru yazýlsýn diye var.
              break;
        default:printf("girdiginiz gun gecersiz.\n");
}
printf("gun ismi:%s,toplam satis:%d\n",gunIsmi,yapilanToplamSatis);// s metin için kullanýlýr.
    return 0;
}
