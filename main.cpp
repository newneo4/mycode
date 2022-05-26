#include<iostream>
#include<string.h>

using namespace std;

int main(){

    bool entrada= true;
    string respuesta;
    char cadena[] = " Mi letrero ";
    char copiar[] = " Mi letrero ";
    int contador1 = 11, contador2 = 10;

    cout<<cadena<<endl;

    while(entrada){
        cout<<"Desea recorrer el letrero(s/n): ";
        cin>>respuesta;
        if(respuesta == "s"){
            while(contador1 >= 0){
                for(int i = contador1, j = contador2; i >= 0; --i, --j){
                    cadena[i] = copiar[j];
                }
                contador1 = contador1 - 1;
                contador2 = contador2 - 1;
            }
            for(int i = 0; i < 12; i++){
                cout<<cadena[i];
            }
            cout<<"\n";
        }
        else if(respuesta == "n"){
            entrada = false;
        }
        else{
            cout<<"Vuelva a intentar"<<endl;
        }
    }


    return 0;
}
