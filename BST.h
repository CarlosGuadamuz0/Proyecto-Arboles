//
// Created by vsj94 on 20/09/2022.
//

#ifndef PROYECTOI_BST_H
#define PROYECTOI_BST_H

#include "Node.h"
#include <fstream>


class BST{
private:
    Node* root;
    Node* last;
    int size;
public:
    BST();
    virtual ~BST();
    Node* makeEmpty(Node* nodo);
   Node* insertN(Client* data, Node* nodo);
    Node* findeMin(Node* nodo);
    Node* findMax(Node* nodo);
    Node* removeN(Client* data, Node* nodo);
    void inorder(Node* nodo);
    Node* find(Node* nodo, Client* data);
    void insert(Client* data);
    void remove(Client* data);
    void search(Client* data);
    void enviarR();
    Node* insertH(Client* data);
    void swapRight(Node* son, Node* parent);
    void swapLeft(Node* son, Node* parent);
    void insertLast(Client* data);
    Node* getPos(int pos);
    int getSize() const;
    void swap(Node* t);
    void setSize(int size);

};



#endif //PROYECTOI_BST_H
