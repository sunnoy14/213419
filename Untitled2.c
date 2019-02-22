#include<stdio.h>
int main()
{
    int i=4,z;
    int *p=&i;
    z=100;
    z=z/(*p);
    printf("%d%d",*p,z);
    return 0;
}

