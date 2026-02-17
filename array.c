/*
Array Example
Real-life applications:
- Photoshop / image editing (pixels stored as arrays)
- Game leaderboards (scores stored in arrays for fast ranking)
Reason: Arrays allow random access to elements by index
*/

#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Array elements: ");
    for(int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}

