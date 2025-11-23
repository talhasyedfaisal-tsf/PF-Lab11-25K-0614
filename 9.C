#include <stdio.h>
#define SIZE 3

struct Product {
   char name[20];
   float price;
};

int main() {
   struct Product items[SIZE];
   for(int i=0; i<SIZE; i++) {
       printf("Enter item %d name: ", i+1);
       scanf("%s", items[i].name);
       printf("Enter price: ");
       scanf("%f", &items[i].price);
   }
   
   printf("\n--- Inventory ---\n");
   for(int i=0; i<SIZE; i++) {
       printf("%d. %s : $%.2f\n", i+1, items[i].name, items[i].price);
   }
   return 0;
}
