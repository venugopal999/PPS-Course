
// Program implementation for Linear Search Technique
// Objective: to demonstrate Linear Search Technique
// Author: Venu Goapl


#include <stdio.h>
int linearSearch(int arr[], int length, int target) {
	int i;
    for (i = 0; i < length; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}
int main() {
    int arr[50],n,i; 
    int target, index;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    printf("Enter array elements :\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target number to search in the list of array: ");
    scanf("%d", &target);
    index = linearSearch(arr, n, target); 
    if (index != -1) {
        printf("Element %d found at index %d in the array.\n", target, index);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
    return 0;
}

