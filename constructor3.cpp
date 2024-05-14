#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private:
    int nim;
    string nama;
public:
    Mahasiswa();
    Mahasiswa(int);
    Mahasiswa(string);
    Mahasiswa(int inim, string inama);
    void cetak();

    Mahasiswa(){
    nim = 152;
    nama = "";
    }

    Mahasiswa(int iNim){
    nim = iNim;
    }


};

Mahasiswa::Mahasiswa(int iNim,string iNama){
    nim = iNim;
    nama = iNama;
}

void Mahasiswa::cetak(){
    cout<<endl <<"Nim=" <<nim <<endl;
    cout<<endl <<"Nama=" <<nama <<endl;

}


int main(){
    Mahasiswa mhs1("Lia Kurnia");
    Mahasiswa mhs2("Asroni");
    Mahasiswa mhs3("Andi Kurniawan");
    Mahasiswa mhs4("Joko Purbo");

}