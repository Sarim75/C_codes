#include<stdio.h>
int main(){
    int i,n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter element %d:\n",i+1);
        scanf("%d",&arr[i]);}
    for(i=0;i<n;i++){
        printf("Element %d=%d\n",i+1,arr[i]);
    }
    }