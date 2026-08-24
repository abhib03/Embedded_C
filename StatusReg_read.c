/* Decode Status Register into Human-Readable Flags (example code) */
#include <stdio.h>
#include <stdint.h>

void decode_status(uint8_t status_reg) {
	const char *flags[8]= {
		"Power On",
		"Error",
		"Tx Ready",
		"Rx Ready",
		"Overheat",
		"Undervoltage",
		"Timeout",
		"Reserved"
	};

	for(int i=0; i<8; i++) {
		if(status_reg & (1 << i)) {
			printf("%s\n",flags[i]);
		}
	}
}

int main() {
	uint8_t reg;
	scanf("%hhu", &reg);
	decode_status(reg);
	return 0;
}
