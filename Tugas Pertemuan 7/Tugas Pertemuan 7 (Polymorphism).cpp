#include <iostream>
using namespace std;

class Mahasiswa {
    public :
    virtual void Data (){
        cout <<"Tidak ada data."<<endl;
    }
};

class Julius : public Mahasiswa{
    public :
    string status = "Aktif";
    string Nama = "Julius Taslim";
    int Umur = 17;
    string Fakultas = "Pariwisata dan Informatika";
    string Jurusan = "Teknologi Informasi";
    void Data (){
        cout <<"Status = "<<status<<endl;
        cout <<"Nama = "<<Nama<<endl;
        cout <<"Umur = "<<Umur<<endl;
        cout <<"Fakultas = "<<Fakultas<<endl;
        cout <<"Jurusan = "<<Jurusan<<endl;
    }
};

class Nicholas : public Mahasiswa{
    public:
    string status = "Aktif";
    string Nama = "Nicholas Tony Sukino";
    int Umur = 18;
    string Fakultas ="Pariwisata dan Informatika";
    string Jurusan = "Teknologi Informasi";
     void Data (){
        cout <<"Status = "<<status<<endl;
        cout <<"Nama = "<<Nama<<endl;
        cout <<"Umur = "<<Umur<<endl;
        cout <<"Fakultas = "<<Fakultas<<endl;
        cout <<"Jurusan = "<<Jurusan<<endl;
    }
};

int main (){
    Mahasiswa *s1 = new Julius();
    Mahasiswa *s2 = new Nicholas();

    s1 -> Data();
    cout <<"======================================="<<endl;
    s2 -> Data();

    return 0;
}