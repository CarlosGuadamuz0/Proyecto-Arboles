//
// Created by vsj94 on 20/09/2022.
//

#ifndef PROYECTOI_NODE_H
#define PROYECTOI_NODE_H

#include "Person.h"
#include <iostream>
using namespace std;
class Node {
private:
    int key;
    Person data;
    Node* left;
    Node* right;
public:
    Node(Person data, int key, Node* left = nullptr, Node* right = nullptr);
    virtual ~Node();
    Person getData()const;
    void setData(Person data);
    Node* getLeft()const;
    void setLeft(Node* left);
    Node* getRight()const;
    void setRight(Node* right);
};

Node::~Node() {

}

Node::Node(Person data,int key, Node* left, Node* right) {

    this->key = key;
    this->data = data;
    this->left = left;
    this->right = right;
}

Person Node::getData()const {
    return data;
}

void Node::setData(Person data) {
    Node::data = data;
}

Node* Node::getLeft()const {
    return left;
}
void Node::setLeft(Node* left) {
    Node::left = left;
}
Node* Node::getRight()const {
    return right;
}
void Node::setRight(Node* right) {
    this->right = right;
}



#endif //PROYECTOI_NODE_H
