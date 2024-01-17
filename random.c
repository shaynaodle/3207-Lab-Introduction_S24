#include <stdlib.h>
#include <stdio.h>
#include <time.h>

char randchar();

int main(void) {
    return 0;
}

char randchar() {
    char c = (rand() % (90 - 65 + 1)) + 65;
    return c;
}