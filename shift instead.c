#include <stdio.h>

int main()
{ int a;
    printf("1 for biriyani \n2 for porotta \n3 for dosha \n4 for appam \nPlease enter your choice  ");
    scanf("%d",&a );
    switch(a){
        case 1:
        printf("you have selected biriyani ");
        break ;
        case 2:
        printf ("you have selected porotta ");
        break ;
        case 3:
        printf("you have selected dosha ");
        break ;
        case 4:
        printf("you have selected appam ");
        break ;
        default:
        printf("wrong selection ");
        
    }
    return 0;
}