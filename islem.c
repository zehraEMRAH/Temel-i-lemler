#include <stdio.h>
#include <stdlib.h>

int main()
{  
    int x,y,ilkDenklem,ikinciDenklem,result;

    printf("ilk_sayiyi_girin=\n");
    scanf("%d",&x);

    printf("ikinci_sayiyi_girin=\n");
    scanf("%d",&y);

    //result=ilk denklem-ikinci denklem;

    result=2*x*y;

    printf("sonuc=%d\n",result);

    return 0;
}
