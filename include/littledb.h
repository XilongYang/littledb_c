#ifndef LITTLEDB_C_H
#define LITTLEDB_C_H

#include <stddef.h>
#include <stdbool.h>

/*
** Status codes.
*/
#define LITTLEDB_OK    0;
#define LITTLEDB_ERROR 1;

/*
** Endian judge.
** 
** Result:
**   true then the system is big endian.
**   false then the system is little endian.
**
*/
extern bool littledb_is_system_big_endian();

/*
** Revert the represention of a byte sequence.
**
** Params:
**   source: source byte sequence, and the result will save here. In other words, the translation is in-place.
**   source_size: the size of the source.
**
*/
extern void littledb_switch_endian(char *source, size_t source_size);

/*
** Transfer the represention to big-endian for a system default byte sequence.
**
** Params:
**   source: source byte sequence, and the result will save here. In other words, the translation is in-place.
**   source_size: the size of the source.
**
*/
extern void littledb_big_endian(char *source, size_t source_size);

/*
** Transfer the represention to little-endian for a system default byte sequence.
**
** Params:
**   source: source byte sequence, and the result will save here. In other words, the translation is in-place.
**   source_size: the size of the source.
**
*/
extern void littledb_little_endian(char *source, size_t source_size);

/*
** SHA256 hash algorithm.
** 
** Caluctate the source's hash value.
** 
** Params:
**   source: a byte sequence.
**   source_size: the size of the source.
**   result: hash value of the source, needs at least 256/8 = 32 Bytes.
**
** Result:
**   LITTLEDB_OK if the hash value generate successed.
**   LITTLEDB_ERROR if error occured.
**
*/
extern int littledb_sha256(char *source, size_t source_size, char *result);

#endif