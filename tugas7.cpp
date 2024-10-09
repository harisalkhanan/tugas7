#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];

    cout << "Masukkan " << n << " angka:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    cout << "Nilai tertinggi dalam array adalah: " << maxVal << endl;

    int searchVal;
    cout << "Masukkan angka yang ingin diperiksa: ";
    cin >> searchVal;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == searchVal) {
            cout << "Angka " << searchVal << " ditemukan di indeks ke-" << i << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Angka " << searchVal << " tidak ditemukan dalam array." << endl;
    }

    return 0;
}
