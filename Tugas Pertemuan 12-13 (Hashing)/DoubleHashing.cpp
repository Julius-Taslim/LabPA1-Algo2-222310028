#include <iostream>
#include <cstdio>
#include <math.h>
#include <ctime>
using namespace std;

int storage[1024];
int i = 0;
int hdt_boundary;

int prima_atas(int n){
  if (n%2 == 0)
    n = n +1;
  else
    n = n +2;

  bool ketemu = false;

  while(!ketemu){
    bool prima = true;
    if(n%2 ==0)
      prima = false;
    else {
      int i = 3;
      while (prima == true && i <= sqrt(n)){
        if (n%i == 0)
          prima = false;
        i = i+2;
      }
    }
    if (prima)
      ketemu = true;
    else
      n = n+2;
  }
  return n;
}

int prima_bawah(){
  int n = hdt_boundary;
   if (n%2 == 0)
    n = n -1;
  else
    n = n -2;

  bool ketemu = false;

  while(!ketemu){
    bool prima = true;
    if(n%2 ==0)
      prima = false;
    else {
      int i = 3;
      while (prima == true && i <= sqrt(n)){
        if (n%i == 0)
          prima = false;
        i = i+2;
      }
    }
    if (prima)
      ketemu = true;
    else
      n = n-2;
  }
  return n;
}
void tambah_double_hashing (int n){
  int hash;
  int hash2 = prima_bawah();
  bool inserted = false;
  i =0;
  while ((!inserted) && i < hdt_boundary){
    hash = ((n%hdt_boundary)+ i*((n)% hash2 + 1))%hdt_boundary;

    if (storage[hash] == 0){
      storage [hash] = n;
      inserted = true;
    } else {
      ++i;
      cout <<"Terjadi tabrakan di "<< hash <<endl;
    }
  }

  if (i == 0){
    cout <<"Langsung"<<endl;
  }

  cout <<"Isi hash ["<<hash<<"] dengan "<<n<<endl;
  cout <<"===================================================="<<endl;
}

void cetak (int n){
  cout <<endl;
  cout <<"Output program : "<<endl;

  for (int a = 0;a < n; a++){
    cout <<"hash["<< a << "] = "<<storage[a]<<endl;
  }
}
int getRandomNumberFromRange (int min,int max){
  return min + (rand()% (max - min));
}

int main() {
  int n, random_number;
  char pilihan;
  string cara;

  srand((unsigned)time(0));

  cout <<"Masukkan jumlah data: ";
  cin >>n;
  cout <<endl <<endl<<"Proses pemasukan data ke hashtable"<<endl;

  hdt_boundary = prima_atas(n);

  for (int a = 0; a < n; ++a){
    random_number = getRandomNumberFromRange(0,n);

    cout <<"Double Hashing..."<<endl;
    tambah_double_hashing(random_number);
  }

  cetak(n);

  cout <<"Formula yang digunakan untuk double hashing adalah:"<<endl;
  cout <<"h1(k) = k mod" <<hdt_boundary<<endl;
  cout <<"h2(k) = (h1 (k) + 1*(k mod "<<prima_bawah() <<" + 1 ) ) mod"<<hdt_boundary<<endl;
}