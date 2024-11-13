#include "vm.h"
#include "chunk.h"
#include "common.h"
#include "debug.h"
#include "value.h"
#include <stdint.h>
#include <stdio.h>

VM vm; // declaring a one single global VM it's easier from a memory management
       // perspective

static void resetStack() { vm.stackTop = vm.stack; }

void initVM() { resetStack(); }

void freeVM() {}

/*
 * STACK PROTOCOL - INSTRUCTION 1
 * Push values at the top of the stack
 *
 * */
void push(Value value) {
  *vm.stackTop = value;
  vm.stackTop++;
}

/*
 * STACK PROTOCOL - INSTRUCTION 2
 * Pop values from the stack
 *
 * */
Value pop() {
  vm.stackTop--;
  return *vm.stackTop;
}
/*
 * DECODING/DI1PATCHING instructions
 *
 *
 * 1) READ_BYTE - reads the byte current pointed at by IP
 *    then advances the instruction pointer
 *    the first byte of an instruction is always OP_CODE
 *
 * 2) Switch takes care of all the opcode scenarios
 *    the body of each case implements that op's code behaviour
 *
 *
 * */
static InterpretResult run() {
#define READ_BYTE() (*vm.ip++)
#define READ_CONSTANT() (vm.chunk->constants.values[READ_BYTE()])

  for (;;) {
    uint8_t instruction;
    switch (instruction = READ_BYTE()) {
    case OP_CONSTANT: {
      Value constant = READ_CONSTANT();
      printValue(constant);
      printf("\n");
      break;
    }
    case OP_RETURN: {
      return INTERPRET_OK;
    }
    }
  }

#undef READ_BYTE
#undef READ_CONSTANT // undefine the macros to maintain the scope limted to
                     // run()
}

InterpretResult interpret(Chunk *chunk) {
  vm.chunk = chunk; // store executed chunk
  vm.ip =
      vm.chunk->code; // the location of the VM instruction currently executed
  return run();       // run bytecode instruction using helper run()
}
