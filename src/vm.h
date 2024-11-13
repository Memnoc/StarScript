#ifndef starscript_vm_h
#define starscript_vm_h

#include "chunk.h"
#include "value.h"
#define STACK_MAX 256

typedef struct {
  Chunk *chunk;           // storing chunk to be executed
  uint8_t *ip;            // byte pointer type
  Value stack[STACK_MAX]; // stack as static array
  Value *stackTop;        // stack top pointer
} VM;

typedef enum {
  INTERPRET_OK,
  INTERPRET_COMPILE_ERROR,
  INTERPRET_RUNTIME_ERROR
} InterpretResult;

void initVM();
void freeVM();

InterpretResult interpret(Chunk *chunk);
void push(Value value);
Value pop();

#endif // !starscript_vm_h
