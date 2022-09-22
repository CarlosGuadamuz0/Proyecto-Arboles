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
    Node* insertN(Client* data, Node* nodo);
    Node* findeMin(Node* nodo);
    Node* findMax(Node* nodo);
    Node* removeN(Client* data, Node* nodo);
    void inorder(Node* nodo);
    Node* find(Node* nodo, Client* data);

    BST();
    virtual ~BST();
    void insert(Client* data);
    void remove(Client* data);
    void search(Client* data);
    void enviarR();
    };



#endif //PROYECTOI_BST_H
