
#include<stdio.h>
int numberOfDigitsInNumber(int number) {
   int count = 0;
   while (number>0) {
      count++;
      number=number/10;
   }
   return count;
}
int main() {
   int number;
   scanf("%d", &number);
   int buf = number;
   int  count= numberOfDigitsInNumber(number);
   int array[count];
   for (int i = 0; i < count ; i++)
   {
      array[count-1-i] = buf % 10;
      buf= buf / 10;
   }
   for (int i = 0; i < count/2; i++) {
      if (array[i] != array[count-1-i])  return  printf("No");
   }
   return printf("Yes");
}