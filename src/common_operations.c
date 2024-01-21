#include "common_operations.h"

void swap(char *obj1, char *obj2, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        char tmp = obj1[i];
        obj1[i] = obj2[i];
        obj2[i] = tmp;
    }
}
