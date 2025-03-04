#include <stdio.h>

int main()
{
    int A[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int left, right, mid, x;
    int n = sizeof(A) / sizeof(A[0]);

    printf("Enter the number to search: ");
    scanf("%d", &x);

    for (left = 0, right = n - 1; left <= right;)
    {
        mid = (left + right) / 2;

        if (A[mid] == x)
        {
            printf("Element found at index: %d\n", mid);
            return 0;
        }

        if (A[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    printf("Element not found\n");
    return 1;
}
