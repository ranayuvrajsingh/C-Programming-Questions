#include <stdio.h>
#include <string.h>
struct User { char username[8]; int is_admin; };
int main() {
    struct User user;
    user.is_admin = 0;
    // This string is too long for the username buffer.
    // It will overwrite the adjacent 'is_admin' member in memory.
    char *long_name = "SuperLongAdminName";
    printf("Before overflow: is_admin = %d\n", user.is_admin);
    strcpy(user.username, long_name);
    // The value of is_admin is now likely non-zero due to the overflow.
    printf("After overflow: is_admin = %d (Value corrupted!)\n", user.is_admin);
    if(user.is_admin) {
        printf("Warning: Access granted due to buffer overflow!\n");
    }
    return 0;
}
