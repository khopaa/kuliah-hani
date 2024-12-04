//nama : hanifah khoirurizkyah pertiwi abidin
//kelas : 01sifp001
//nim : 231011750341

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

struct Student {
    string name;
    float utsScore;
    float uasScore;
    float finalScore;
    char grade;
};

// Function to calculate final score
float calculateFinalScore(float uts, float uas) {
    return (uas * 0.4) + (uts * 0.6);
}

// Function to determine grade
char determineGrade(float finalScore) {
    if (finalScore >= 80) return 'A';
    else if (finalScore >= 70) return 'B';
    else if (finalScore >= 56) return 'C';
    else if (finalScore >= 47) return 'D';
    else return 'E';
}

int main() {
    int numStudents;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> numStudents;

    vector<Student> students(numStudents);

    // Input data
    for (int i = 0; i < numStudents; i++) {
        cout << "\nMahasiswa ke-" << i+1 << ":\n";
        cout << "Nama: ";
        cin.ignore();
        getline(cin, students[i].name);
        cout << "Nilai UTS: ";
        cin >> students[i].utsScore;
        cout << "Nilai UAS: ";
        cin >> students[i].uasScore;

        students[i].finalScore = calculateFinalScore(students[i].utsScore, students[i].uasScore);
        students[i].grade = determineGrade(students[i].finalScore);
    }

    // Display results
    cout << "\nDaftar Nilai Mata Kuliah C++\n";
    cout << setfill('-') << setw(70) << "-" << endl;
    cout << setfill(' ');
    cout << left << setw(5) << "No" << setw(20) << "Nama Mahasiswa" 
         << setw(10) << "UTS" << setw(10) << "UAS" 
         << setw(15) << "Nilai Akhir" << "Nilai Huruf" << endl;
    cout << setfill('-') << setw(70) << "-" << endl;
    cout << setfill(' ');

    for (int i = 0; i < numStudents; i++) {
        cout << left << setw(5) << i+1 
             << setw(20) << students[i].name
             << setw(10) << fixed << setprecision(2) << students[i].utsScore
             << setw(10) << students[i].uasScore
             << setw(15) << students[i].finalScore
             << students[i].grade << endl;
    }

    cout << setfill('-') << setw(70) << "-" << endl;

    return 0; 
}
