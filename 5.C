#include <stdio.h>
#include <string.h>

int checkPalindrome(char str[], int start, int end) {
   if (start >= end) {
       return 1; // True
   }
   if (str[start] != str[end]) {
       return 0; // False
   }
   return checkPalindrome(str, start + 1, end - 1);
}

int main() {
   char word[50];
   printf("Enter word: ");
   scanf("%s", word);
   
   int len = strlen(word);
   if (checkPalindrome(word, 0, len - 1)) {
       printf("It is a palindrome.\n");
   } else {
       printf("Not a palindrome.\n");
       }
       
return 0;
}
