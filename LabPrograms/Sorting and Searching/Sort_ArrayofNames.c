
// C program that sorts a given array of names.
// Objective: Demonstrate to sorts a given array of names.
// Author: Venu Goapl


#include <stdio.h>
#include <string.h>
int main() {
    int n;
    printf("Enter number of names: ");
    scanf("%d", &n);
    char names[100][100];
    char *ptr[100];   
    printf("Enter %d names:\n", n);
    for (int i = 0;i < n;i++) {
        scanf("%s", names[i]); 
        ptr[i] = names[i];   
    }    // Sorting logic (Bubble Sort)
    char *temp;
    for (int i = 0;i < n - 1;i++) {
        for (int j = 0;j < n-1-i;j++) {
			if (strcmp(names[j], names[j+1]) > 0) {
				temp = ptr[j]);
         		ptr[j] = ptr[j+1]);
				ptr[j+1] = temp;
            }
        }
    }

    printf("\nSorted names:\n");
    for (int i = 0;i < n;i++) {
        printf("%s\n", ptr[i]);
    }

    return 0;
}
