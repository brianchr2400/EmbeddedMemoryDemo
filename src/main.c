#include <stdio.h>
#include "../include/memory_map.h"

// Test update after moving project in Methuselah

int main() {
    // Simulate writing to a control register
    control_register.enable = 1;
    control_register.mode = 3;

    // Print values
    printf("Control Register - Enable: %d, Mode: %d\n", control_register.enable, control_register.mode);

    return 0;
}