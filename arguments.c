#include <stdio.h>

void myFunction(char name[], int age)
{
printf("Hello %s. You are %d years old\n", name, age);
}

int main()
{
myFunction("I'm, 5);
myFunction("Dazzling", 55);
myFunction("You", 555);
myFunction("Know", 5555);
myFunction("That?", 55555);
return 0;
