#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private:
    int nim;
    string nama;
public:
    Mahasiswa(){
    };
    Mahasiswa(int a){
        nim = a;
    };
    Mahasiswa(string b){
        nama = b;
    };
    Mahasiswa(int inim, string inama){
        nim=inim;
        nama=inama;
    };
    void cetak();
};


void Mahasiswa::cetak(){
    cout<<endl <<"Nim=" <<nim <<endl;
    cout<<endl <<"Nama=" <<nama <<endl;

}


int main(){
    Mahasiswa mhs1;
    Mahasiswa mhs2(20);
    Mahasiswa mhs3("Andi Kurniawan");
    Mahasiswa mhs4(30,"Joko Purbo");

    mhs1.cetak();
    mhs2.cetak();
    mhs3.cetak();
    mhs4.cetak();


    system("pause");
    return 0;

}