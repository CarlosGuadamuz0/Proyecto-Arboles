//
// Created by vsj94 on 21/09/2022.
//
#include "Client.h"


Client::Client(std::string name, long long id, bool wc, bool p, bool o, int c) {
    this->name = name;
    this->id = id;
    withChild = wc;
    pregnant = p;
    oldMan = o;
    card = c;
}

Client::Client() {

}
Client::~Client() {

}
string Client:: getName(){return name;}
long long Client::getId(){return id;}
bool  Client::getPregnant(){return pregnant;}
bool Client::getoldMan(){return oldMan;}
bool Client::getwithChild(){return withChild;}
int Client::getCard(){return card;}

void Client::setName(string n){Client::name = n;}
void Client::setId(  long long i){Client::id = i;}
void Client::setPregnant(bool p){Client::pregnant = p;}
void Client::setoldMan(bool o){Client::oldMan = o;}
void Client::setwithChild(bool w){Client::withChild = w;}
void Client::setCard(int c){Client::card = c;}

string Client::toString() {
    string tipo = "";
    if(card == 1) tipo = "premium";
    if(card ==2) tipo = "oro";
    if(card == 3) tipo = "normal";

    stringstream ss;
    ss << "Prioridad: " <<returnkey()<<" nombre: "<< name<< "  ID: "<< to_string(getId())<< " Esta embarazada: "<<pregnant<<" Es adulto Mayor: "<< oldMan<< " Esta con un nino: "<< withChild<< " Tipo de targeta: "<< tipo <<endl;
    return ss.str();
}
int Client::returnkey() {
    int data = 0;
    if(pregnant)
        data += 25;
    if(withChild)
        data += 20;
    if(oldMan)
        data += 35;
    if(card == 1)
        data += 20;
    if(card == 2)
        data += 10;
    return data;
}
