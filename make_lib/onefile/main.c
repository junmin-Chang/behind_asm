#include <stdio.h>

int func(int p1, int p2) {
    int p3;
    p3 = p1 + p2;

    printf("Test: %d\n", p3);

    return p3; 
}

int main(void) {
    func(3,4);
}