#include <stdio.h>

int main()
{
    int i,a,b=0;
    printf("enter a number ");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
    b=b+i;}
    printf("the result is%d",b);
   

    return 0;
}