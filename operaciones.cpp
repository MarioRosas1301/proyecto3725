#include<iostream>
using namespace std;
int validanumero(){
    //proceso de validacion
    int numero;
    do{
        cout<<"Ingrese el numero: ";
        cin>>numero;
    }while(numero<1 || numero>10);
    return numero;
}
void saludoprogramador(string nombre){
    cout<<"Buenas tardes "<<nombre;
}
main(){
    int n = validanumero();


}
