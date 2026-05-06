#include <stdio.h>

int main() {
   int num=150, a;
   int *x;  //es el puntero
   
   x=&num; //almacena la direccion del num
   printf("%d %p",num, x);

   float pi=3.1415, decimal;
   float *ptrF;         //se inicializa el puntero
   ptrF = &pi;           //almacena el valor de pi
   printf("%d",pi, ptrF);


    return 0;
}