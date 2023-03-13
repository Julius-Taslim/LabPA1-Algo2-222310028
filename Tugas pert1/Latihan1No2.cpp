#include <iostream>
using namespace std;

int main(){
    int i,j,n;
    string buku[100];
    string temp;

    cout <<"Masukkan jumlah buku : ";
    cin >> n;
    
    for (i = 0; i < n; i++){
        cout <<"Masukkan nama buku ke-"<<i+1<<" : ";
        cin >> buku[i];
        cout <<endl;
    }

    for (i = 0; i < n;i++){
        for (j = 0; j < n-i-1 ; j++){
            if(buku[j] > buku [j+1]){
                temp = buku[j];
                buku[j] = buku[j+1];
                buku[j+1] = temp;
            }
        }
    }
    cout <<"Urutan Buku setelah diurutkan adalah :"<<endl;

    for (i = 0;i < n;i++){
        cout <<i+1<<". "<<buku[i]<<endl;
    }
    return 0;
}