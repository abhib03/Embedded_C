#include <stdio.h>
#include <stdint.h>

// Define macros here
#define ENABLE  0
#define MODE    1
#define SPEED   3 

uint16_t build_register(uint8_t enable, uint8_t mode, uint8_t speed) {
    // Use macros to set fields
    uint16_t x = 0;
    x |= (enable << ENABLE);
    x |= (mode << MODE);
    x |= (speed << SPEED);
    return x;
}

int main() {
    uint8_t enable, mode, speed;
    scanf("%hhu %hhu %hhu", &enable, &mode, &speed);

    uint16_t reg = build_register(enable, mode, speed);
    printf("%u", reg);
    return 0;
}
