#include <stdio.h>

int main()
{int a,b,c,e; 
    printf("Enter 2 numbers ");
    scanf("%d%d",&a,&b);
    printf("1 for addition \n2 for subtraction \n3 for multiplication \n4 for division \nplease enter your choice ");
    scanf("%d",&c);
    
    if(c==1){ e=a+b ;}
    else if (c==2){e=a-b ;}
    else if (c==3){e=a*b ;}
    else if (c==4){e=a/b ;}
    else {printf("you are a fool");}
    
    
    printf("The result is%d",e); 
    return 0;
}