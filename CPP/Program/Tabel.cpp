/* 
    Saya Daffa Fakhry Anshori dengan NIM 2200337 mengerjakan soal Latihan 2 
    dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
    maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
*/

// Import Library
#include <iostream>
#include <string>

// Menggunakan namespace standar
using namespace std;

class Tabel {
    private:
        int baris;  // Menyimpan jumlah baris tabel
        int kolom;  // Menyimpan jumlah kolom tabel

    public:
        // Konstruktor default
        Tabel() {

        }

        // Konstruktor dengan parameter untuk menginisialisasi baris dan kolom tabel
        Tabel(int baris, int kolom) {
            this->baris = baris;
            this->kolom = kolom;
        }

        // Metode Get & Set
        // Set jumlah baris tabel
        void setBaris(int b) {
            this->baris = b;      // Mengatur jumlah baris
        }
        // Mendapatkan jumlah baris tabel
        int getBaris() {
            return this->baris;   // Mengembalikan jumlah baris
        }

        // Set jumlah kolom tabel
        void setKolom(int k) {
            this->kolom = k;      // Mengatur jumlah kolom
        }
        // Mendapatkan jumlah kolom tabel
        int getKolom() {
            return this->kolom;   // Mengembalikan jumlah kolom
        }

        // Metode untuk membuat tabel dengan isi tertentu
        void buatTabel(string isi[][9], int baris, int kolom) {
            // Inisialisasi variabel
            int i = 0, j = 0, k = 0;

            // Mencari panjang maksimum dari setiap kolom untuk penampilan yang rapi
            int panjangMax[kolom];
            for (i = 0; i < kolom; i++) {
                panjangMax[i] = 0;
                for (j = 0; j < baris; j++) {
                    int panjangKata = isi[j][i].length();
                    if (panjangKata > panjangMax[i]) {
                        panjangMax[i] = panjangKata;
                    }
                }
            }

            // Menampilkan tabel
            for (i = 0; i < baris; i++) {
                // Membuat baris untuk bagian pembuka
                for (j = 0; j < kolom; j++) {
                    cout << "==";       // Tanda pembatas awal
                    for (k = 0; k < panjangMax[j]; k++) {
                        cout << "=";    // Karakter pembatas tambahan
                    }
                    cout << "=";        // Tanda pembatas akhir
                }
                cout << "=" << endl;    // Akhiri baris pembuka

                // Membuat baris untuk bagian isi
                for (j = 0; j < kolom; j++) {
                    cout << "| ";       // Tanda pembatas awal
                    cout << isi[i][j];  // Menampilkan isi tabel
                    for (k = 0; k < panjangMax[j] - isi[i][j].length(); k++) {
                        cout << " ";    // Menambahkan spasi untuk penampilan rapi
                    }
                    cout << " ";        // Tanda pembatas akhir
                }
                cout << "|" << endl;    // Akhiri baris isi
            }

            // Membuat baris untuk bagian penutup tabel
            for (j = 0; j < kolom; j++) {
                cout << "==";       // Tanda pembatas awal
                for (k = 0; k < panjangMax[j]; k++) {
                    cout << "=";    // Karakter pembatas tambahan
                }
                cout << "=";        // Tanda pembatas akhir
            }
            cout << "=" << endl;    // Akhiri baris penutup
        }
};