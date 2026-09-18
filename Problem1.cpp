#include <iostream>
using namespace std;

void solveTheLastAstronaut(int n, int k){
    if(n==0){
        cout<<"Jumlah Astronot Harus Lebih dari 0.\n";
        return;
    }


    int* astronot = new int[n];
 
    for (int i = 0; i < n; i++) {
        astronot[i] = i + 1;
    }

    int sisa_astronot = n;
    int indeks = 0;

    cout << "Urutan eliminasi: ";
    
    while (sisa_astronot > 1) {
        indeks = (indeks + k - 1) % sisa_astronot;
        
        int eliminasi = astronot[indeks];
        
        cout << eliminasi;
        if (sisa_astronot > 2) {
            cout << ", ";
        } else {
            cout << " ";
        }

        if (eliminasi % 2 == 0) {
            k += 2;
        } else {
            k -= 1;
        }

        if (k < 2) {
            k = 2;
        }

        for (int i = indeks; i < sisa_astronot - 1; i++) {
            astronot[i] = astronot[i + 1];
        }
        
        sisa_astronot--;
    }

    cout << "\nAstronot terakhir: " << astronot[0] << "\n";


    delete[] astronot;
}

int main() {
    int N, K;
    
        cout << "==== Simulasi The Last Astronaut ====\n";
        cout << "Masukkan jumlah total astronot (N) : ";
        cin >> N;
        cout << "Masukkan angka awalan (K)          : ";
        cin >> K;
    
        cout << "-------------------------------------\n";
    
    solveTheLastAstronaut(N, K);
    
    return 0;
}

 

