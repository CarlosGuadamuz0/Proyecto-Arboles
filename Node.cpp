//
// Created by vsj94 on 20/09/2022.
//

#include "Node.h"

Node::~Node() {

}

Node::Node(Client *data,int key, Node* left, Node* right) {

    this->key = key;
    this->data = data;
    this->left = left;
    this->right = right;
}

Client* Node::getData()const {
    return data;
}

void Node::setData(Client* data) {
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