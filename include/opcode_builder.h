#pragma once
#include "opcode.h"

class OpcodeBuilder
{
public:
    virtual void reset() = 0;
    virtual void setName(char *name) = 0;     // name of instruction
    virtual void setArgCount(int count) = 0;  // number of arguments
    virtual void setArgs(uint8_t args[]) = 0; // collection of arguments
    virtual void setSize(int size) = 0;       // size in bytes
    virtual Opcode getOpcode() = 0;
};

// controller opcodes, i.e. NOP
class OpcodeControlBuilder : OpcodeBuilder
{
};

// opcodes that involve immediates
class OpcodeImmediateBuilder : OpcodeBuilder
{
};

// opcodes that deal with addresses
class OpcodeMemoryBuilder : OpcodeBuilder
{
};

// opcodes that deal with registers
class OpcodeRegisterBuilder : OpcodeBuilder
{
};

// extended opcodes
class OpcodeExtendedBuilder : OpcodeBuilder
{
};