#include <stdio.h>

void getPlus();
int getMinus();
int getMultiplier();
int getNumber();
float getDivision();

int main()
{
    int x = getNumber();
    int y = getNumber();  
    getPlus(x, y);
    printf("minus: %i\n", getMinus(x, y));
    printf("multiplier: %i\n", getMultiplier(x, y));
    printf("divided: %f\n", getDivision (x, y));
}

int getNumber()
{
    int a;
    printf("inserisci un numero: ");
    scanf("%i", &a);
    return a;
}

void getPlus(int first , int second)
{
    printf("plus: %i\n", first + second);
}

int getMinus(int first , int second)
{
    int minus = first - second;
    return minus;
}

int getMultiplier(int first , int second)
{
    int multiplier = first * second;
    return multiplier;
}

float getDivision(int first , int second)
{
    float divided = (float)first / (float)second;
    return divided;
}