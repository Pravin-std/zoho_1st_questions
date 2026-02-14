#include <stdio.h>
int main()
{
    int a = 1, b = 2, c = 3;
    int res = a++ + b++ * c++;
    printf("%d %d %d %d",a,b,c,res);
    return 0;
}