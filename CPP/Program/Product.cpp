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

// Deklarasi kelas Product
class Product {
    // Atribut private
    private:
        string idProduct;   // ID produk
        string name;        // Nama produk
        string brand;       // Merk produk
        string price;       // Harga produk

    public:
        /* Konstruktor */

        // Konstruktor default 
        Product() {
            // Inisialisasi dengan string kosong
        }

        /* Getter & Setter */

        // Mengatur nilai ID produk
        void setIdProduct(string idProduct) {
            this->idProduct = idProduct;
        }
        // Mendapatkan nilai ID produk
        string getIdProduct() {
            return this->idProduct;
        }

        // Mengatur nilai Nama produk
        void setName(string name) {
            this->name = name;
        }
        // Mendapatkan nilai Nama produk
        string getName() {
            return this->name;
        }

        // Mengatur nilai Merk produk
        void setBrand(string brand) {
            this->brand = brand;
        }
        // Mendapatkan nilai Merk produk
        string getBrand() {
            return this->brand;
        }

        // Mengatur nilai Harga produk
        void setPrice(string price) {
            this->price = price;
        }
        // Mendapatkan nilai Harga produk
        string getPrice() {
            return this->price;
        }

        /* Destruktor */

        ~Product() {

        }

};
