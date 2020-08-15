#include <algorithm>
#include <cstdio>
using namespace std;

void bubble(int A[], int n)
{
    int i, j;
    for (i = n - 1; i > 0; --i) {
        bool flag = false;
        for (j = 1; j <= i; ++j)
            if (A[j - 1] > A[j]) {
                swap(A[j - 1], A[j]);
                flag = true;
            }
        if (flag == false)
            break;
    }
}

int main(int argc, char* argv[])
{
    int A[] = { 3, 5, 2, 4, 1, 9, 6, 0, 7, 8 };
    bubble(A, sizeof(A) / sizeof(int));
    for (const auto x : A)
        printf("%d ", x);
    return 0;
}
