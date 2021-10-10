#include<stdio.h>

int main()
{
    int row,col;
    printf("Please enter row and coloumn size of 2D array:\n");
    scanf("%d %d",&row,&col);
    int arr[row][col];
    printf("Enter the 2D array:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            scanf("%d",&arr[i][j]);
    }
    int n=row*col;
    int singleArray[n];
    int k=0;
    printf("Inital 2D Array:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            singleArray[k++]=arr[i][j];
        }
    }
    printf("1D array with 2D array values is:\n");
    for(int i=0;i<n;i++)
    printf("%d ",singleArray[i]);
}