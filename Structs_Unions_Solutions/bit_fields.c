#include <stdio.h>

// Bit fields allow packing data to save memory.
// 'active: 1' means 'active' uses only 1 bit.
struct Status {
    unsigned int active : 1;
    unsigned int ready : 1;
    unsigned int mode : 3; // Uses 3 bits, can store values 0-7
};

int main() {
    struct Status s;
    s.active = 1; // 1 bit (on)
    s.ready = 0;  // 1 bit (off)
    s.mode = 5;   // 3 bits (value 5)

    printf("Size of Status struct: %zu bytes\n", sizeof(s));
    printf("Status: active=%u, ready=%u, mode=%u\n", s.active, s.ready, s.mode);

    if (s.active) {
        printf("System is active.\n");
    }
    return 0;
}
