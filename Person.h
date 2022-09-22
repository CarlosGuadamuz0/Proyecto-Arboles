//
// Created by vsj94 on 20/09/2022.
//

#ifndef PROYECTOI_PERSON_H
#define PROYECTOI_PERSON_H

#include <iostream>
using namespace std;
#include <sstream>

class Person {
private:
    string name;
    long long id;
    bool withChild;
    bool pregnant;
    bool oldMan;
    int card;

public:
    Person();
    Person(string,long long,bool,bool,bool,int);
    ~Person();

    string getName();
    long long getId();
    bool getPregnant();
    bool getoldMan();
    bool getwithChild();
    int getCard();


    void setName(string);
    void setId(long long);
    void setPregnant(bool);
    void setoldMan(bool);
    void setwithChild(bool);
    void setCard(int);

    string toString();
    int returnkey();
};

Person::Person(std::string name, long long id, bool wc, bool p, bool o, int c) {
    this->name = name;
    this->id = id;
    withChild = wc;
    pregnant = p;
    oldMan = o;
    card = c;
}

string Person:: getName(){return name;}
long long Person::getId(){return id;}
bool  Person::getPregnant(){return pregnant;}
bool Person::getoldMan(){return oldMan;}
bool Person::getwithChild(){return withChild;}
int Person::getCard(){return card;}

void Person::setName(string n){Person::name = n;}
void Person::setId( long long i){Person::id = i;}
void Person::setPregnant(bool p){Person::pregnant = p;}
void Person::setoldMan(bool o){Person::oldMan = o;}
void Person::setwithChild(bool w){Person::withChild = w;}
void Person::setCard(int c){Person::card = c;}

string Person::toString() {
    string tipo = "";
    if(card = 1) tipo = "premium";
    if(card = 2) tipo = "oro";
    if(card = 3) tipo = "normal";

    stringstream ss;
    ss << "nombre: "<< name<< "  ID: "<< id<< " Esta embarazada: "
       ""<<pregnant<<" Es adulto Mayor: "<< oldMan<< " Esta con un nino: "<< withChild<< "  tipo de targeta"<<tipo;
    return ss.str();
}
int Person::returnkey() {
    int data = 0;
    if(pregnant)
        data += 25;
    if(withChild)
        data += 20;
    if(oldMan)
        data += 35;
    if(card = 1)
        data += 20;
    if(card = 2)
        data += 10;
    return data;
}

#endif //PROYECTOI_PERSON_H
