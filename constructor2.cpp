#include <iostream>
#include <string>
using namespace std;

class Mahasiswa{
private:
    static int nim;
public:
    int id;
    string nama;

    void setID();
    void printAll();

    static void setNim(int pNim) {nim = pNim; /*definisi function*/}
    static int getNim() {return nim;/*definisi function*/}

    Mahasiswa(string pnama) :nama(pnama) {setID;}
};





int main(){


}