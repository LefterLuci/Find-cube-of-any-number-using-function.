
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int cube(numb)
{
    return numb*numb*numb;
}

int main()
{
    int n;

    printf("Enter the number you want to cube:\n");
    scanf("%d",&n);

    printf("%d",cube(n));


    return 0;
}