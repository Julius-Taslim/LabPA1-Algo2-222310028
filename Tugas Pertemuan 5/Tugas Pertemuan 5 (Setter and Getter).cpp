#include <iostream>
using namespace std;

class library {
    private:
    string buku;

    public:

    void setBuku (string s){
        buku = s;
    }

    string getBuku (){
        return buku;
    }
};

int main(){
    library Buku;
    string s;

    cout <<"Masukkan nama buku kedalam library : ";
    cin >>s;
    Buku.setBuku(s);

    cout <<"Nama buku yang dikeluarkan dari library adalah : " << Buku.getBuku() << endl;
}