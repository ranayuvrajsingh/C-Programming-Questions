#include <stdio.h>
union IntFloat {
    int i;
    float f;
};
int main() {
    union IntFloat data;
    data.i = 987654321;
    printf("As integer: %d\n", data.i);
    printf("As float: %f (interprets int bits as float)\n", data.f);

    data.f = 123.456;
    printf("\nAs float: %f\n", data.f);
    printf("As integer: %d (interprets float bits as int)\n", data.i);
    return 0;
}
