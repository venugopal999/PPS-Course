
// Program to implement Binary Search Technique
// Objective: To demonstrate Binary Search Technique
// Author: Venu Goapl


#include <stdio.h>
int main() {
    int arr[50], n, i, key, low, high, mid;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements in sorted order:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    int found = 0;
    while(low <= high) {
        mid = (low + high) / 2;
        if(arr[mid] == key) {
            found = 1;
            break;
        }
        else if(key > arr[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if(found)
        printf("Element found at position %d", mid + 1);
    else
        printf("Element not found");

    return 0;
}

