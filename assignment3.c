#include <stdio.h>
    int main(){
        int n,i;
        printf("enter a n:");
        scanf("%d",&n);
        for(i=1;i<=10;i+=1){
            printf("%d * %d =%d\n",n,i,n*i);
        }
        
    }