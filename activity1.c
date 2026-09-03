#include <stdio.h>

void greet(const char *name)
{
    printf("Hello, %s! Welcome to your GitHub portfolio.\n", name);
    printf("My name is John Wick\n");
}

int main()
{
    printf("Hello World!\n");

    greet("Ada");

    return 0;
}