#include <stdio.h>

void getTicket() {
   static int count = 0;
   count++;
   printf("Ticket Number: %d\n", count);
}
int main() {
   printf("Pressing button...\n");
   getTicket();
   getTicket();
   getTicket();
   
   return 0;
}
