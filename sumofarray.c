#include <stdio.h>

int main() {
    
    int array[] = {1, 2, 3};
    int size = sizeof(array) / sizeof(array[0]);
    int *ptr = array;
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(ptr + i); 
    }
    
   
    printf("Sum of array elements: %d\n", sum);
    
    return 0;
}