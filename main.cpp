#include <iostream>
#include <mmcobj.h>
#include "Simple_Linked_List.h"
using namespace std;
/**
 * @fn main
 * @brief Funcion main que se encarga de instanciar y
 * hacer uso de las funciones de list.
 */
int main() {
    Simple_Linked_List list;
    list.insert_first(new int(100));
    list.insert_first(new int(1020));
    list.insert_first(new int(1010));
    list.delete_first();
    list.insert_first(new int(1030));
    list.insert_first(new int(1040));
    return 0;
}