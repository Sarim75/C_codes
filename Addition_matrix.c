#include<stdio.h>
int main(){
    int a,b,i,j;
    printf("FOR FIRST MATRIX\n");
    printf("Enter no of rows and columns:");
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("Enter [%d][%d] element:\n",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }  
    printf("REMEMBER to use same no of rows and colums\n");
    printf("FOR SECOND MATRIX\n");
    int p,q;
    printf("Enter no of rows and columns");
    scanf("%d %d",&p,&q);
    int apz[p][q];
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("Enter [%d][%d] element:\n",i+1,j+1);
            scanf("%d",&apz[i][j]);
        }
    }  
    int zam[p][q];
    for (i=0;i<p;i++){
        for (j=0;j<q;j++){
            zam[i][j]=arr[i][j]+apz[i][j];
        }
    }
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("Element at [%d][%d] = %d:\n",i+1,j+1,zam[i][j]);
        }
    }
}