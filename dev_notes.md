# Development notes

Would be nice to tell you how to run this thing. There is a make file, and it generates an executable at `EXECUTABLE = $(BIN_DIR)/starscript`
All you have to do is target the exec in bin `cd bin` and run it as `./starscript`

I thought it would be nice to put some notes here on the interesting things I am learning from the book and from my online research.

**Bytecode**
Structurally, it resembles machine code. It's an idealized fantasy instruction set to facilitate the compiler architecture complexity and portability.

**Emulator (VM)**
To read bytecode, you need a virtual machine or VM. We write our emulator in C because it's present in practically all machines, so that means our compiler has enormous portability.

## Encoding and decoding patterns

**Module to create chunks of bytecode**
This is essentially the representation of our code. It controls what kind of instructions we are dealing with. It creates chunks of bytecode.
`memory.c`
`memory.h`
`chunk.h`
`chunk.c`

**Disassembler to have an internal representation of the code**
Given a chunk, it will print out all of the instructions in it.
`debug.h`
`debug.c`

## Storing value technique

**Constants pool**
To store values like constants, the technique used here is similar to what Java VM uses: associating a _constant pool_ to each compiled class.
Therefore, all constants in Starscript, each chunk will carry a list of values that appear as literals in the program, and to keep things simpler, we store all the constants there. The constants pool is an array of values.
