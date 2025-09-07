#include <stdio.h>
struct Time { int hour; int minute; int second; };
struct Time addSeconds(struct Time t, int secs) {
    t.second += secs;
    t.minute += t.second / 60;
    t.second %= 60;
    t.hour += t.minute / 60;
    t.minute %= 60;
    t.hour %= 24;
    return t;
}
int main() {
    struct Time now = {10, 59, 30};
    printf("Current time: %02d:%02d:%02d\n", now.hour, now.minute, now.second);
    now = addSeconds(now, 75);
    printf("Time after 75 seconds: %02d:%02d:%02d\n", now.hour, now.minute, now.second);
    return 0;
}
