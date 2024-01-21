#ifndef COMMON_OPERATIONS_H
#define COMMON_OPERATIONS_H

#include <stddef.h>

/*
** Swap to objects that both of the objects has a [size] length.
**
** Params:
**   obj1: one object to be swap.
**   obj2: another object to be swap.
**   size: the size of these objects.
**
*/
extern void swap(char* obj1, char* obj2, size_t size);

#endif