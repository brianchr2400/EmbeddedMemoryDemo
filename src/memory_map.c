#include "../include/memory_map.h"

// Define the actual control register variable
ControlRegister control_register = {
    .enable = 0,
    .mode = 0,
    .reserved = 0
};