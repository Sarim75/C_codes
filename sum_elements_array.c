#include<stdio.h>
int main(){
int i,sum=0,n;
printf("Enter the number of elements in the array: ");
scanf("%d",&n);
int arr[n];
for (i=0;i<n;i++){
    printf("Enter element %d:",i+1);
    scanf("%d",&arr[i]);}
for(i=0;i<n;i++){
sum+=arr[i];
} 
printf("%d",sum);
}