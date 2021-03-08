
using namespace std;
#ifndef C___PRUEBAS_COLLECTOR_H
#define C___PRUEBAS_COLLECTOR_H

#include "list"
#include "node.h"
/**
 * @class Collector Header
 * @brief se encarga conectar los metodos y elementos
 * de la clase con los .cpp que deseen importarla.
 */
class Collector{
public:
    list<node> memory_sapce;
    void delete_node(node *n);
    node* new_space(int a);

};
#endif //C___PRUEBAS_COLLECTOR_H
