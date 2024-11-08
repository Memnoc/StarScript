#ifndef starscript_chunk_h
#define starscript_chunk_h

#include "common.h"
#include "value.h"

typedef enum {
  OP_CONSTANT, // know which constant to load
  OP_RETURN,
} OpCode;

typedef struct {
  int count;
  int capacity;
  uint8_t *code;
  int *lines;
  ValueArray constants;
} Chunk;

void initChunk(Chunk *chunk);
void freeChunk(Chunk *chunk);
void writeChunk(Chunk *chunk, uint8_t byte, int line);
int addConstant(Chunk *chunk, Value value);

#endif
