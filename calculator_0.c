#include <stdio.h>

int getNumber();

int main()
{
    int a;
    int x = getNumber();
    int y = getNumber();
    printf("chose operation: 0 for +, 1 for -, 2 for *, 3 for /.\n");
    scanf("%d", &a);
    if (a == 0)
    {
        printf("%i", x + y);
    }
    else if (a == 1)
    {
        printf("%i", x - y);
    }
    else if (a == 2)
    {
        printf("%i", x * y);
    }
    else if (a == 3)
    {
        printf("%f", (float)x / (float)y);
    }
    else
    {
        printf("error");
    }
}

int getNumber()
{
    int a;
    printf("insert number: ");
    scanf("%i", &a);
    return a;
}
