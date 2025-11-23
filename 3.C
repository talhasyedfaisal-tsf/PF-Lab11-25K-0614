#include <stdio.h>

int getMin(int arr[], int n) {
   if (n == 1) {
       return arr[0];
   }
   
   int minOfRest = getMin(arr + 1, n - 1);
   
   if (arr[0] < minOfRest) {
       return arr[0];
   } else {
       return minOfRest;
   }
}

int main() {
   int temps[] = {32, 29, 15, 40, 22};
   int size = 5;
   
   printf("Lowest Temp: %d\n", getMin(temps, size));
   return 0;
}
