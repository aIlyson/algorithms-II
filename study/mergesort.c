#include <stdio.h>

void Mergesort(Vetor A, int i, int j)
{
    int m;
    if (i < j)
    {
        m = (i + j - 1) / 2;
        Mergesort(A, i, m);
        Mergesort(A, m + 1, j);
        Merge(A, i, m, j);
    }
}

int main(){

}
