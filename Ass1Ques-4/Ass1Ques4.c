#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void swap(long long int *p,long long int *q)
{
    long long int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
void selection_sort(long long int A[],long long int n)
{
    long long int i,j,k;
    for(i=0;i<n-1;i++)
    {
        for(j=k=i;j<n;j++)
        {
            if(A[j]<A[k])
            k = j;
        }
        swap(&A[i],&A[k]);
    }
    
    printf("Selection sorted array is:\n");
    for(i=0;i<n;i++)
    printf("%d ",A[i]);
    printf("\n");
    return;
}
void bubble_sort(long long int arr[],long long int n)
{
   long long int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            swap(&arr[j],&arr[j+1]);
            
        }
    }
    printf("Bubble Sorted Array:\n");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
    return;
}
int main()
{
    printf("Enter no of elements:\n");
    long long int n;
    scanf("%ld",&n);
    long long int a[n];
    for(int i=0;i<n;i++)
    a[i]=i+1;
    clock_t start,end;
    long int t;
    start=clock();
    selection_sort(a,n);
    end=clock();
    t=end-start;
    printf("Total time elapsed for selection sort: %f\n",(double)t/(double)CLOCKS_PER_SEC);
    clock_t start2,end2;
    long int t2;
    start2=clock();
    bubble_sort(a,n);
    end2=clock();
    t2=end2-start2;
     printf("Total time elapsed for bubble sort: %f\n",(double)t2/(double)CLOCKS_PER_SEC);
}