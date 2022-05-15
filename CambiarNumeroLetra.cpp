#include <iostream>

using namespace std;

int main()
{
    int num,unidades,decenas,veintes;

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
        "CIEN",
        "DIEZ",
        "VEINTE",
        "TREINTA",
        "CUARENTA",
        "CINCUENTA",
        "SESENTA",
        "SETENTA",
        "OCHENTA",
        "NOVENTA",
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

    do{
       cout<<"Ingrese el numero a convertir: ";
       cin>>num;

        if(0 <= num && num <= 100){
           unidades = num %10;
           decenas = (num / 10) % 10;
           veintes = num % 10;

            if(20 < num && num < 30){
                cout<<"Resultados = "<<veintesG[veintes-1]<<"\n"<<endl;//NUMEROS DEL 21 AL 29 ... 21 = VEINTIUNO
            }

            else if(num < 10){
                cout<<"Resultado = "<<unidadesG[unidades]<<"\n"<<endl;//1 = UNO, 7 = SIETE...PURA UNIDADES
            }

            else{
                if(decenas <= 9 && unidades == 0){
                    cout<<"Resultado = "<<decenasG[decenas]<<"\n"<<endl;//10 = DIEZ, 100 = CIEN....DECENAS CON UNIDAD CERO
                }
                else{
                    cout<<"Resultado = "<<decenasG[decenas]<<" Y "<<unidadesG[unidades]<<"\n"<<endl;//35 = TREINTA Y CINCO....DECENAS CON UNIDADES
                }
            }
        }
        else{
        cout<<"Vuelve a intentar"<<endl;
        }
    }while(0 < num && num < 100);//filtrar numeros de 0 al 100

    return 0;
}
