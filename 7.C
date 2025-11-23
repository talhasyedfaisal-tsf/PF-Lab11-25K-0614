#include <stdio.h>

struct Dish {
   char name[30];
   float price;
};

struct Restaurant {
   char name[30];
   char address[50];
   float rating;
   struct Dish special;
};

int main() {
   struct Restaurant r = {"City Foods", "123 Street", 4.2, {"Chicken Karahi", 12.50}};

   printf("Restaurant: %s\n", r.name);
   printf("Address: %s\n", r.address);
   printf("Rating: %.1f\n", r.rating);
   printf("Today's Special: %s - $%.2f\n", r.special.name, r.special.price);
   
   return 0;
}
