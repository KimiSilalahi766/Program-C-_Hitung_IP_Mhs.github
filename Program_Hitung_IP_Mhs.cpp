#include <iostream>
using namespace std;

    int main() {
    int HitungIP (char x, int y);

     cout<<"---------------------------"<<endl;
     cout<<" Program Menghitung IP  "<<endl;
     cout<<"---------------------------"<<endl;

  int jumlahMK, jumlahsks;
  float ip, nilai_mk;

      jumlahsks = 0;
      nilai_mk = 0;

  struct mahasiswa{

  float ip;
};

  struct matakuliah{
  char namaMK [30], nilai;
  int sks; 
};

    mahasiswa mhs;
    matakuliah matkul;

    cout<<" Berapa jumlah mata kuliah yang ingin dihitung: "; 
    cin>>jumlahMK;

for (int a = 0; a<jumlahMK; a++) {

    cout<<a+1;
    cout<<" Masukkan nama Mata Kuliah : ";
    cin>>matkul.namaMK;
    cout<<" Masukkan jumlah SKS: ";
    cin>>matkul.sks; cout<<" Masukkan nilai Mata Kuliah (A, B, C, D, E): ";
    cin>>matkul.nilai;
    cout<<endl;

    jumlahsks+=matkul.sks;
    ip= HitungIP (matkul.nilai, matkul.sks); 
    nilai_mk+=ip;

}

   mhs.ip = nilai_mk/jumlahsks;
     cout<<"Jumlah SKS: "<<jumlahsks<<endl;
     cout<<"Jumlah SKS x Nilai"<<nilai_mk<<endl;
     cout<<"==== ="<<endl; cout<<"IP :"<<mhs.ip<<endl<<endl;
return 0;
}

  int HitungIP (char x, int y) {
  int nilai;
switch(x) 
{

case 'A':
    nilai=4*y;
break;

case 'B':
    nilai=3*y;
break;

case 'C':
    nilai=2*y;
break;

case 'D':
    nilai=1*y;
break;

case 'E':
    nilai=0*y;
break;

default:
    nilai=0;
break;

}
return nilai;

}