
#include "Cargar.h"
BST* Cargar::cargar() {
    string archivon="DatosBancoUno.txt";
    ifstream archivo(archivon.c_str());
    string linea;
    BST* result= new BST();
    while(getline(archivo,linea)){
        string objeto[6];
        int cont=0;
        string lineaO;
        ifstream leer(linea.c_str());
        while(getline(leer,lineaO,',')){
            objeto[cont]=lineaO;
            cont++;
        }
        string nombre=objeto[0];long id= stol(objeto[1]);
        bool conN;bool preg; bool old; int _class= stoi(objeto[5]);
        if(objeto[2]=="No"){
            conN= false;}
        else conN=true;
        if(objeto[3]=="No"){
            preg= false;}
        else preg=true;
        if(objeto[4]=="No"){
            old= false;}
        else old=true;

        Client* c1= new Client(nombre,id,conN,preg,old,_class);
        result->insert(c1);
    }
    return result;
}
Cargar::Cargar() {
    entity= nullptr;
}
Cargar::~Cargar() {}
