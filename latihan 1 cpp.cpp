//Latihan IF algoritma pemrograman
//Nama : ...
//NIM : ...
//Kode Kelas : ...

#include<iostream>

using namespace std;

main()
{ 
  int umur ; //variable
  cout <<"masukkan umur :" ;
  cin >> umur;

  if (umur <=18) {

    if (umur <=15) {
        cout << "Umur anak-anak";
    }else
    {
        cout << "Masih BOCIL";
    }else
  {
    cout << "Remaja" << endl; }
  }
  