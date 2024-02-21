/* 
    Saya Daffa Fakhry Anshori dengan NIM 2200337 mengerjakan soal Latihan 2 
    dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
    maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
*/

// Import Library
#include <iostream>
#include <string>
#include "Product.cpp"

// Menggunakan namespace standar
using namespace std;

// Deklarasi kelas Clothing inheritance dengan kelas Product
// kelas Product <- kelas Clothing
class Clothing : public Product {
    // Atribut private
    private:
        string size;        // Ukuran pakaian
        string material;    // Bahan pakaian
        string gender;      // Jenis kelamin yang sesuai dengan pakaian (Male/Female)

    public:
        /* Konstruktor */

        // Konstruktor default
        Clothing() {
            // Inisialisasi dengan string kosong
        }

        /* Getter & Setter */

        // Mengatur nilai Ukuran pakaian
        void setSize(string size) {
            this->size = size;
        }
        // Mendapatkan nilai Ukuran pakaian
        string getSize() {
            return this->size;
        }

        // Mengatur nilai Bahan pakaian
        void setMaterial(string material) {
            this->material = material;
        }
        // Mendapatkan nilai Bahan pakaian
        string getMaterial() {
            return this->material;
        }

        // Mengatur nilai Jenis kelamin yang sesuai dengan pakaian
        void setGender(string gender) {
            this->gender = gender;
        }
        // Mendapatkan nilai Jenis kelamin yang sesuai dengan pakaian
        string getGender() {
            return this->gender;
        }

        /* Destruktor */

        ~Clothing() {

        }
};
