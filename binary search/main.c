#include <stdio.h>
#include <stdlib.h>
int binary_search (int a[], int target, int n)
{
    int first = 0, last = n - 1, mid;
    while(first <= last)   /* more to search */
    {
        mid = (first + last)/2;
        if(target == a[mid])
            return mid; /* target found */
        else if(target < a[mid])
            last = mid - 1;
        else
            first = mid + 1;
    }
    return -1; /* target not found */
}

int main()
{
    int a[]={1,2,3,4,5,6};

    int target;
    printf("Enter the value you want to find: ");
    scanf("%d", &target);

    int n = sizeof(a) / sizeof (a[0]);

    int result = binary_search (a, target, n);

    (result == -1)? printf("Element Not found!") : printf("Element found at index %d", result);

    return 0;
}
