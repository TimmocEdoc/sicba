#include <stdio.h>

int main()
{
   int num;
   printf("insert number here:");
   scanf("%d", &num);
    printf(num % 2 == 0 ? "number is even." : "number is odd.");
   return 0;
}
