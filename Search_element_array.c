#include<stdio.h>
int main(){
    int i,n,target,fps=0,pos=0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter element %d:\n",i+1);
        scanf("%d",&arr[i]);}
    printf("Which element you want to find:");
    scanf("%d",&target);
    for(i=0;i<n;i++){
        if (arr[i]==target){
            fps=1;
            pos=i+1;}}
    if (fps==1)
        printf("Element found at %d position",pos);
    else
        printf("Element not found");
    }