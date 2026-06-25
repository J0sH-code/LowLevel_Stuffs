#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char buffer[1024];
    snprintf(buffer,sizeof(buffer),"start https://%s.com/",argv[1]);
    system(buffer);
}
