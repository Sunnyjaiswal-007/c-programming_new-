#include<stdio.h>
#include<math.h>
int main(){

int n,i,j;
float x,sum=0,term,fact;
printf("enter value of x in radians:");
scanf("%f",&x);

printf("enter number of terms:");
scanf("%d", &n);

for (i=1;i<=n;i++){
  fact=1;
  for (j=1;j<=(2*i-1);j++){
  fact= fact*j;
  }
  term = pow(-1,i+1)*pow(x,(2*i-1))/fact;
  sum=sum+term;
  }
  printf("sum of sine series = %f:",sum);
  return 0;
  }
  
