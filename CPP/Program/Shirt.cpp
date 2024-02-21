/* 
    Saya Daffa Fakhry Anshori dengan NIM 2200337 mengerjakan soal Latihan 2 
    dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
    maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
*/

// Import Library
#include <iostream>
#include <string>
#include "Clothing.cpp"

// Menggunakan namespace standar
using namespace std;

// Deklarasi kelas Shirt inheritance dengan kelas Clothing
// kelas Product <- kelas Clothing <- kelas Shirt
class Shirt : public Clothing {
    // Atribut private
    private:
        string color;       // Warna baju
        string sleeve_type; // Tipe lengan baju

    public:
        /* Konstruktor */

        // Konstruktor default
        Shirt() {
            // Inisialisasi dengan string kosong
        }

        /* Getter & Setter */

        // Mengatur nilai Warna baju
        void setColor(string color) {
            this->color = color;
        }
        // Mendapatkan nilai Warna baju
        string getColor() {
            return this->color;
        }

        // Mengatur nilai Tipe lengan baju
        void setSleeveType(string sleeve_type) {
            this->sleeve_type = sleeve_type;
        }
        // Mendapatkan nilai Tipe lengan baju
        string getSleeveType() {
            return this->sleeve_type;
        }

        /* Destruktor */
        
        ~Shirt() {

        }
};
