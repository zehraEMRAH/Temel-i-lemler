#include <stdio.h>
#include <stdlib.h>

int main()
{
    float aci1;
    float aci2;
    float aci3;
    printf("ucgenin turunu belirleme.\n");
    printf("1. aciyi girin=\n");
    scanf("%f",&aci1);

    printf("2. aciyi girin=\n");
    scanf("%f",&aci2);

    printf("3. aciyi girin=\n");
    scanf("%f",&aci3);

    if(aci1+aci2+aci3>180){
        printf("gecersiz veri.\n");
    return 0;
    }else if (aci1==aci2 && aci1==aci3){
     printf("eskenar ucgen.\n");
    }else if(aci1==aci2&& aci2!=aci3 || aci1==aci3&& aci1!=aci2 || aci2==aci3 && aci2!=aci1){
     printf("ikizkenar ucgen.\n");
    }else{
     printf("cesitkenar ucgen.\n");
    }


    return 0;
}
