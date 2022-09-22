//
// Created by vsj94 on 20/09/2022.
//

#ifndef PROYECTOI_CLIENT_H
#define PROYECTOI_CLIENT_H

#include <iostream>
using namespace std;
#include <sstream>

class Client {
private:
    string name;
    long long id;
    bool withChild;
    bool pregnant;
    bool oldMan;
    int card;

public:
    Client();
    Client(string, long long, bool, bool, bool, int);
    ~Client();

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

#endif //PROYECTOI_CLIENT_H
