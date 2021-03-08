#include "Collector.h"
/**
 * @class Collector
 * @brief Almacena en una lista los valores
 * de memoria eliminados y los reutiliza.
 * Implementa el delete_node y el new_space
 */
void Collector::delete_node(node *n) {
    memory_sapce.push_front(*n);
}
node* Collector::new_space(int a) {
    node *b;
    if(memory_sapce.size()==0){
        b = new node();
        cout<<"Creando el nuevo espacio en memoria: "<<b<<endl;
    } else{
        cout<<"Reutilizando el espacio en memoria: "<<&*memory_sapce.begin()<<endl;
        b = &*memory_sapce.begin();
        memory_sapce.pop_front();
    }
    return b;
}