#include<stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int patition(int arr[],int low,int high)
{
   int pivot=arr[low];
   int start=low;
   int end=high;
   while(start<=end)
   {
    while(arr[start]<=pivot )
    {
        start++;
    }
    while(arr[end]>pivot )
    {
        end--;
    }
    if(start<end)
    {
        swap(&arr[start],&arr[end]);
    }
   }
   swap(&arr[low],&arr[end]);
   return pivot;
}
void quick_sort(int arr[],int low, int high)
{
    int loc=0;
    if(low<high)
    {
    loc=patition(arr,low,high);
    quick_sort(arr,low,loc-1);
    quick_sort(arr,loc+1,high);
    }

}
int main()
{
    int arr[5]={1,4,6,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    quick_sort(arr,0,n-1);
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}