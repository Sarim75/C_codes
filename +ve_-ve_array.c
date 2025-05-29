#include<stdio.h>
int main(){
    int i,n,pos=0,nev=0,zero=0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter element %d:\n",i+1);
        scanf("%d",&arr[i]);}
    for(i=0;i<n;i++){
        if (arr[i]>0)
            pos+=1;
        else if (arr[i]<0)
            nev+=1;
        else
            zero+=1;
        }
    printf("No of +ve integer=%d\n",pos);
    printf("No of -ve integer=%d\n",nev);
    printf("No of Zero=%d",zero);
    }