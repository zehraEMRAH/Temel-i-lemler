#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bakiye=3000;
    long int x;
    int islem;


    printf("ATM'ye hos geldiniz.\n ");
    printf ("para cekme=1\n");// enaz 100 TL
    printf("para yatirma=2\n");//en az 100 TL
    printf("para transfer=3\n");
    printf("yapmak istediginiz islemi secin=\n");
    scanf("%d",&islem);

    switch(islem){
        case 1:
            printf("cekmek istediginiz tutari girin=\n");
            int tutar;
            scanf("%d",&tutar);
            if(tutar<100){
                printf("en az 100TL cekebilirsiniz.\n");
            }else if(tutar<bakiye){
                int kalan=bakiye-tutar;
                printf("kalan bakiye= %d.\n",kalan);
            }else {
                printf("yetersiz bakiye.");
            }break;
        case 2:
            printf("yarirmak istediginiz tutari girin=\n");
            scanf("%d",&tutar);
            if(tutar<100){
                printf("en az 100 TL yatiriniz.\n");
            }else{
               bakiye+=tutar;
               printf("yeni bakiyeniz=%d\n",bakiye);
            }break;
        case 3:
            printf("transfer yapmak istediginiz 11 haneli iban numarasi girin=TR\n");
            long int iban;
            scanf("%ld",&iban);
            printf("transfer yapmak istedigingiz tutari girin=\n");
            scanf("%d",&tutar);
           if(tutar>bakiye){
                printf("yertersiz bakiye.\n");
            }else{
             int kalan=bakiye-tutar;
              printf("yeni bakiyeniz=%d\n",kalan);
            }break;
        default:
            printf("hatali secim.\n");

    }
    return 0;
}
