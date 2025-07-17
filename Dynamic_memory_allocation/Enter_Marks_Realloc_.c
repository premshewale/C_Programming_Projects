#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, *ptrmarks, i; 

    printf("How many marks do you want to store: "); 
    scanf("%d", &num);

    ptrmarks = (int*)calloc(num, sizeof(int));

    printf("Enter %d marks: ", num);
    for (i = 0; i < num; i++) { 
        scanf("%d", ptrmarks+i);
    }

    printf("Entered marks are:\n"); 
    for (i = 0; i < num; i++) {
        printf("%d\n", *(ptrmarks+i));
    }

    // Resize the memory block to store more marks
    int new_num;
    printf("Enter the new number of marks you want to store: ");
    scanf("%d", &new_num);

    ptrmarks = (int*)realloc(ptrmarks, new_num * sizeof(int));

    printf("Enter %d more marks: ", new_num - num);
    for (i = num; i < new_num; i++) {
        scanf("%d", ptrmarks+i);
    }

    printf("All marks are:\n"); 
    for (i = 0; i < new_num; i++) {
        printf("%d\n", *(ptrmarks+i));
    } 

    free(ptrmarks);
    return 0;
}
