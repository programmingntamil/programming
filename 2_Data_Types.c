#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    float f = 3.14;
    char c='s';
    enum month_name{Jan,Feb,Mar};
    int a[3];
    a[0] = 100;
    a[1] = 954;
    a[2] = 1009;
    printf("Integer %d\n",i);
    printf("Float %f\n",f);
    printf("Enumerated Int%d\n",Feb);
    printf("Value in array %d\n",a[1]);
    printf("Char Value %c\n",c);

    return 0;
}


