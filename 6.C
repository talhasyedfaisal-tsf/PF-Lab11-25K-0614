#include <stdio.h>

struct Student {
   char name[30];
   int roll;
   char dept[30];
   float gpa;
};

int main() {
   struct Student s[3];
   int i;

   // Loop for input
   for(i = 0; i < 3; i++) {
       printf("Enter details for student %d\n", i+1);
       printf("Name: ");
       scanf("%s", s[i].name);
       printf("Roll No: ");
       scanf("%d", &s[i].roll);
       printf("Dept: ");
       scanf("%s", s[i].dept);
       printf("GPA: ");
       scanf("%f", &s[i].gpa);
   }
   printf("\n-- Student List --\n");
   for(i = 0; i < 3; i++) {
       printf("%s \t %d \t %s \t %.2f\n", s[i].name, s[i].roll, s[i].dept, s[i].gpa);
   }
   return 0;
}
