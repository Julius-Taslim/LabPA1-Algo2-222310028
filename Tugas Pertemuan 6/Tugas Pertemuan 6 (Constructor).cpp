#include <iostream>
using namespace std;

class contoh {
    private:
    int nilai;

    public:
    contoh (int n) {        //Constructor, otomatis dilaksakan ketika sebuah objek dari class "contoh" dibuat.
        nilai = n;
    }

    int getNum () {         //Getter pada class, untuk mengambil nilai pada class ke dalam fungsi main
        return nilai;
    }
};

int main(){
    contoh obj(10); //Memasukkan nilai 10 kedalam variable nilai dalam class contoh dengan nama object "obj"
    cout <<"Nilai yang diinput adalah : "<<obj.getNum()<<endl; //Memanggil nilai pada class menggunakan get
    return 0;
}

/*Program diatas menggunakan Constructor untuk memasukkan nilai pada baris ke 19
kedalam variable nilai dalam class dengan objek bernama "obj".*/