#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    int arr[n];
    int choice, value, top = -1;

    for(;;){
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (top == n - 1) {
                    printf("Stack overflow\n");
                } else {
                    printf("Enter number to push: \n");
                    scanf("%d", &value);
                    arr[++top] = value;
                }
                break;

            case 2:
                if (top == -1) {
                    printf("Stack underflow\n");
                } else {
                    printf("Popped: %d\n", arr[top--]);
                }
                break;

            case 3:
                if (top == -1) {
                    printf("Stack underflow\n");
                } else {
                    printf("Displaying the stack:\n");
                    for (int i = 0; i <= top; i++) {
                        printf("%d\n", arr[i]);
                    }
                }
                break;

            case 4:
                printf("EXITING...\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}
