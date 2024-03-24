#ifndef starscript_debug_h
#define starscript_debug_h

#include "chunk.h"

void disassembleChunk(Chunk *chunk, const char *name);
int disassembleInstruction(Chunk *chunk, int offset);

#endif // !starscript_debug_h
