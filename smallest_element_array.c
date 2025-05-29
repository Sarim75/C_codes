#include<stdio.h>
int main(){
    int i,n,smallest;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter element %d:\n",i+1);
        scanf("%d",&arr[i]);}
    smallest=arr[0];
    for(i=1;i<n;i++){
    if (smallest>arr[i])
        smallest=arr[i];
    }
    printf("%d",smallest);
    }