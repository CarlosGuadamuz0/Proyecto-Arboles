
#ifndef PROYECTOI_CARGAR_H
#define PROYECTOI_CARGAR_H
#include "../BST.h"
#include <fstream>
class Cargar {
private:
    BST* entity;
public:
    Cargar();
    ~Cargar();
    BST* cargar();
    void leer();
};


#endif //PROYECTOI_CARGAR_H
