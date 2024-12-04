// Hanifah Khoirurizkyah Pertiwi Abidin
// 231011750341
// 01SIFP001

#include <iostream>
using namespace std;

int main(){
    int matriks[3][3] = {
        {1, 3, 5},
        {5, 3, 1},
        {6, 2, 3}
    };
    //menampilkan elemen array 2 dimensi
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j <3; j++) {
           cout << matriks[i][j] << " ";
        } cout << endl;
    }
    return 0;
}