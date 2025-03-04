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
        case 1:
            if (rear == n - 1)
            {
                printf("Queue overflow\n");
            }
            else
            {
                if (front == -1)
                {

                    front = 0;
                }
                printf("Enter number to enqueue: \n");
                scanf("%d", &value);
                arr[++rear] = value;
            }
            break;

        case 2:
            if (front == -1 || front > rear)
            {
                printf("Queue underflow\n");
            }
            else
            {
                printf("Dequeued: %d\n", arr[front++]);
                if (front > rear)
                {
                    // Reset the queue if it's empty
                    front = rear = -1;
                }
            }
            break;

        case 3:
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

        case 4:
            printf("EXITING...\n");
            return 0;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
}
