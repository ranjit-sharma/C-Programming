#include <stdio.h>

int main()
{
    int arr[3][2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the value of arr[%d][%d]\n", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    //IF WE USE THIS WILL GET THE O\P IN SINGLE LINE
    //for (int i = 0; i < 3; i++)
    //{
    //    for (int j = 0; j < 2; j++)
    //    {
    //        printf("the value of arr[%d][%d] is %d\n", i, j, arr[i][j]);
    //    }
    //}

    // IF  WE USE THIS WILL GET THE O\P IN MATRIX FORM
    for(int i= 0;i<3;i++){
        for(int j=0; j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}