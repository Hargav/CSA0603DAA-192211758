#include <stdio.h>
int main(){
    int arr[] = {38, 27, 43, 3, 9, 82, 10}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int size=1;size<=n - 1;size= 2*size) {
        for (int start = 0;start < n - 1;start += 2*size) {
            int mid = start+size - 1;
            int end = (start+2*size-1<n-1)?start+2*size-1 : n - 1;
            int n1 = mid-start + 1;
            int n2 = end - mid;
            int L[n1], R[n2];
            for (int i = 0; i < n1; i++)
                L[i] = arr[start + i];
            for (int i = 0; i < n2; i++)
                R[i] = arr[mid + 1 + i];
            int i = 0, j = 0, k = start;
            while (i < n1 && j < n2) {
                if (L[i] <= R[j]) {
                    arr[k] = L[i];
                    i++;
                } else {
                    arr[k] = R[j];
                    j++;
                }
                k++;
            }
            while (i < n1) {
                arr[k] = L[i];
                i++;
                k++;
            }
            while (j < n2) {
                arr[k] = R[j];
                j++;
                k++;
            }
        }
    }
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
