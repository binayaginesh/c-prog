#include <stdio.h>
//array
int main()
{
    int arr[5],i;
    printf("Enter array elements");
    for(i=0;i<5;i++){
        scanf("%d\n",&arr[i]);
    }
    printf("Entered values\n");
    for(i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}
