#include "chunk.h"
#include "debug.h"

int main(int argc, char *argv[]) {

  Chunk chunk;
  initChunk(&chunk);

  // hand-compile instructions in test chunk
  int constant = addConstant(&chunk, 1.2);
  writeChunk(&chunk, OP_CONSTANT, 123); // adding constant value to the pool
  writeChunk(&chunk, constant, 123);

  writeChunk(&chunk, OP_RETURN, 123);

  disassembleChunk(&chunk, "test chunk");
  freeChunk(&chunk);

  return 0;
}
