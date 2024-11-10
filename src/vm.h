#ifndef starscript_vm_h
#define starscript_vm_h

#include "chunk.h"

typedef struct {
  Chunk *chunk; // storing chunk to be executed
} VM;

void initVM();
void freeVM();

#endif // !starscript_vm_h
