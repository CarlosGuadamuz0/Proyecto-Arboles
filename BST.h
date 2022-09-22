//
// Created by vsj94 on 20/09/2022.
//

#ifndef PROYECTOI_BST_H
#define PROYECTOI_BST_H


#include "Node.h"
#include <fstream>
#include "Person.h"
class BST{
public:
    Node* root;

    Node* makeEmpty(Node* nodo);
    Node* insert(Person data, Node* nodo);
    Node* findeMin(Node* nodo);
    Node* findMax(Node* nodo);
    Node* remove(Person data, Node* nodo);
    void inorder(Node* nodo);
    Node* find(Node* nodo, Person data);

public:
    BST();
    ~BST();
    void insert(Person data);
    void remove(Person data);
    void display();
    void search(Person data);
    void inserttxt();

};
BST::BST() {
    root = nullptr;
    inserttxt();
}

BST::~BST() {
    root = makeEmpty(root);
}

void BST::insert(Person data) {
    root = insert(data, root);
}

void BST::remove(Person data) {
    root = remove(data, root);
}
void BST::display() {
    inorder(root);
    cout << endl;
}

void BST::search(Person data) {
    root = find(root, data);
}

Node* BST::makeEmpty(Node* node) {
    if (node == nullptr) {
        return nullptr;
    }
    else {
        makeEmpty(node->getRight());
        makeEmpty(node->getRight());
        delete node;
        return nullptr;
    }
}

Node* BST::insert(Person data, Node* node) {
    if (node == nullptr) {
        node = new Node(data,data.returnkey());
    }
    else if (data.getId() < node->getData().getId()) {
        node->setLeft(insert(data, node->getLeft()));
    }
    else if (data.getId() > node->getData().getId()) {
        node->setRight(insert(data,node->getRight()));
    }
    return node;
}

Node* BST::findeMin(Node* node) {
    if (node == nullptr) {
        return nullptr;
    }
    else if (node->getLeft() == nullptr) {
        return node;
    }
    else {
        return findeMin(node->getLeft());
    }
}
Node* BST::findMax(Node* node) {
    if (node == nullptr) {
        return nullptr;
    }
    else if (node->getRight() == nullptr) {
        return node;
    }
    else {
        return findMax(node->getRight());
    }
}


Node* BST::remove(Person data, Node* node) { //x = data  node = t
    Node* temp;


    if (node == nullptr) {
        return nullptr;
    }
    else if (data.getId() < node->getData().getId()) {
        node->setLeft(remove(data, node->getLeft()));
    }
    else if (data.getId() > node->getData().getId()) {
        node->setRight(remove(data, node->getRight()));
    }
    else if (node->getLeft() && node->getRight()) {  // a ambos lados nodos
        temp = findeMin(node->getRight());
        node->setData(temp->getData());
        node->setRight(remove(node->getData(), node->getRight()));

    }
    else {
        temp = node;
        if (node->getLeft() == nullptr) {      // izquierda nulo se vuelve derecha
            node = node->getRight();
        }
        else if (node->getRight() == nullptr) { // derecha nulo se vuelve izquierda
            node = node->getLeft();
        }
        delete temp;
    }
    return node;
}

void BST::inorder(Node* node) {
    if (node == nullptr) {
        return;
    }
    inorder(node->getLeft());
    cout << node->getData().getId() << " ";
    inorder(node->getRight());
}


Node* BST::find(Node* node, Person data) {
    if (node == nullptr) {
        return nullptr;
    }
    else if (data.getId() < node->getData().getId()) {
        return find(node->getLeft(), data);
    }
    else if (data.getId() > node->getData().getId()) {
        return find(node->getRight(), data);
    }
    else {
        return node;
    }
}

