#include <stdio.h>
int main() {
    int num = 10;
    char ch = 'A';
    double val = 3.14;

    int *p_num = &num;
    char *p_ch = &ch;
    double *p_val = &val;

    // sizeof(pointer) gives the size of the pointer itself.
    printf("Size of pointer p_num: %zu bytes\n", sizeof(p_num));

    // sizeof(*pointer) gives the size of the data type it points to.
    printf("Size of value pointed to by p_num (an int): %zu bytes\n", sizeof(*p_num));
    printf("Size of value pointed to by p_ch (a char): %zu bytes\n", sizeof(*p_ch));
    printf("Size of value pointed to by p_val (a double): %zu bytes\n", sizeof(*p_val));
    return 0;
}
