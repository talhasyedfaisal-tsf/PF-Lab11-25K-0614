#include <stdio.h>

int power(int base, int exp) {
   if (exp == 0) {
       return 1;
   }
   return base * power(base, exp - 1);
}

int main() {
   int b, e;
   printf("Enter base: ");
   scanf("%d", &b);
   printf("Enter exponent: ");
   scanf("%d", &e);
   
   printf("Result: %d\n", power(b, e));
   return 0;
}
