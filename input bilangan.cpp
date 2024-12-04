#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;

main()
{ 
  int a,b,c,d = 0;
  
  cout<<"masukkan nilai a = ";cin >> a;
  cout<<"masukkan nilai b = ";cin >> b;
  cout<<"masukkan nilai c = ";cin >> c;
 
  d = (a*b)-c / (b*a);
  
  cout<<" Nilai dari D = "<<d<<endl;
}