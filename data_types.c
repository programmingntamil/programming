#include <stdio.h>
#include <stdlib.h>

void add(int, int);
int main()
{
    //Basic Data Types
    int i=100;
    char c = 'H';
    float f = 3.14;
    printf("Int %d. Character %c. Float %f.\n",i,c,f);

    //Enum
    enum weekdays{Monday,Tuesday};
    printf("Value of the enum data type is %d\n",Monday);


    int age[50];

    age[0] = 40;

    printf("Age is %d\n",age[0]);
    //Void Data type as return value.
    add(10,30);
    return 0;
}

void add(int a,int b)
{
    printf("Total value of a and b is %d\n",a+b);
}
