#include <cstdio>
#include <cstdlib>
using namespace std;

int B[10] = { 0 };

void merge(int A[], int low, int mid, int high)
{
    for (int i = low; i <= high; ++i)
        B[i] = A[i];
    int i = low, j = mid + 1, k = low;
    for (; i <= mid && j <= high; ++k) {
        if (B[i] <= B[j])
            A[k] = B[i++];
        else
            A[k] = B[j++];
    }
    while (i <= mid)
        A[k++] = B[i++];
    while (j <= high)
        A[k++] = B[j++];
}

void mergeSort(int A[], int low, int high)
{
    if (low < high) {
        int mid = low + (high - low) / 2;
        mergeSort(A, low, mid);
        mergeSort(A, mid + 1, high);
        merge(A, low, mid, high);
    }
}

int main(int argc, char* argv[])
{
    int A[] = { 0, 2, 4, 1, 3, 7, 5, 6, 9, 8 };
    int len = sizeof(A) / sizeof(int);
    mergeSort(A, 0, len - 1);
    for (const auto a : A)
        printf("%d ", a);
    return 0;
}
