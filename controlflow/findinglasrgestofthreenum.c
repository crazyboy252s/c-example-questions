#include <stdio.h>

int main()
{
    int n1,n2,n3;

    printf("enter the three numbers you want to check : ");
    scanf("%d%d%d",&n1,&n2,&n3);

    if (n1<=n2 &&n3<=n2){
        printf("the number n2 is the largest" );
    }

    if (n2<=n1 && n3<=n1){
        printf("the number n1 is the largest" );
    }

    if (n1<=n3 &&n2<=n3){
        printf("the number n3 is the largest" );
    }

    return 0;
}