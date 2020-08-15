#include <algorithm>
#include <cstdio>
using namespace std;

void heapAdjust(int A[], int p, int n)
{
    for (int i = 2 * p; i <= n; i *= 2) {
        if (i < n && A[i] > A[i + 1])
            ++i;
        if (A[p] <= A[i])
            break;
        else {
            swap(A[p], A[i]);
            p = i;
        }
    }
}

void buildMaxHeap(int A[], int n)
{
    for (int i = n / 2; i > 0; --i) {
        heapAdjust(A, i, n);
    }
}

void heapSort(int A[], int n)
{
    buildMaxHeap(A, n);
    for (int i = n; i > 0; --i) {
        printf("%d ", A[1]);
        swap(A[1], A[i]);
        heapAdjust(A, 1, i - 1);
    }
}

int main(int argc, char* argv[])
{
    int A[] = { 0, 3, 5, 7, 1, 8, 4, 2, 6, 9 };
    heapSort(A, sizeof(A) / sizeof(int) - 1);
    return 0;
}
