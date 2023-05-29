#include <iostream>

using namespace std;

const int MAX = 100;

int main(){
    int n;
    int cost[MAX][MAX];
    int sumCost[MAX];
    int temp;
    int value;
    int x = 0;

    cout <<"Masukkan jumlah kota : ";
    cin >> n;

    cout <<"---Nilai cost matrix---"<<endl;

    for (int i = 0; i < n;i++){
        cout <<"Cost element matriks ke - "<<i+1<<endl;
        for (int j = 0; j < n; j++){
            cin >> cost[i][j];
        }
    }

    cout <<"Cost List : "<<endl;

    for (int i = 0; i<n ;i++){
        for (int j = 0; j<n ; j++){
            cout << cost [j][i]<<"   ";
        }
        cout <<endl;
    }

    cout <<"Jalur terpendek adalah : ";

    for (int i = 0; i<n;i++){
        for(int j = 0; j < n; j++){
            sumCost[i]= sumCost[i] + cost[i][j] ;
        }
    }
    cout <<endl;

    for (int i = 0;i<n;i++){
        value = 0;
        for (int j = 0; j<n; j++){
            if (sumCost[i] > sumCost[j]){
                value++;
            }
        }
        if (value == x){
            if (x < n-1){
                cout <<i+1<<" ---> ";
            } else {
                cout <<i+1<<endl;
            }
            x = x+1;
            i = -1;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j<n-1-i;j++){
            temp = sumCost[j];
            sumCost[j] = sumCost[j+1];
            sumCost[j+1] = temp;
        }
    }

    cout <<"Minimum Cost : "<<sumCost[0]<<endl;
    return 0;

}
