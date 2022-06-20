#include "linkedlist.h"
#include <stdio.h>

int main()
{

    typedef struct {
        int x, y;
    } Vec2;

    LinkedList(Vec2) vector = list_new(vector);
    list_push_back(vector, ((Vec2){10, 15}));

    return 0;
}