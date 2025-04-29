#include <stdio.h>
int main()
{
   int n, even = 0, odd = 0;
   scanf("%d", &n);
   int array[n];
   for (int i = 0; i < n; i++)
   {
      scanf("%d", &array[i]);
   }
   for (int i = 0; i < n; i++)
   {
      if(array[i] % 2 == 0){
         even++;
      }
      else{
         odd++;
      }
   }
   printf("Even = %d\n", even);
   printf("Odd = %d", odd);
   return 0;
}