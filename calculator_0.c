#include <stdio.h>
#include <unistd.h>


char getOperation();
int getNumber();
int getPlus();
int getMinus();
int getPer();
float getDiv();


int main()
{
    int x = getNumber();
    int y = getNumber();
    char op = getOperation();
    switch (op)
    {
        case '+':
            printf("= %i\n", getPlus(x, y));
            break;
        case '-':
            printf("= %i\n", getMinus(x, y));
            break;
        case '*':
            printf("= %i\n", getPer(x, y));
            break;
        case '/':
            if (y == 0)
            {
                printf("Impossible\n");
            }
            else
            {
                printf("= %f\n", getDiv(x, y));
            }
            break;
        default:
            printf("error 1\n");
            break;
    }
    sleep(5);
    return 0;
}


int getNumber()
{
    int a;
    printf("Insert number: ");
    scanf("%i", &a);
    return a;
}


char getOperation()
{
    char op;
    printf("Select operation: '+' '-' '*' '/' ?\n");
    scanf(" %c", &op);
    return op;
}

int getPlus(int x, int y)
{
    int plus = x + y;
    return plus;
}

int getMinus(int x, int y)
{
    int minus = x - y;
    return minus;
}

int getPer(int x, int y)
{
    int per = x * y;
    return per;
}

float getDiv(int x, int y)
{
    float div = (float)x / (float)y;
    return div;
}