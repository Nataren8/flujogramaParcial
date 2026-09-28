#include <iostream>


using namespace std;

int main(){

    float Xvol = 0.0;
    float Yres = 0.0;
    float Tot = 0.0;

    cout<<"Ingrese la cantidad de voltaje de la bateria del automovil (en voltios)"<<endl;

    cin>>Xvol;

    cout<<"Ingrese la cantidad de resistencia en ohmios que ofrece la bombilla"<<endl;

    cin>>Yres;

    if (Xvol>0 && Yres>0)
    {
        Tot = Xvol/Yres;
        cout<<"¿Cuanta corriente electrica circulara a traves de ella al encenderse? R/ Circulara una corriente de "<<Tot<< " Amperios"<<endl;
    }
    else{
        cout<<"El dato ingresado es erroneo";
    }
    return 0;
    
}