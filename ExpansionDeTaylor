#include<iostream>
#include<math.h>

using namespace std;

int factorial(int a){
    int resultado = 1;
        for(int i = 1; i <= a; i++){
        resultado *= i;
        }
    return resultado;
}

int main(){

    float e = 0, x;

    cout<<"Introduzca el valor de x: ";
    cin>>x;

    for(int i = 1; i <= x; i++){
        e += (pow(x,i))/(factorial(i));
    }

    cout.precision(4);
    cout<<"El resultado es: "<<e+1;

    return 0;
}

