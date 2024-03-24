# Development notes

I thought it would be nice to put some notes here on the interesting things I am learning from the book and from my online research.

**Bytecode**
Structurally, it resembles machine code. It's an idealized fantasy instruction set to facilitate the compiler architecture complexity and portability.

**Emulator (VM)**
To read bytecode, you need a virtual machine or VM. We write our emulator in C because it's present in practically all machines, so that means our compiler has enormous portability.

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
