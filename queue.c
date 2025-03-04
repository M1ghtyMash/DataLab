#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);

    int arr[n];
    int front = -1, rear = -1;
    int choice, value;

    for (;;)
    {
        printf("\nQueue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: // Enqueue
            if (rear == n - 1)
            {
                printf("Queue overflow\n");
            }
            else
            {
                if (front == -1)
                {
                    // If the queue is empty, initialize front and rear to 0
                    front = 0;
                }
                printf("Enter number to enqueue: \n");
                scanf("%d", &value);
                arr[++rear] = value; // Add the value at the rear
            }
            break;

        case 2: // Dequeue
            if (front == -1 || front > rear)
            {
                printf("Queue underflow\n");
            }
            else
            {
                printf("Dequeued: %d\n", arr[front++]); // Remove from the front
                if (front > rear)
                {
                    // Reset the queue if it's empty
                    front = rear = -1;
                }
            }
            break;

        case 3: // Display
            if (front == -1 || front > rear)
            {
                printf("Queue is empty\n");
            }
            else
            {
                printf("Displaying the queue:\n");
                for (int i = front; i <= rear; i++)
                {
                    printf("%d\n", arr[i]);
                }
            }
            break;

        case 4: // Exit
            printf("EXITING...\n");
            return 0;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
}
