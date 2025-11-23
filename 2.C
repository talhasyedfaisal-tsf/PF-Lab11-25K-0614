#include <stdio.h>

int countUpper(char *str) {
   if (*str == '\0') {
       return 0;
   }
   
   int count = 0;
   // Check if current char is between 'A' and 'Z'
   if (*str >= 'A' && *str <= 'Z') {
       count = 1;
   }
   
   return count + countUpper(str + 1);
}

int main() {
   char text[100];
   printf("Enter a string: ");
   scanf("%s", text); // Note: simple scanf stops at space
   
   printf("Uppercase count: %d\n", countUpper(text));
   return 0;
}
