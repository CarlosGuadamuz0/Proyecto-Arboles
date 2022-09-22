//
// Created by vsj94 on 20/09/2022.
//

#ifndef PROYECTOI_BST_H
#define PROYECTOI_BST_H


#include "Node.h"
#include <fstream>
#include "Client.h"
class BST{
private:
    Node* root;

public:
    Node* makeEmpty(Node* nodo);
    Node* insert1(Client* data, Node* nodo);
    Node* findeMin(Node* nodo);
    Node* findMax(Node* nodo);
    Node* remove(Client* data, Node* nodo);
    void inorder(Node* nodo);
    Node* find(Node* nodo, Client* data);

    BST();
    ~BST();
    void insert2(Client* data);
    void remove(Client data);
    void display();
    void search(Client data);
    void insertClient();

};



#endif //PROYECTOI_BST_H
