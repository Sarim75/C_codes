#include<stdio.h>
int main(){
    int i,n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];
    for(i=0;i<n;i++){
        printf("Enter element %d:\n",i+1);
        scanf("%d",&arr1[i]);}
    for(i=0;i<n;i++){
        arr2[i]=arr1[i];}//arr2 will come first from arr1,otherwise it will not copy
    printf("Original Array");
        for(i=0;i<n;i++){
        printf("%d ",arr1[i]);}
    printf("\n");
    printf("Reversed Array");
    for(i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }
}