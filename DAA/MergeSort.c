#include <stdio.h>

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = 7;
    int left[50], right[50];  
    
    printf("Original array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    for(int subarr_size = 1; subarr_size < size; subarr_size = subarr_size * 2) {
       
        for(int left_start = 0; left_start < size - 1; left_start += 2 * subarr_size) {
            int mid = left_start + subarr_size - 1;
            int right_end = (left_start + 2 * subarr_size - 1 < size - 1) ? 
                            left_start + 2 * subarr_size - 1 : size - 1;
            
            int i, j, k;
            int n1 = mid - left_start + 1;
            int n2 = right_end - mid;
            
            for(i = 0; i < n1; i++) {
                left[i] = arr[left_start + i];
            }
            for(j = 0; j < n2; j++) {
                right[j] = arr[mid + 1 + j];
            }
          
            i = 0;
            j = 0;
            k = left_start;
            
            while(i < n1 && j < n2) {
                if(left[i] <= right[j]) {
                    arr[k] = left[i];
                    i++;
                } else {
                    arr[k] = right[j];
                    j++;
                }
                k++;
            }
            
            
            while(i < n1) {
                arr[k] = left[i];
                i++;
                k++;
            }
            while(j < n2) {
                arr[k] = right[j];
                j++;
                k++;
            }
        }
    }
    
    printf("Sorted array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
