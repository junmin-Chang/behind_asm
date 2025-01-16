#include <dlfcn.h>
#include <stdio.h>

int sum(int p1, int p2);

int main(void) {
    void *handle;
    int (*sum)(int, int);
    handle = dlopen("./libsum.so", RTLD_LAZY);
    if (!handle) {
        fprintf(stderr, "%s\n", dlerror());
    }

    sum = dlsym(handle, "sum");

    printf("SUM: %d\n", (*sum)(3,4));

    return 0;
}
