#include <algorithm>
#include <cstdio>
using namespace std;

void selectSort(int A[], int n)
{
    int i, j, min;
    for (i = 0; i < n; ++i) {
        min = i;
        for (j = i + 1; j < n; ++j)
            if (A[j] < A[min])
                min = j;
        swap(A[i], A[min]);
    }
}

int main(int argc, char* argv[])
{
    int A[] = { 1, 8, 7, 0, 5, 4, 6, 3 };
    selectSort(A, 8);
    for (const auto x : A)
        printf("%d ", x);
    return 0;
}
