#include <stdio.h>

struct Car {
   char model[20];
   char plate[15];
};

struct Driver {
   char name[20];
   int id;
   struct Car c;
};

int main() {
   struct Driver d = {"Ali", 501, {"Corolla", "XYZ-999"}};
   struct Driver *ptr = &d;

   printf("-- Driver Details --\n");
   printf("Name: %s\n", ptr->name);
   printf("ID: %d\n", ptr->id);
   printf("Car: %s\n", ptr->c.model);
   printf("Plate: %s\n", ptr->c.plate);

   return 0;
}
