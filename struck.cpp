#include <iostream>
#include <string>

using namespace std;

struct AlamatType
{
    char Jalan[15];
    char Nomor[3];
    char Kelurahan[15];
    char Kecamatan[15];
    char kabupaten[15];
};

struct mahasiswatype
{
    char Nama[20];
    char Nim[10];
    char Prodi[30];
    AlamatType Alamat;
};

int main(){
    mahasiswatype Mahasiswa[10];

    for(int i=0; i<10; i++){
        cout << "Nama : ";
        cin >> Mahasiswa[i].Nama;
        cout << "Nim : ";
        cin >> Mahasiswa[i].Nim;
        cout << "Program studi : ";
        cin >> Mahasiswa[i].Prodi;
        cout << "Jalan : ";
        cin >> Mahasiswa[i].Alamat.Jalan;
        cout << "Nomor rumah : ";
        cin >> Mahasiswa[i].Alamat.Nomor;
        cout << "Kelurahan : ";
        cin >> Mahasiswa[i].Alamat.Kelurahan;
        cout << "Kecamatan : ";
        cin >> Mahasiswa[i].Alamat.Kecamatan;
        cout << "Kabupaten : ";
        cin >> Mahasiswa[i].Alamat.kabupaten;
    }

    return 0;
}
