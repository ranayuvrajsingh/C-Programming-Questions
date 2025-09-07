#include <stdio.h>
// A function that returns a pointer.
// Note: It's unsafe to return a pointer to a local variable.
// We use a static variable here, which persists after the function returns.
int* getLarger(int *a, int *b) {
    if (*a > *b) {
        return a;
    } else {
        return b;
    }
}
int main() {
    int x = 100, y = 200;
    int *larger_ptr = getLarger(&x, &y);
    printf("The larger value is %d\n", *larger_ptr);
    return 0;
}
