#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf(" Tam sayi girin=\n");
    scanf ("%d",&x);

    if(x<0 && x%2==0){
        printf("%d sayisi negatif cift sayidir.\n",x);
    }else if(x<0 && x%2!=0){
        printf("%d sayisi negatif tek sayidir.\n",x);
    }else if(x>0 && x%2==0){
        printf("%d sayisi pozitif cift sayidir.\n",x);
    }else if(x>0 && x%2!=0){
        printf("%d sayisi pozitif tek sayidir.\n",x);
    }else{// 0 girilmesi durumu.
        printf("%d sayisi cift sayidir.\n",x);
    }
    return 0;
}
