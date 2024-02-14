#include <iostream>
using namespace std;

const int MAX_SIZE = 3;

void tumpukData(int data[], int *jumlahData) {
    for (int i = 0; i < MAX_SIZE; ++i) {
        cout << "Masukkan bilangan ke-" << i + 1 << ": ";
        cin >> data[i];
        if (data[i] != 0) {
            (*jumlahData)++;
        } else {
            break;
        }
    }
}

void tampilkanData(int data[], int jumlahData) {
    cout << "Data yang dimasukkan: ";
    for (int i = 0; i < jumlahData; ++i) {
        cout << data[i] << " ";
    }
    cout << endl;
}

void ambilData(int data[], int *jumlahData) {
    int pilihan;
    for (int i = 0; i < 5; ++i) {
        cout << "Masukkan pilihan (0 = tidak ambil, 1 = ambil): ";
        cin >> pilihan;
        if (pilihan == 0) {
            break;
        } else if (pilihan == 1 && (*jumlahData) > 0) {
            (*jumlahData)--;
            data[(*jumlahData)] = 0;
            tampilkanData(data, *jumlahData);
        } else {
            cout << "Data kosong atau pilihan tidak valid!" << endl;
        }
    }
}

int main() {
    int data[MAX_SIZE] = {0};
    int jumlahData = 0;

    tumpukData(data, &jumlahData);
    tampilkanData(data, jumlahData);
    ambilData(data, &jumlahData);

    return 0;
}
