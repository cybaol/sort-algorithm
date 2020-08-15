#include <cstdio>
using namespace std;

int Partion(int A[], int low, int high)
{
    int pivot = A[low];
    while (low < high) {
        while (low < high && A[high] > pivot)
            --high;
        A[low] = A[high];
        while (low < high && A[low] < pivot)
            ++low;
        A[high] = A[low];
    }
    A[low] = pivot;
    return low;
}

void quickSort(int A[], int low, int high)
{
    if (low < high) {
        int pivotpos = Partion(A, low, high);
        quickSort(A, low, pivotpos - 1);
        quickSort(A, pivotpos + 1, high);
    }
}

int main(int argc, char* argv[])
{
    int A[] = { 1, 3, 6, 5, 8, 0, 7 };
    int len = sizeof(A) / sizeof(int);
    quickSort(A, 0, len - 1);
    for (const auto x : A)
        printf("%d ", x);
    return 0;
}
