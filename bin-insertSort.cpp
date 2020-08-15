#include <cstdio>
using namespace std;

void bin_insertSort(int A[], int n)
{
    int i, j, low, mid, high;
    for (i = 2; i <= n; ++i) {
        A[0] = A[i];
        low = 1, high = i - 1;
        while (low <= high) {
            mid = low + (high - low) / 2;
            if (A[0] < A[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        for (j = i - 1; j > high; --j)
            A[j + 1] = A[j];
        A[high + 1] = A[0];
    }
}

int main(int argc, char* argv[])
{
    int A[10] = { 0, 4, 2, 7, 3, 8, 6, 9, 1, 5 };
    bin_insertSort(A, sizeof(A) / sizeof(int) - 1);
    for (int i = 1; i < 10; ++i)
        printf("%d ", A[i]);
    return 0;
}