void BST::inserttxt() {
    ofstream txt;
    txt.open("clientes.txt",ios::out);
    if(txt.fail()){
        cout<<"ERROR";
        exit(1);
    }
    txt<< new Person("Brett Bruce",1617071485199,true, true,true,3);
   /* txt<< new Person("Erich Wilcox",1671022582499,false,true,true,1);
    txt<< new Person("Steel Cooley",1662010583199,true,true,true,3);
    txt<< new Person("Roth Bond",1680021730699,true,false,true,1);
    txt<< new Person("Castor Mcpherson",1647041978499,true,true,true,1);
    txt<< new Person("Grady Bradford",1606052505399,true,true,true,2);
    txt<< new Person("Thane Mckee",1684071889899,false,false,false,2);
    txt<< new Person( "Tyrone Beasley",1639022845899,true,false,false,2);
    txt<< new Person("Peter Townsend",1669112337799,false,true,true,2);
    txt<< new Person("Uriah Middleton",1685041523399,false,false,true,3);
    txt<< new Person("Boris Dorsey",1633042699299,true,true,true,2);
    txt<< new Person("Brenden Alexander",1692020951099,true,true,true,1);
    txt<< new Person("Anthony Clay",1684101390799,false,false,false,3);
    txt<< new Person("Harper Blake",1652051227099,true,true,false,2);
    txt<< new Person("Isaac Mcmillan",1643012103499,false,true,false,1);
    txt<< new Person("Jesse Carey",1638080767499,false,false,false,2);
    txt<< new Person("Carter Burke",1675102292699,false,false,false,3);
    txt<< new Person("Ulric Cross",1633062126299,false,true,true,3);
    txt<< new Person("Brady Baldwin",1652072508999,false,true,false,2);
    txt<< new Person("Rashad Mcdowell",1673020285999,true,false,false,2);
    txt<< new Person( "Fletcher Martin",1681051947199,false,false,true,2);
    txt<< new Person( "Mark Mcdaniel",1649032344199,true,true,false,2);
    txt<< new Person("Ashton Justice",1698090765499,true,false,false,3);
    txt<< new Person("Orson Vega",1661061852099,true,false,true,1);
    txt<< new Person("Ethan Russo",1695012412999,true,false,true,1);
    txt<< new Person( "Demetrius Wallace",1617011915699,true,false,false,2);
    txt<< new Person("Colin Santiago",1672042398299,false,true,false,3);
    txt<< new Person( "Graiden Mosley",1643112263299,false,true,true,3);
    txt<< new Person( "Merritt Lindsay",1606081265199,true,false,false,1);
    txt<< new Person("Raphael Wyatt",1690080200099,false,true,true,1);
    txt<< new Person("Orson Freeman",1600042298999,true,false,true,1);
    txt<< new Person("Bernard Sawyer",1681010955799,false,false,false,2);
    txt<< new Person("Adam Serrano",1649022378199,true,true,false,3);
    txt<< new Person("Harding Mcbride",1635091809199,true,false,true,1);
    txt<< new Person("Fitzgerald Talley",1617080736199,false,true,false,3);
    txt<< new Person("Ahmed Olson",1686052297699,true,true,true,2);
    txt<< new Person("Cairo Burks",1675012082399,true,false,false,3);
    txt<< new Person("Daniel Brock",1676103006199,false,true,true,3);
    txt<< new Person(" Kevin Price",1688020121399,true,true,true,1);
    txt<< new Person("Owen Galloway",1608010197499,true,false,false,3);
    txt<< new Person("Fulton Nunez",1656011645399,true,true,false,1);
    txt<< new Person("Yoshio Bishop",1611092229099,true,true,false,1);
    txt<< new Person(" Brett Cantu",1669013034499,true,false,false,2);
    txt<< new Person("Brandon Booth",1621081696099,false,false,true,1);
    txt<< new Person(" Brian Reid",1645030615799,true,true,false,3);
    txt<< new Person("Arsenio Kaufman",1665021435299,false,false,true,3);
    txt<< new Person(" Aidan Santana",1629101874899,false,false,false,2);
    txt<< new Person(" Cole Hansen",1605093024199,false,false,true,2);
    txt<< new Person("Jameson Hebert",1635021374499,true,true,true,3);
    txt<< new Person("Vance Adams",1632011928599,true,false,true,2);
    txt<< new Person("Oliver Yates",1685092173099,false,false,true,2);
    txt<< new Person("Marshall Rosario",1666030688899,false,true,false,2);
    txt<< new Person("Rashad Holloway",1605021136299,false,true,false,1);
    txt<< new Person("Nash English",1698012799799,false,true,false,1);
    txt<< new Person(" Mohammad Little",1634110829399,true,false,false,3);
    txt<< new Person("Lev Pearson",1674070619999,false,false,false,2);
    txt<< new Person("Uriel Wilder",1678020720499,false,true,false,3);
    txt<< new Person(" Sean Murphy",1681112283099,true,false,false,3);
    txt<< new Person("Maxwell Beach",1690090485999,true,true,true,1);
    txt<< new Person(" Louis Mooney",1610051582099,false,false,true,3);
    txt<< new Person("Neil Munoz",1691042325499,true,false,true,2);
    txt<< new Person( "Jackson Stuart",1667021637499,false,false,false,3);
    txt<< new Person(" Christian Fox",1655091918399,true,false,true,3);
    txt<< new Person("Russell Robbins",1658052940899,false,false,false,3);
    txt<< new Person(" Buckminster Davidson",1681080353299,true,true,false,1);
    txt<< new Person( "Forrest Hood",1601091353799,false,true,true,3);
    txt<< new Person(" Porter Hart",1696040710699,false,true,true,3);
    txt<< new Person("Kamal Molina",1616072354599,false,false,false,2);
    txt<< new Person(" Ulric Horne",1693052415299,false,true,true,2);
    txt<< new Person("William Diaz",1607052123299,false,true,true,3);
    txt<< new Person("Wesley Whitley",1680031906899,false,false,true,2);
    txt<< new Person(" Wallace Mendoza",1634102282199,false,true,true,1);
    txt<< new Person("Blaze Bryant",1651122247099,false,false,false,2);
    txt<< new Person( "Hoyt Bowers",1645061718599,false,false,false,1);
    txt<< new Person(" Vladimir Swanson",1645080519099,false,false,true,2);
    txt<< new Person( "Henry Andrews",1687100691299,true,true,true,1);
    txt<< new Person( "Kadeem William",1668022724899,false,true,true,1);
    txt<< new Person(" Benjamin Morris",1661022826899,false,true,false,1);
    txt<< new Person( " Denton Sampson",1684022212599,false,false,false,1);
    txt<< new Person( " Cade Pickett",1682082865099,false,false,false,3);
    txt<< new Person( " Arthur Hamilton",1671101784299,true,true,false,1);
    txt<< new Person(" Josiah Sweet",1630012373899,true,false,false,1);
    txt<< new Person(" Harrison Knowles",1609050804999,true,false,true,1);
    txt<< new Person( "Murphy Duran",1673023002699,true,true,true,3);
    txt<< new Person("Quamar Galloway",1670052880099,false,true,true,3);
    txt<< new Person( "Elliott Thomas",1632061564599,true,false,true,2);
    txt<< new Person(" Leo Grimes",1667022806199,true,true,true,3);
    txt<< new Person("Zephania Farley",1625032247599,true,true,false,2);
    txt<< new Person("Colin Stephenson",1630111722999,true,true,false,2);
    txt<< new Person( "Craig Sherman",1687101507399,false,true,true,1);
    txt<< new Person( "Martin Silva",1685071326399,false,false,true,2);
    txt<< new Person( "Lamar Cross",1677051262199,true,true,false,2);
    txt<< new Person( "Ahmed Mclaughlin",1678101853399,false,false,true,3);
    txt<< new Person( "Jason Mendoza",1677042504199,false,false,true,3);
    txt<< new Person( "Cedric Ellison",1610091803299,true,false,true,2);
    txt<< new Person( "Zachary Atkinson",1699032294699,false,false,true,1);
    txt<< new Person( " Ryan Jacobs",1669080636499,false,false,false,1);
    txt<< new Person( " Tyler Williams",1682033077699,true,false,false,3);
    txt<< new Person( " Burton Marsh",1632042264099,true,true,true,2);
    txt<< new Person( " Merritt Odonnell",1610100503099,false,false,false,1);
    */
}



#endif //PROYECTOI_BST_H
