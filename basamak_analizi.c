#include <stdio.h>
#include <stdlib.h>

int main()
{
    int zeh=3546;
    int birler=zeh%10;
    int onlar=( zeh/10)%10;
    int yuzler=(zeh/100)%10;
    int binler=(zeh/1000)%10;

    printf("sayi=%d\n",zeh);
    printf("birler basamagi=%d\n",birler);
    printf("onlar basamagi=%d\n",onlar);
    printf("yuzler basamagi=%d\n",yuzler);
    printf("binler basamagi=%d\n",binler);

    return 0;
}
