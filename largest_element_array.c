#include<stdio.h>
int main(){
    int i,n,largest;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter element %d:\n",i+1);
        scanf("%d",&arr[i]);}
    largest=arr[0];
    for(i=1;i<n;i++){
        if (largest<arr[i]){
            largest=arr[i];
        }}
    printf("The Largest no is %d",largest);
    }   