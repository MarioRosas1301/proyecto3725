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
    cout<<"Bienvenidos a mi proyecto"<<endl;
    cout<<"Define si no eres un robot contestando la pregunta siguiente";
    cout<<"\nComo se llama tu mascota";
    cout<<"Buenas tardes "<<nombre;
}
main(){
    int n = validanumero();
    saludoprogramador("Juan");
    cout<<"El valor ingresado es: "<<n<<endl;


}
