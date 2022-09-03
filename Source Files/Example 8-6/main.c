#include <stdio.h>

/* Прототип на функцията print_integer */
void print_integer(int x);

int main(void)
{
int value; /* Деклариране на локална променлива value */
value = 98; /* Присвояване на стойност на value */
print_integer(value); /* Използване на value като аргумент на print_integer() */ print_integer(100); /* Използване на константата 100 като аргумент на
print_integer() */
return 0; }
/* Дефиниция на функцията print_integer */
void print_integer(int x) 
{
      printf("Print %d\n", x);
      return;
}
