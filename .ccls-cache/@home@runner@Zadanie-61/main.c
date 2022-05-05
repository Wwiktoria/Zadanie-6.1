#include <stdio.h>

int main(void) {
int a=0;
int b=1;
int n;
int suma;
printf("Wprowadź liczbę: ");
scanf("%d",&n);
  if(n<=2){
    if(n==1){
      printf("Liczba to %d",a);
    }
    else{
      printf("liczba to %d",b);
    }
    }
  else{
    for(int i=3;i<=(n+1);i++){
    suma=a+b;
      a=b;
      b=suma;
   
     //printf("%d\n",suma);
    }
    printf("Liczba to %d",suma);

    return 0;
}}