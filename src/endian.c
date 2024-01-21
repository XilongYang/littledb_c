#include "littledb.h"
#include "common_operations.h"

#include <stdbool.h>

bool littledb_is_system_big_endian() {
    unsigned short order = 0xABCD;
    unsigned char first_byte = *(unsigned char*) &order;
    return first_byte == 0xAB;
}

void littledb_switch_endian(char *source, size_t source_size) {
    char *head = source;
    char *tail = source + source_size - 1; 
    while (head < tail) {
        swap(head, tail, sizeof(char));
        ++head;
        --tail;
    }
}

void littledb_big_endian(char *source, size_t source_size) {
    if (!littledb_is_system_big_endian()) {
        littledb_switch_endian(source, source_size);
    }
}

void littledb_little_endian(char *source, size_t source_size) {
    if (littledb_is_system_big_endian()) {
        littledb_switch_endian(source, source_size);
    }
}

