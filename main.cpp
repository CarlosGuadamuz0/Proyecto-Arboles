//
// Created by vsj94 on 20/09/2022.
//
#include <iostream>
#include "CargarTxt/Cargar.h"
#include "toBinary.h"

using namespace std;
int main(){
    toBinary t1;

    cout<<t1.convert(1)<<endl;
    cout<<t1.convert(2)<<endl;
    cout<<t1.convert(3)<<endl;
    cout<<t1.convert(4)<<endl;
    cout<<t1.convert(5)<<endl;

    Cargar c1;
    BST* b1=c1.cargarH();

//    c1.leer();
    b1->enviarR();
//Client* cl1= new Client("Carlos",1,true,false,false,2);
//
//BST* b1= new BST();
//b1->insert(cl1);
//b1->enviarR();
    return 0;





    int opc = 0;

//    while(opc!=7) {
//
//        cout << "1- Encolar todos los clientes" << endl;
//        cout << "2- Encolar un cliente" << endl;
//        cout << "3- Atender los siguientes  5 clientes" << endl;
//        cout << "4- Mostrar el siguiente cliente a ser atendido" << endl;
//        cout << "5- Simulación de Atención de Clientes " << endl;
//        cout << "6- Agregar un Cliente Nuevo" << endl;
//        cout << "7- Salir" << endl;
//        cin >> opc;
//
//
//        switch (opc) {
//            case 1:
//
//                break;
//            case 2:
//
//                break;
//            case 3:
//
//                break;
//            case 4:
//
//                break;
//            case 5:
//
//                break;
//            case 6:
//
//                break;
//            case 7:
//
//                break;
//
//            default:
//                cout << " ingrese una opcion valida" << endl;
//                break;
//        }
//    }
    return 0;
}