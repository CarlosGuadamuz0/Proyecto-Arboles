//
// Created by vsj94 on 20/09/2022.
//

#ifndef PROYECTOI_NODE_H
#define PROYECTOI_NODE_H

#include "Client.h"
#include <iostream>
using namespace std;
class Node {
private:
    int key;
    Client* data;
    Node* left;
    Node* right;
public:
    Node(Client* data=nullptr, int key=-1, Node* left = nullptr, Node* right = nullptr);
    ~Node();
    Client* getData()const;
    void setData(Client* data);
    Node* getLeft()const;
    void setLeft(Node* left);
    Node* getRight()const;
    void setRight(Node* right);

    int getKey() const;

    void setKey(int key);
};




#endif //PROYECTOI_NODE_H
