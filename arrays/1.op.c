#include <stdio.h>
#include <stdlib.h>

void push(int *arr, int *size, int value, int capacity) {
    if (*size < capacity) {
        arr[*size] = value;
        (*size)++;
        printf("Pushed %d onto the stack.\n", value);
    } else {
        printf("Stack overflow. Cannot push %d onto the stack.\n", value);
    }
}

void pop(int *arr, int *size) {
    if (*size > 0) {
        int poppedValue = arr[--(*size)];
        printf("Popped %d from the stack.\n", poppedValue);
    } else {
        printf("Stack underflow. Cannot pop from the stack.\n");
    }
}

void search(int *arr, int size, int value) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            printf("%d found at position %d.\n", value, i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("%d not found in the stack.\n", value);
    }
}

int main() {
    int capacity = 50;
    int arr[capacity];
    int size = 0;

    printf("Enter the initial size of the stack: ");
    scanf("%d", &size);

    if (size > capacity) {
        printf("Initial size exceeds stack capacity. Setting size to %d.\n", capacity);
        size = capacity;
    }

    printf("Enter the elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int ch;
    do {
        printf("Enter the operation\n1. Push\n2. Pop\n3. Search\n4. Exit\n");
        int choice;
        scanf("%d", &choice);

        if (choice == 1) {
            int value;
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(arr, &size, value, capacity);
        } else if (choice == 2) {
            pop(arr, &size);
        } else if (choice == 3) {
            int value;
            printf("Enter value to search: ");
            scanf("%d", &value);
            search(arr, size, value);
        } else if (choice == 4) {
            ch = 0;
        } else {
            printf("Invalid choice. Please try again.\n");
            ch = 1;
        }
    } while (ch != 0);

    return 0;
}
