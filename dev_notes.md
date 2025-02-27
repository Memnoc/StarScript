# Development notes

### Header Files Overview

- **[vm.h](https://github.com/Memnoc/StarScript/blob/main/src/vm.h)**

  - Defines the `VM` structure, which includes a chunk of bytecode, instruction pointer, stack, and stack top.
  - Enumerates possible interpretation results (`INTERPRET_OK`, `INTERPRET_COMPILE_ERROR`, `INTERPRET_RUNTIME_ERROR`).
  - Declares functions for VM initialization, freeing, interpreting chunks, pushing, and popping values.

- **[common.h](https://github.com/Memnoc/StarScript/blob/main/src/common.h)**

  - Includes standard libraries and defines common macros and type definitions used across the project.
  - Defines `DEBUG_TRACE_EXECUTION` for debugging purposes.

- **[value.h](https://github.com/Memnoc/StarScript/blob/main/src/value.h)**

  - Defines the `Value` type and `ValueArray` structure for storing and managing values.
  - Declares functions for initializing, writing to, freeing, and printing values in a `ValueArray`.

- **[debug.h](https://github.com/Memnoc/StarScript/blob/main/src/debug.h)**

  - Declares functions for disassembling chunks and instructions for debugging purposes.

- **[memory.h](https://github.com/Memnoc/StarScript/blob/main/src/memory.h)**

  - Defines macros for managing memory allocation and resizing arrays.
  - Declares the `reallocate` function for reallocating memory.

- **[chunk.h](https://github.com/Memnoc/StarScript/blob/main/src/chunk.h)**
  - Defines the `OpCode` enum for different operation codes (`OP_CONSTANT`, `OP_NEGATE`, `OP_RETURN`).
  - Defines the `Chunk` structure for storing bytecode and associated metadata.
  - Declares functions for initializing, freeing, writing to chunks, and adding constants.

### Source Files Overview

- **[vm.c](https://github.com/Memnoc/StarScript/blob/main/src/vm.c)**

  - Implements VM initialization, stack management, and the main interpretation loop.
  - Defines macros for reading bytes and constants from the bytecode.

- **[memory.c](https://github.com/Memnoc/StarScript/blob/main/src/memory.c)**

  - Implements the `reallocate` function for managing memory.

- **[debug.c](https://github.com/Memnoc/StarScript/blob/main/src/debug.c)**

  - Implements functions for disassembling chunks and instructions, providing a readable representation of bytecode.

- **[chunk.c](https://github.com/Memnoc/StarScript/blob/main/src/chunk.c)**

  - Implements functions for initializing, freeing, and writing to chunks, as well as adding constants.

- **[value.c](https://github.com/Memnoc/StarScript/blob/main/src/value.c)**

  - Implements functions for managing `ValueArray` structures, including initialization, writing, freeing, and printing values.

- **[main.c](https://github.com/Memnoc/StarScript/blob/main/src/main.c)**
  - Initializes the VM, creates a test chunk of bytecode, compiles instructions into the chunk, and interprets the chunk using the VM.
