//
// Created by vsj94 on 21/09/2022.
//
#include "BST.h"

BST::BST() {root = nullptr;}

BST::~BST() {root = makeEmpty(root);}

void BST::insert(Client* data) {root = insertN(data, root);}

void BST::remove(Client* data) {root = removeN(data, root);}

void BST::display() {inorder(root);cout << endl;}

void BST::search(Client* data) {root = find(root, data);}

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

Node* BST::insertN(Client* data, Node* node) {
    if (node == nullptr) {
        node = new Node(data,data->returnkey());
    }
    else if (data->getId() < node->getData()->getId()) {
        node->setLeft(insertN(data, node->getLeft()));
    }
    else if (data->getId() > node->getData()->getId()) {
        node->setRight(insertN(data,node->getRight()));
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


Node* BST::removeN(Client* data, Node* node) {
    Node* temp;
    if (node == nullptr) {
        return nullptr;
    }
    else if (data->getId() < node->getData()->getId()) {
        node->setLeft(removeN(data, node->getLeft()));
    }
    else if (data->getId() > node->getData()->getId()) {
        node->setRight(removeN(data, node->getRight()));
    }
    else if (node->getLeft() && node->getRight()) {  // a ambos lados nodos
        temp = findeMin(node->getRight());
        node->setData(temp->getData());
        node->setRight(removeN(node->getData(), node->getRight()));

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
    cout << node->getData()->getId() << " ";
    inorder(node->getRight());
}


Node* BST::find(Node* node, Client *data) {
    if (node == nullptr) {
        return nullptr;
    }
    else if (data->getId() < node->getData()->getId()) {
        return find(node->getLeft(), data);
    }
    else if (data->getId() > node->getData()->getId()) {
        return find(node->getRight(), data);
    }
    else {
        return node;
    }
}

void BST::insertClient() {

    new Client("Brett Bruce",1617071485199,true, true,true,3);
     new Client("Erich Wilcox",1671022582499,false,true,true,1);
    new Client("Steel Cooley",1662010583199,true,true,true,3);
     new Client("Roth Bond",1680021730699,true,false,true,1);
     new Client("Castor Mcpherson",1647041978499,true,true,true,1);
     new Client("Grady Bradford",1606052505399,true,true,true,2);
   new Client("Thane Mckee",1684071889899,false,false,false,2);
  new Client( "Tyrone Beasley",1639022845899,true,false,false,2);
     new Client("Peter Townsend",1669112337799,false,true,true,2);
     new Client("Uriah Middleton",1685041523399,false,false,true,3);
      new Client("Boris Dorsey",1633042699299,true,true,true,2);
    new Client("Brenden Alexander",1692020951099,true,true,true,1);
      new Client("Anthony Clay",1684101390799,false,false,false,3);
    new Client("Harper Blake",1652051227099,true,true,false,2);
      new Client("Isaac Mcmillan",1643012103499,false,true,false,1);
     new Client("Jesse Carey",1638080767499,false,false,false,2);
     new Client("Carter Burke",1675102292699,false,false,false,3);
      new Client("Ulric Cross",1633062126299,false,true,true,3);
      new Client("Brady Baldwin",1652072508999,false,true,false,2);
     new Client("Rashad Mcdowell",1673020285999,true,false,false,2);
    new Client( "Fletcher Martin",1681051947199,false,false,true,2);
     new Client( "Mark Mcdaniel",1649032344199,true,true,false,2);
      new Client("Ashton Justice",1698090765499,true,false,false,3);
      new Client("Orson Vega",1661061852099,true,false,true,1);
     new Client("Ethan Russo",1695012412999,true,false,true,1);
     new Client( "Demetrius Wallace",1617011915699,true,false,false,2);
      new Client("Colin Santiago",1672042398299,false,true,false,3);
     new Client( "Graiden Mosley",1643112263299,false,true,true,3);
     new Client( "Merritt Lindsay",1606081265199,true,false,false,1);
     new Client("Raphael Wyatt",1690080200099,false,true,true,1);
     new Client("Orson Freeman",1600042298999,true,false,true,1);
    new Client("Bernard Sawyer",1681010955799,false,false,false,2);
      new Client("Adam Serrano",1649022378199,true,true,false,3);
     new Client("Harding Mcbride",1635091809199,true,false,true,1);
     new Client("Fitzgerald Talley",1617080736199,false,true,false,3);
      new Client("Ahmed Olson",1686052297699,true,true,true,2);
      new Client("Cairo Burks",1675012082399,true,false,false,3);
      new Client("Daniel Brock",1676103006199,false,true,true,3);
      new Client(" Kevin Price",1688020121399,true,true,true,1);
     new Client("Owen Galloway",1608010197499,true,false,false,3);
     new Client("Fulton Nunez",1656011645399,true,true,false,1);
    new Client("Yoshio Bishop",1611092229099,true,true,false,1);
     new Client(" Brett Cantu",1669013034499,true,false,false,2);
      new Client("Brandon Booth",1621081696099,false,false,true,1);
     new Client(" Brian Reid",1645030615799,true,true,false,3);
     new Client("Arsenio Kaufman",1665021435299,false,false,true,3);
     new Client(" Aidan Santana",1629101874899,false,false,false,2);
     new Client(" Cole Hansen",1605093024199,false,false,true,2);
      new Client("Jameson Hebert",1635021374499,true,true,true,3);
     new Client("Vance Adams",1632011928599,true,false,true,2);
     new Client("Oliver Yates",1685092173099,false,false,true,2);
      new Client("Marshall Rosario",1666030688899,false,true,false,2);
     new Client("Rashad Holloway",1605021136299,false,true,false,1);
      new Client("Nash English",1698012799799,false,true,false,1);
     new Client(" Mohammad Little",1634110829399,true,false,false,3);
     new Client("Lev Pearson",1674070619999,false,false,false,2);
      new Client("Uriel Wilder",1678020720499,false,true,false,3);
      new Client(" Sean Murphy",1681112283099,true,false,false,3);
      new Client("Maxwell Beach",1690090485999,true,true,true,1);
    new Client(" Louis Mooney",1610051582099,false,false,true,3);
   new Client("Neil Munoz",1691042325499,true,false,true,2);
     new Client( "Jackson Stuart",1667021637499,false,false,false,3);
    new Client(" Christian Fox",1655091918399,true,false,true,3);
     new Client("Russell Robbins",1658052940899,false,false,false,3);
      new Client(" Buckminster Davidson",1681080353299,true,true,false,1);
     new Client( "Forrest Hood",1601091353799,false,true,true,3);
     new Client(" Porter Hart",1696040710699,false,true,true,3);
     new Client("Kamal Molina",1616072354599,false,false,false,2);
    new Client(" Ulric Horne",1693052415299,false,true,true,2);
     new Client("William Diaz",1607052123299,false,true,true,3);
      new Client("Wesley Whitley",1680031906899,false,false,true,2);
      new Client(" Wallace Mendoza",1634102282199,false,true,true,1);
     new Client("Blaze Bryant",1651122247099,false,false,false,2);
      new Client( "Hoyt Bowers",1645061718599,false,false,false,1);
      new Client(" Vladimir Swanson",1645080519099,false,false,true,2);
     new Client( "Henry Andrews",1687100691299,true,true,true,1);
      new Client( "Kadeem William",1668022724899,false,true,true,1);
      new Client(" Benjamin Morris",1661022826899,false,true,false,1);
     new Client( " Denton Sampson",1684022212599,false,false,false,1);
     new Client( " Cade Pickett",1682082865099,false,false,false,3);
    new Client( " Arthur Hamilton",1671101784299,true,true,false,1);
     new Client(" Josiah Sweet",1630012373899,true,false,false,1);
      new Client(" Harrison Knowles",1609050804999,true,false,true,1);
      new Client( "Murphy Duran",1673023002699,true,true,true,3);
      new Client("Quamar Galloway",1670052880099,false,true,true,3);
     new Client( "Elliott Thomas",1632061564599,true,false,true,2);
     new Client(" Leo Grimes",1667022806199,true,true,true,3);
     new Client("Zephania Farley",1625032247599,true,true,false,2);
    new Client("Colin Stephenson",1630111722999,true,true,false,2);
      new Client( "Craig Sherman",1687101507399,false,true,true,1);
     new Client( "Martin Silva",1685071326399,false,false,true,2);
      new Client( "Lamar Cross",1677051262199,true,true,false,2);
      new Client( "Ahmed Mclaughlin",1678101853399,false,false,true,3);
     new Client( "Jason Mendoza",1677042504199,false,false,true,3);
     new Client( "Cedric Ellison",1610091803299,true,false,true,2);
     new Client( "Zachary Atkinson",1699032294699,false,false,true,1);
      new Client( " Ryan Jacobs",1669080636499,false,false,false,1);
     new Client( " Tyler Williams",1682033077699,true,false,false,3);
      new Client( " Burton Marsh",1632042264099,true,true,true,2);
      new Client( " Merritt Odonnell",1610100503099,false,false,false,1);

}
