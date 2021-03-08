#include "node.h"
using namespace std;

/**
 * @class Node
 * @brief se encarga de almacenar un puntero al
 * nodo sigueinte y su respectivo dato
 */
node node::get_next(){
    return *next;
}
void node::set_next(node n) {
    *next = n;
}
int node::get_data() {
    return data;
}
void node::set_data(int d) {
    data = d;
}
