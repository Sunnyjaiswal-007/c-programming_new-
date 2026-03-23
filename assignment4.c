#include <stdio.h>
int main(){
    float basic,hra,ta,gross,tax,net;
    printf("enter basic pay:");
    scanf("%f",&basic);
    
    hra=0.1*basic;
    ta= 0.05*basic;
    gross=basic+hra+ta;
    tax=0.02*gross;
    net=gross-tax;

    printf("\nbasic pay=%.2f",basic);
    printf("\nhra=%.2f",hra);
    printf("\nta=%.2f",ta);
    printf("\ngross=%.2f",gross);
    printf("\ntax=%.2f",tax);
    printf("\nnet=%.2f",net);


}