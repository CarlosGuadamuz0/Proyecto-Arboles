//
// Created by vsj94 on 20/09/2022.
//

#include "Node.h"

Node::Node(Client *data,long long key, Node* left, Node* right,int pos,Node*parent) {

    this->key = key;
    this->data = data;
    this->left = left;
    this->right = right;
    this->pos=pos;
    this->parent=parent;
}

Node::~Node() {

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

long long Node::getKey() const {
    return key;
}

void Node::setKey(long long key) {
    Node::key = key;
}

bool Node::hasLeafs() {
    if(getRight()&&getLeft()){
        return true;
    }
    else
        return false;

}

int Node::getPos() const {
    return pos;
}

void Node::setPos(int pos) {
    Node::pos = pos;
}





Node *Node::getParent() const {
    return parent;
}

void Node::setParent(Node *parent) {
    Node::parent = parent;
}
