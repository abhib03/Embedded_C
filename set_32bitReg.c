#include <stdio.h>
#include <stdint.h>

uint32_t set_bits(uint32_t reg, uint8_t pos, uint8_t len) {
    // Your code here
    for(int i = 0; i < len; i++){
        reg |= (1 << (pos + i));
    }
    return reg;
}

int main() {
    uint32_t reg;
    uint8_t pos, len;
    scanf("%u %hhu %hhu", &reg, &pos, &len);
    printf("%u", set_bits(reg, pos, len));
    return 0;
}
