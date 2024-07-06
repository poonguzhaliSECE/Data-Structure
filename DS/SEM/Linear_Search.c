#include<stdio.h>
int search(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
        if(arr[i]==key)
            return arr[i];
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
    int result=search(arr,n,4);
    if(result==-1)
    {
        printf("Not Found");
        return 0;
    }
    printf("Key Found !");
    printf("\n");
    return 0;
}