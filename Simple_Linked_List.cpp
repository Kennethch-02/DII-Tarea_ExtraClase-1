#include "iostream"
#include "stdio.h"
#include "Simple_Linked_List.h"

using namespace std;
/**
 * @class Simple_Linked_List
 * @brief Se encargarde crear una lista que almacena
 * el nodo Header e implementa los metodos de insert
 * y delete.
 */
void Simple_Linked_List::insert_first(int* d) {
    node *b = collector.new_space(sizeof *d); //Crea un nuevo espacio en memoria mediante new_space()
    node *n = (node *) b;
    n->data = *d;
    n->next = this->_node;
    this->_node = n;
    cout<<"Insertando: "<<n->get_data()<<" En la posicion: "<<n<<endl;
}
void Simple_Linked_List::delete_first() {
    cout<<"Eliminando el elemento: "<<_node->get_data()<<" En la posicion: "<<_node<<endl;
    collector.delete_node(_node);
    *_node = _node->get_next();
}
