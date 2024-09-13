#pragma once

#include <string>

class Opcode
{
public:
    char *name;
    int argc, size; // number of arguments, size of opcode in bytes
    uint16_t argv;  // collection of arguments, i.e. data or addresses
};