#include<stdio.h>
int main(){
    int i,n,even=0,odd=0;//Always put value to zero
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter element %d:\n",i+1);
        scanf("%d",&arr[i]);}
    for(i=0;i<n;i++){
        if (arr[i]%2==0)
            even+=1;
        else
            odd+=1;}
    printf("No of even numbers=%d\n",even);
    printf("No of odd numbers=%d",odd);
    }