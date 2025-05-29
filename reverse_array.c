#include<stdio.h>
int main(){
    int i,n,temp;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter element %d:\n",i+1);
        scanf("%d",&arr[i]);}
    printf("Original Array:");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);}
    printf("\n");
    for(i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;}
    printf("Reversed Array:");
     for(i=0;i<n;i++){
        printf("%d ",arr[i]);}
    }