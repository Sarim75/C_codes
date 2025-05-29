#include<stdio.h>
int main(){
    int i,n,largest,seclargest;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    if (n==1)
        printf("Need atleat 2 elements");
    for(i=0;i<n;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);}
    if (arr[0]>arr[1]){
        largest=arr[0];
        seclargest=arr[1];}
    else
        largest=arr[1];
        seclargest=arr[0];
    for(i=2;i<n;i++){
        if (arr[i]>largest){
            seclargest=largest;
            largest=arr[i];
        } else if (arr[i]>seclargest&&arr[i]!=largest){
            seclargest=arr[i];
        }
    }
    printf("Second largest element is %d",seclargest);
}