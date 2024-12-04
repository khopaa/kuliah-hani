//Latihan IF algoritma pemrograman
//Nama : ...
//NIM : ...
//Kode Kelas : ...

#include<iostream>

using namespace std;

main()
{ 
  int hari ;
  cout <<"Masukkan Nama :";
  cin >> hari ;

  switch (hari)
  {
  case 1:
    cout << "hari senin";
    break;
  
  case 2:
    cout << "hari selasa";
    break;
  
  default:
    cout << "tidak ada nama hari";
    break;
  }
}