#include<stdio.h>

int main() {
    int i = 0, j, x;
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Size of array: %d\n", length);

    j = length - 1;
    while (i < j) {
        x = arr[i];
        arr[i] = arr[j];
        arr[j] = x;
        i++;
        j--;
    }
    for (i = 0; i < length; i++)
        printf("%d\n", arr[i]);

    return 0;
}
