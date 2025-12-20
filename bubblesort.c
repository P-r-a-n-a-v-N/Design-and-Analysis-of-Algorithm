// Bubble Sort - Pranav.N CH.SC.U4CSE24236
#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: ./program <name> <rollno>\n");
        return 1;
    }
    
    printf("Name: %s\n", argv[1]);
    printf("Roll No: %s\n", argv[2]);
    
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[100];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Bubble Sort
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    printf("Sorted array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
