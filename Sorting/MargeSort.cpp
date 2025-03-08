#include <iostream>
using namespace std;
void merge(int a[], int low, int mid, int high)
 {
    int i = low, j = mid + 1, k = 0;
    int temp[high - low + 1];
    while (i <= mid && j <= high) {
        if (a[i] <= a[j]) {
            temp[k] = a[i];
            i++;
        } else {
            temp[k] = a[j];
            j++;
        }
        k++;
    }
    while (i <= mid) {
        temp[k] = a[i];
        i++;
        k++;
    }
    while (j <= high) {
        temp[k] = a[j];
        j++;
        k++;
    }
    for (int p = 0; p < k; p++) {
        a[low + p] = temp[p];
    }
}

void mergesort(int a[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergesort(a, low, mid);
        mergesort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}
int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int a[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    mergesort(a, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        {
        cout << a[i] << " ";
    }

    return 0;
}
