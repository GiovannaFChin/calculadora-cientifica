#include <stdio.h>
#include <math.h>
#include "operacoes.h"

float somar(float a, float b){
    return a+b;
}
float sub(float a, float b){
    return a-b;
}
float multi(float a, float b){
    return a*b;
}
float div(float a, float b){
    return a/b;
    
}
float potencia(float a, float b){
    return pow(a,b);
}
float raiz(float a){
    return sqrt(a);
}
int fatorial(int a){
    int fat=1;
    for(int i = 1; i <= a; i++){
        fat *= i;
    }
    return fat;
}
