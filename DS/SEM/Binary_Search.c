#include<stdio.h>
int search(int arr[],int key,int low,int high)
{
    while(low<=high)
    {
        int mid = low+(high-low)/2;
        if(arr[mid]==key)
            return mid;
        if(arr[mid]<key)
            low = mid+1;
        else
            high=mid-1;
    }
    return -1;
}
int main()
{
    int arr[5] = {1, 4, 6, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");   
    int result=search(arr,7,0,n);
    if(result==-1)
    {
        printf("Not Found");
        return 0;
    }
    printf("Key Found !");
    printf("\n");
}