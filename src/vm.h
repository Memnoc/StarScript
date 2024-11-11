#ifndef starscript_vm_h
#define starscript_vm_h

#include "chunk.h"

typedef struct {
  Chunk *chunk; // storing chunk to be executed
  uint8_t *ip;  // byte pointer type
} VM;

typedef enum {
  INTERPRET_OK,
  INTERPRET_COMPILE_ERROR,
  INTERPRET_RUNTIME_ERROR
} InterpretResult;

void initVM();
void freeVM();
InterpretResult interpret(Chunk *chunk);

#endif // !starscript_vm_h
