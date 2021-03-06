//Programa para cambiar de numeros a letras
#include <iostream>

using namespace std;

int main()
{
    int Num,unidades,decenas,veintes;

    char unidadesG[10][20] = {
        "CERO",     // 0
        "UNO",      // 1
        "DOS",      // 2
        "TRES",     // 3
        "CUATRO",   // 4
        "CINCO",
        "SEIS",
        "SIETE",
        "OCHO",
        "NUEVE",
    };

    char decenasG[10][20] = {
        "DIEZ",
        "VEINTE",
        "TREINTA",
        "CUARENTA",
        "CINCUENTA",
        "SESENTA",
        "SETENTA",
        "OCHENTA",
        "NOVENTA",
        "CIEN"
    };

    char veintesG[10][20]{
        "VEINTIUNO",
        "VEINTIDOS",
        "VEINTITRES",
        "VEINTICUATRO",
        "VEINTICINCO",
        "VEINTISEIS",
        "VEINTISIETE",
        "VEINTIOCHO",
        "VEINTINUEVE"
    };

    cout<<"Ingrese el numero a convertir:";
    cin>>Num;

    unidades = Num % 10;
    decenas = (Num / 10) % 10;
    veintes = Num % 10;

    if(20 < Num && Num < 30){//devuelve en letras los numeros del 21 al 29 ..... 21 = VEINTIUNO
        cout<<"\nResultados = "<<veintesG[veintes-1];
    }

    else if(0 <= Num && Num < 10){//devuelve numeros del 1 al 9.... 1 = UNO  
        cout<<"\nResultado = "<<unidadesG[unidades];
    }

    else{
        if(decenas == 0){
            cout<<"\nResultado = "<<decenasG[9];//devuelve especificamente el numero 100 
        }
        else{
            cout<<"\nResultado = "<<decenasG[decenas-1]<<" Y "<<unidadesG[unidades];//devuelve los numeros faltantes.... 31 = TREINTA Y UNO 
        }
    }

    return 0;
}
