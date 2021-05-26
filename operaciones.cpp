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
main(){
    int n = validanumero();


}
