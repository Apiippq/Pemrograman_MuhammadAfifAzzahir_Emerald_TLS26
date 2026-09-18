#include <iostream>
using namespace std;

int hitungPanjangPesan(const char* teks) {
    int panjang = 0;
    while (teks[panjang] != '\0') {
        panjang++;
    }
    return panjang;
}

void selesaikanSandiAlien(const char* pesan_asli) {
    int panjang = hitungPanjangPesan(pesan_asli);
    
    if (panjang == 0) return;

    char* pesan_sandi = new char[panjang + 1];

    pesan_sandi[0] = pesan_asli[0];

    for (int i = 1; i < panjang; i++) {
        int nilai_sebelumnya = pesan_asli[i - 1] - 'A' + 1;
        int nilai_sekarang = pesan_asli[i] - 'A' + 1;
        
        int nilai_baru = nilai_sekarang + nilai_sebelumnya;
        
        nilai_baru = ((nilai_baru - 1) % 26) + 1;
        
        pesan_sandi[i] = (char)(nilai_baru - 1 + 'A');
    }
    
    pesan_sandi[panjang] = '\0';

    cout << "Pesan sandi: " << pesan_sandi << "\n";

  
    delete[] pesan_sandi;
}

int main() {
   
    char pesan[1000];
    
    cout << "==== Program Sandi Alien-In-The-Middle ====\n";
    cout << "Masukkan pesan (huruf kapital, tanpa spasi): ";
    cin >> pesan;
    cout << "-------------------------------------------\n";
    
    selesaikanSandiAlien(pesan);
    
    return 0;
}