#include<iostream>
#include<string.h>

using namespace std;

int main(){
    string respuesta;
    string otro;
    char cadena[] = " Mi letrero ";
    char copiar[] = " Mi letrero ";
    int contador = 9;

    cout<<cadena<<endl;

    cout<<"Desea recorrer el letrero(s/n): ";
    cin>>respuesta;

    if(respuesta == "s"){
        do{
            /*for(int i = 9, j = 9 ; i <= 0; i--, j--){
                cadena[i] = copiar[j - 1];
                if(j == 0){
                    j = 9;
                }
            }*/
            cadena[11] = copiar[10];
            cadena[10] = copiar[9];
            cadena[9] = copiar[8];
            cadena[8] = copiar[7];
            cadena[7] = copiar[6];
            cadena[6] = copiar[5];
            cadena[5] = copiar[4];
            cadena[4] = copiar[3];
            cadena[3] = copiar[2];
            cadena[2] = copiar[1];
            cadena[1] = copiar[0];
            cadena[0] = copiar[11];

            for(int i = 0; i <= 11; i++){
                cout<<cadena[i];
            }
            cout<<"\n";

            cadena[11] = copiar[9];
            cadena[10] = copiar[8];
            cadena[9] = copiar[7];
            cadena[8] = copiar[6];
            cadena[7] = copiar[5];
            cadena[6] = copiar[4];
            cadena[5] = copiar[3];
            cadena[4] = copiar[2];
            cadena[3] = copiar[1];
            cadena[2] = copiar[0];
            cadena[1] = copiar[11];
            cadena[0] = copiar[10];

            for(int i = 0; i <= 11; i++){
                cout<<cadena[i];
            }
            cout<<"\n";

            cadena[11] = copiar[8];
            cadena[10] = copiar[7];
            cadena[9] = copiar[6];
            cadena[8] = copiar[5];
            cadena[7] = copiar[4];
            cadena[6] = copiar[3];
            cadena[5] = copiar[2];
            cadena[4] = copiar[1];
            cadena[3] = copiar[0];
            cadena[2] = copiar[11];
            cadena[1] = copiar[10];
            cadena[0] = copiar[9];

            for(int i = 0; i <= 11; i++){
                cout<<cadena[i];
            }
            cout<<"\n";

            cadena[11] = copiar[7];
            cadena[10] = copiar[6];
            cadena[9] = copiar[5];
            cadena[8] = copiar[4];
            cadena[7] = copiar[3];
            cadena[6] = copiar[2];
            cadena[5] = copiar[1];
            cadena[4] = copiar[0];
            cadena[3] = copiar[11];
            cadena[2] = copiar[10];
            cadena[1] = copiar[9];
            cadena[0] = copiar[8];

            for(int i = 0; i <= 11; i++){
                cout<<cadena[i];
            }
            cout<<"\n";

            cadena[11] = copiar[6];
            cadena[10] = copiar[5];
            cadena[9] = copiar[4];
            cadena[8] = copiar[3];
            cadena[7] = copiar[2];
            cadena[6] = copiar[1];
            cadena[5] = copiar[0];
            cadena[4] = copiar[11];
            cadena[3] = copiar[10];
            cadena[2] = copiar[9];
            cadena[1] = copiar[8];
            cadena[0] = copiar[7];

            for(int i = 0; i <= 11; i++){
                cout<<cadena[i];
            }
            cout<<"\n";

            cadena[11] = copiar[5];
            cadena[10] = copiar[4];
            cadena[9] = copiar[3];
            cadena[8] = copiar[2];
            cadena[7] = copiar[1];
            cadena[6] = copiar[0];
            cadena[5] = copiar[11];
            cadena[4] = copiar[10];
            cadena[3] = copiar[9];
            cadena[2] = copiar[8];
            cadena[1] = copiar[7];
            cadena[0] = copiar[6];

            for(int i = 0; i <= 11; i++){
                cout<<cadena[i];
            }
            cout<<"\n";

            cadena[11] = copiar[4];
            cadena[10] = copiar[3];
            cadena[9] = copiar[2];
            cadena[8] = copiar[1];
            cadena[7] = copiar[0];
            cadena[6] = copiar[11];
            cadena[5] = copiar[10];
            cadena[4] = copiar[9];
            cadena[3] = copiar[8];
            cadena[2] = copiar[7];
            cadena[1] = copiar[6];
            cadena[0] = copiar[5];

            for(int i = 0; i <= 11; i++){
                cout<<cadena[i];
            }
            cout<<"\n";

            cadena[11] = copiar[3];
            cadena[10] = copiar[2];
            cadena[9] = copiar[1];
            cadena[8] = copiar[0];
            cadena[7] = copiar[11];
            cadena[6] = copiar[10];
            cadena[5] = copiar[9];
            cadena[4] = copiar[8];
            cadena[3] = copiar[7];
            cadena[2] = copiar[6];
            cadena[1] = copiar[5];
            cadena[0] = copiar[4];

            for(int i = 0; i <= 11; i++){
                cout<<cadena[i];
            }
            cout<<"\n";

            cadena[11] = copiar[2];
            cadena[10] = copiar[1];
            cadena[9] = copiar[0];
            cadena[8] = copiar[11];
            cadena[7] = copiar[10];
            cadena[6] = copiar[9];
            cadena[5] = copiar[8];
            cadena[4] = copiar[7];
            cadena[3] = copiar[6];
            cadena[2] = copiar[5];
            cadena[1] = copiar[4];
            cadena[0] = copiar[3];

            for(int i = 0; i <= 11; i++){
                cout<<cadena[i];
            }
            cout<<"\n";

            cadena[11] = copiar[1];
            cadena[10] = copiar[0];
            cadena[9] = copiar[11];
            cadena[8] = copiar[10];
            cadena[7] = copiar[9];
            cadena[6] = copiar[8];
            cadena[5] = copiar[7];
            cadena[4] = copiar[6];
            cadena[3] = copiar[5];
            cadena[2] = copiar[4];
            cadena[1] = copiar[3];
            cadena[0] = copiar[2];

            for(int i = 0; i <= 11; i++){
                cout<<cadena[i];
            }
            cout<<"\n";

            cadena[11] = copiar[0];
            cadena[10] = copiar[11];
            cadena[9] = copiar[10];
            cadena[8] = copiar[9];
            cadena[7] = copiar[8];
            cadena[6] = copiar[7];
            cadena[5] = copiar[6];
            cadena[4] = copiar[5];
            cadena[3] = copiar[4];
            cadena[2] = copiar[3];
            cadena[1] = copiar[2];
            cadena[0] = copiar[1];

            for(int i = 0; i <= 11; i++){
                cout<<cadena[i];
            }
            cout<<"\n";

            cadena[11] = copiar[11];
            cadena[10] = copiar[10];
            cadena[9] = copiar[9];
            cadena[8] = copiar[8];
            cadena[7] = copiar[7];
            cadena[6] = copiar[6];
            cadena[5] = copiar[5];
            cadena[4] = copiar[4];
            cadena[3] = copiar[3];
            cadena[2] = copiar[2];
            cadena[1] = copiar[1];
            cadena[0] = copiar[0];

            for(int i = 0; i <= 11; i++){
                cout<<cadena[i];
            }
            cout<<"\n";

            cout<<"¿Volver a mover?"<<endl;
            cin>>otro;
        }while(otro == "s");
    }

    return 0;
}
