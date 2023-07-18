//Codingan berikut belum selesai/unfinished
#include <iostream>
using namespace std;

#define M 1000
#define V 6

void printResult(int dist[V], int source){
    for (int i = 0; i < V; i++){
        if (i == source-1){
            continue;
        }
        cout <<"Node "<< source <<" to node "<< i+1 <<" = "<< dist[i]<<endl;
    }
 
}
void djikstra (int matrix[V][V], int v, int source){
    int temp,m,next;
    int dist[V] = {M,M,M,M,M,M};
    int status[V] = {0,0,0,0,0,0};
    int i = source-1;
    bool done = 0;

    do {
        for (int j = 0; j < V; j++){
            temp = 0;
            if (dist[j] == M){
                dist [j] = 0;
                temp = dist[j] + matrix[i][j];
                dist [j] = temp;
            }else{
                if (dist[i] == M)
                    dist[i] = 0;
                temp = dist[i] + dist[j] + matrix[i][j];
                if (temp > dist [j]){
                    continue;
                }
                dist [j] = temp;    
            }
        }
      
        status[i] = 1;

        for (m = 0; m < V; m++){
            if (status[m] == 1){
                continue;
            } else {
                next = m;
                for (int n = 0; n < V; n++){
                    if( dist[next] > dist[n] > dist[i]){
                        next = n;
                        cout <<n;
                    }
                }
                i = next;
                break;
            }
        }

        for (m = 0; m <V ; m++){
            done = 1;
            if(status[m] == 0){
                done = 0;
                break;
            }
        }
    } while (done == 0);
    printResult(dist, source);

}
int main(){
    int matrix[V][V] = {{M,7,9,M,M,14},
                        {7,M,10,15,M,M},
                        {9,10,M,11,M,2},
                        {M,15,11,M,6,M},
                        {M,M,M,6,M,9},
                        {14,M,2,M,9,M}};
    int source = 1;
    djikstra (matrix,V,source);
    return 0;
}