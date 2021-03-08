#ifndef C___PRUEBAS_SIMPLE_LINKED_LIST_H
#define C___PRUEBAS_SIMPLE_LINKED_LIST_H

#include "Collector.h"
/**
 * @class Simple_Linked_List Header
 * @brief se encarga conectar los metodos y elementos
 * de la clase con los .cpp que deseen importarla.
 */
class Simple_Linked_List {
public:
    Collector collector;
    node *_node;
    void insert_first(int* d);
    void delete_first();
};
#endif //C___PRUEBAS_SIMPLE_LINKED_LIST_H
