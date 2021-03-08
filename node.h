#include "iostream"
#ifndef C___PRUEBAS_NODE_H
#define C___PRUEBAS_NODE_H
/**
 * @class Node Header
 * @brief se encarga conectar los metodos y elementos
 * de la clase con los .cpp que deseen importarla.
 */
class node{
public:
    int data;
    node *next;
    node get_next();
    void set_next(node n);
    int get_data();
    void set_data(int d);
};

#endif //C___PRUEBAS_NODE_H