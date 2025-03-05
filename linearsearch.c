#include <stdio.h>

int main()
{
    int A[] = {10, 20, 30, 30, 40, 50, 60, 70, 80, 90, 100};
    int flag = 0;
    int x;
    int n = sizeof(A) / sizeof(A[0]);

    printf("Enter the number to search: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (A[i] == x)
        {
            printf("Element found at index: %d\n", i);
            flag++;
        }
    }
    if (flag == 0)
    {
        printf("Element not found");
    }
}
