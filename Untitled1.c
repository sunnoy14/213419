#include<stdio.h>
int* fetch();
int main()
{
    int *c;
    c=fetch();
    printf("%d",*c);
    return 0;
}
int* fetch()
{

    int val1;
    val1=200;
    return(&val1);
}
