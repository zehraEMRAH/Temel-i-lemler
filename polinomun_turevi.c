#include <stdio.h>
#include <stdlib.h>

int main()
{
   char x='x';
   int y,z,t;
   int denklem,denklem2;

   printf("denklemin ilk kat sayisini girin=\n");
   scanf("%d",&t);
   printf("denklemin ikinci kat sayisini girin=\n");
   scanf("%d",&y);
   printf("sabit terimi girin=\n");
   scanf("%d",&z);
   denklem=t-1;
   denklem2=y-1;

   printf("polinomun turev denklemi=%d*x+%d\n",denklem,denklem2);


    return 0;
}
