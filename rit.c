#include<stdio.h>
#include<stdlib.h>
int main()
{
    int sum=0, r, c;

    //input values array1 & array2
    int array1[3][3];
    for (r=0; r<3; r++)
    {
        for (c=0; c<3; c++)
        {
            printf("Enter a Value array 1 [%d][%d]: ", r,c);
            scanf("%d", &array1[r][c]);

            printf("Enter a Value array 2 [%d][%d]: ", r,c);
            scanf("%d", &array1[r][c]);

            //sum
            array1[r][c]=array1[r][c]+array1[r][c];
        }
    }

    //output
    for (r=0; r<3; r++)
    {
        for (c=0; c<3; c++)
        {
            printf("%d\t", array1[r][c]);
        }
        printf("\n");
    }

}
