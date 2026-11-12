#include <iostream>
using namespace std;

int main() {
    system("cls");
    int arr[2][3][4];
    int tambah5kurang1 = 4;
    int kelipatan = 4;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            arr[0][i][j] = tambah5kurang1;
            if ((i * 4 + j) % 2 == 0) {
                tambah5kurang1 += 5;
            } else {
                tambah5kurang1 -= 1;
            }

            arr[1][i][j] = kelipatan;
            kelipatan += 4;
        }
    }

    cout << "Hasil:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << (arr[0][i][j] + arr[1][i][j]) / 2 << " ";
        }
        cout << "\n";
    }

    return 0;
}