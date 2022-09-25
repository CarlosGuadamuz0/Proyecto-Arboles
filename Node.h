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
    long long key;
    Client* data;
    Node* left;
    Node* right;
    Node* parent;
    int pos;
public:
    Node(Client* data=nullptr, long long key=-1, Node* left = nullptr, Node* right = nullptr,int pos=1,Node* parent= nullptr);
    ~Node();
    Client* getData()const;
    void setData(Client* data);
    Node* getLeft()const;
    void setLeft(Node* left);
    Node* getRight()const;
    void setRight(Node* right);
    bool hasLeafs();
    long long getKey() const;

    int getHeapkey() const;

    void setHeapkey(int heapkey);

    Node *getParent() const;

    void setParent(Node *parent);

    int getPos() const;

    void setPos(int pos);

    void setKey(long long key);

};




#endif //PROYECTOI_NODE_H
