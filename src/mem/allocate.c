#include <stdio.h>
#include <stdlib.h>

int main() {
    int *num_ptr = (int *)malloc(sizeof(int));
    if (num_ptr == NULL) {
        printf("Failed to allocate memory\n");
        return 1;
    }
    *num_ptr = 42;
    printf("The address of num_ptr is %p\n", num_ptr);
    printf("The value of num_ptr is %d\n", *num_ptr);

    free(num_ptr);
    return 0;
}
