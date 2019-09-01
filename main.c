#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "settings.h"

int main(int argc, char *argv[]) {
    test(0.4, 3.3);
    puts("test");
    load_config("config");
    return 0;
}