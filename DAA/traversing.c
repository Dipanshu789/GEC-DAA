#include <stdio.h>

int main() {
    
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    
    printf("Forward traversal:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("Reverse traversal:\n");
    for(int i = size-1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
