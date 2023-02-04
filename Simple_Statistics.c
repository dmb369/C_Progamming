#include <stdio.h> 
#include <stdlib.h>

int compareF(const void *voidA, const void *voidB) {
    int *intA = (int *)(voidA);   
    int *intB = (int *)(voidB);
    return *intA - *intB;
}

int main() {
    int i, test, nSize, kRemove;
    scanf("%d", &test);
    while(test--) {
        scanf("%d %d", &nSize, &kRemove);
        int array[nSize];
        for(i = 0; i < nSize; i++) {
            scanf("%d", &array[i]);
        }
        double sum = 0, avg;
        
        qsort(array, nSize, sizeof(float), compareF);
        for(i = kRemove; i < nSize - kRemove; i++) {
            sum += array[i];
        }
        avg = sum / (nSize - 2 * kRemove);
        printf("%.6lf\n",avg);

    }
    return 0;
}