#include <cstdio>
using namespace std;
void insertSort(int A[], int n)
{
    int i, j;
    for (i = 2; i < n; ++i)
        if (A[i] < A[i - 1]) {
            A[0] = A[i];
            for (j = i - 1; A[j] > A[0]; --j)
                A[j + 1] = A[j];
            A[j + 1] = A[0];
        }
}
int main(int argc, char* argv[])
{
    int A[11] = { 0, 2, 5, 7, 1, 3, 10, 9, 8, 6, 4 };
    insertSort(A, sizeof(A) / sizeof(int));
    for (int i = 1; i < 11; ++i)
        printf("%d ", A[i]);
    return 0;
}
