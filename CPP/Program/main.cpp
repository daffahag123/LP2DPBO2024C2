/* 
    Saya Daffa Fakhry Anshori dengan NIM 2200337 mengerjakan soal Latihan 2 
    dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
    maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
*/

// Import Library dan File 
#include <bits/stdc++.h>
#include "Shirt.cpp"
#include "Tabel.cpp"

// Menggunakan namespace standar
using namespace std;

int main() {
    // Inisialisasi list
    list<Shirt> listShirt; 

    // Deklarasi atribut
    int i = 0, n = 0;
    string idProduct, name, brand, price;   // Untuk inputan atribut product
    string size, material, gender;          // Untuk inputan atribut clothing
    string color, sleeve_type;              // Untuk inputan atribut shirt

    // Input banyaknya data baju
    cout << "Tambah baju yang ingin ditampilkan: ";
    cin >> n;
    cin.ignore();   // Membersihkan newline karakter angka
    cout << endl;   // Membuat newline

    // Perulangan mengisi objek
    for(i = 0; i < n; i++) {
        // Instansiasi objek baju
        Shirt baju;

        // Menampilkan tabel untuk memasukkan data
        cout << "============================" << endl;
        cout << "| Masukkan data baju ke: " << (i+1) << " |" << endl;
        cout << "============================" << endl;
        // Meminta user untuk memasukkan ID baju
        cout << "- ID Product  : ";
        getline(cin, idProduct);
        // Meminta user untuk memasukkan Nama baju
        cout << "- Name        : ";
        getline(cin, name);
        // Meminta user untuk memasukkan Merk baju
        cout << "- Brand       : ";
        getline(cin, brand);
        // Meminta user untuk memasukkan Harga baju
        cout << "- Price       : ";
        getline(cin, price);
        // Meminta user untuk memasukkan Ukuran baju
        cout << "- Size        : ";
        getline(cin, size);
        // Meminta user untuk memasukkan Bahan baju
        cout << "- Material    : ";
        getline(cin, material);
        // Meminta user untuk memasukkan Jenis kelamin yang sesuai dengan baju
        cout << "- Gender      : ";
        getline(cin, gender);
        // Meminta user untuk memasukkan Warna baju
        cout << "- Color       : ";
        getline(cin, color);
        // Meminta user untuk memasukkan Tipe lengan baju
        cout << "- Sleeve Type : ";
        getline(cin, sleeve_type);
        cout << "============================" << endl;

        // Mengatur nilai atribut inputan data baju ke dalam objek Shirt
        baju.setIdProduct(idProduct);
        baju.setName(name);
        baju.setBrand(brand);
        baju.setPrice(price);
        baju.setSize(size);
        baju.setMaterial(material);
        baju.setGender(gender);
        baju.setColor(color);
        baju.setSleeveType(sleeve_type);

        // Menambahkan nilai objek ke dalam list
        listShirt.push_back(baju);

    }

    // Output
    // Jika masukan banyaknya baju yg ditampilkan angka > 0
    if(n > 0) {
        cout << endl;
        cout << "============================" << endl;
        cout << "|         DATA BAJU        |" << endl;
        cout << "============================" << endl;
    // Jika masukan banyaknya baju yg ditampilkan angka <= 0 
    } else {
        cout << "==========================" << endl;
        cout << "|       DATA KOSONG      |" << endl;
        cout << "==========================" << endl;
    }

    // Instansiasi objek tabel
    Tabel tab;
    tab.setBaris(listShirt.size()+1);   // Mengisi nilai baris tabel
    tab.setKolom(9);                    // Mengisi nilai kolom tabel

    // Deklarasi array dua dimensi untuk menyimpan list data Shirt
    string arrStr[listShirt.size()+1][9];

    // Isi array pertama dengan judul pada setiap kolom
    arrStr[0][0] = "ID Product"; 
    arrStr[0][1] = "Name";
    arrStr[0][2] = "Brand";
    arrStr[0][3] = "Price"; 
    arrStr[0][4] = "Size"; 
    arrStr[0][5] = "Material"; 
    arrStr[0][6] = "Gender"; 
    arrStr[0][7] = "Color"; 
    arrStr[0][8] = "Sleeve Type"; 

    // Inisialisasi indeks dalam arrayStr diset 0
    i = 0;
    // Melakukan pengisian pada setiap elemen array dari list Shirt
    for(list<Shirt>::iterator it = listShirt.begin(); it != listShirt.end(); it++) {
        arrStr[i+1][0] =  it->getIdProduct();
        arrStr[i+1][1] =  it->getName();
        arrStr[i+1][2] =  it->getBrand();
        arrStr[i+1][3] =  it->getPrice();
        arrStr[i+1][4] =  it->getSize();
        arrStr[i+1][5] =  it->getMaterial();
        arrStr[i+1][6] =  it->getGender();
        arrStr[i+1][7] =  it->getColor();
        arrStr[i+1][8] =  it->getSleeveType();
        // Iterasi indeks array
        i++;
    }

    // Menampilkan data Shirt
    tab.buatTabel(arrStr, tab.getBaris(), tab.getKolom());
    cout << endl;

};