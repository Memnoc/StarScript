#include "chunk.h"
#include "debug.h"
#include "vm.h"

int main(int argc, char *argv[]) {
  initVM();

  Chunk chunk;
  initChunk(&chunk);

  // hand-compile instructions in test chunk
  int constant = addConstant(&chunk, 1.2);
  writeChunk(&chunk, OP_CONSTANT, 123); // adding constant value to the pool
  writeChunk(&chunk, constant, 123);
  writeChunk(&chunk, OP_NEGATE, 123);

  writeChunk(&chunk, OP_RETURN, 123);

  disassembleChunk(&chunk, "test chunk");
  freeVM();          // freeing up
  interpret(&chunk); // VM entry point
  freeChunk(&chunk);

  return 0;
}
