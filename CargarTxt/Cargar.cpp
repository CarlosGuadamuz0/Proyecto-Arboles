
#include "Cargar.h"
BST* Cargar::cargar() {
    ifstream archivo("DatosBancoUno.txt");
    string linea;
    BST* result= new BST();
    if(archivo.is_open()){
    while(getline(archivo,linea)){
        string objeto[6];
        int cont=0;
        string lineaO;
        stringstream leer(linea);
        while(getline(leer,lineaO,',')){
            objeto[cont]=lineaO;
            cont++;
        }
        string nombre=objeto[0];

        long long id= stoll(objeto[1]);
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
    archivo.close();
    }
    return result;
}
Cargar::Cargar() {
    entity= nullptr;
}
Cargar::~Cargar() {}

void Cargar::leer() {
    string linea;
    ifstream file;
    file.open("DatosBancoUno.txt");
    if (file.is_open()){
        while(getline(file,linea)){
            cout<<linea<<endl;
        }
        file.close();
    }
    else{
        cout<<"No abrio";
    }
}
