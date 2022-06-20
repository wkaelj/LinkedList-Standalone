#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdlib.h>

#ifndef __C_STD_23__
#include <stdbool.h>
#endif

#define LinkedList(type) struct list_##type##_t {\
    type value;\
    struct list_##type##_t *next; \
    _Bool hasValue; \
}* 

// pass the name of the new variable
// Example:
//  LinkedList(type) iplist = new_list(iplist);
#define list_new(variable) \
    /* list_new */ \
    malloc(sizeof(typeof(*variable))); \
    *variable = (typeof(*variable)) {(typeof(variable->value)) {0}, NULL, false};

// add a new node to the back of the list, with value of value
#define list_push_back(list, var) \
/* list_push_back */ \
typeof(list) list_iterator = list;  \
while (list_iterator != NULL || list_iterator->hasValue == false) \
{ \
    list_iterator = list_iterator->next; \
} \
if (list_iterator == NULL) list_iterator = malloc(sizeof(typeof(*list))); \
list_iterator->value = var;

// insert a new value at index of the list 
#define list_push(list, index, value)

// set the value of the list element at index
#define list_set(list, index, value)

// remove the value from the back of the list
#define list_pop_back(list)

// remove the node at index from the list
#define list_pop(list, index)

// delete an entire list, and remove it from memory
#define list_delete()

#endif // LINKED_LIST_H