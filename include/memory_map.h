#ifndef MEMORY_MAP_H
#define MEMORY_MAP_H

// Simulate bitfield struct for a control register
typedef struct {
    unsigned int enable : 1;
    unsigned int mode : 2;
    unsigned int reserved : 5;
} ControlRegister;

extern ControlRegister control_register;

#endif