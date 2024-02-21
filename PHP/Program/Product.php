<!-- /*
    Saya Daffa Fakhry Anshori dengan NIM 2200337 mengerjakan soal Latihan 2 
    dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
    maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
*/ -->

<?php

// Deklarasi kelas Product
class Product {
    // Atribut private
    // Inisialisasi dengan string kosong
    private $idProduct = "";   // ID produk
    private $name = "";        // Nama produk
    private $brand = "";       // Merk produk
    private $price = "";       // Harga produk

    /* Konstruktor */

    // Konstruktor dengan parameter
    public function __construct($idProduct, $name, $brand, $price) {
        // Set nilai atribut id, name, brand dan price
        $this->idProduct = $idProduct;
        $this->name = $name;
        $this->brand = $brand;
        $this->price = $price;
    }

    /* Getter & Setter */

    // Mengatur nilai ID produk
    public function setIdProduct($idProduct) {
        $this->idProduct = $idProduct; 
    }
    // Mendapatkan nilai ID produk
    public function getIdProduct() {
        return $this->idProduct;      
    }

    // Mengatur nilai Nama produk
    public function setName($name) {
        $this->name = $name;
    }
    // Mendapatkan nilai Nama produk
    public function getName() {
        return $this->name;
    }

    // Mengatur nilai Merk produk
    public function setBrand($brand) {
        $this->brand = $brand;
    }
    // Mendapatkan nilai Merk produk
    public function getBrand() {
        return $this->brand;
    }

    // Mengatur nilai Harga produk
    public function setPrice($price) {
        $this->price = $price;
    }
    // Mendapatkan nilai Harga produk
    public function getPrice() {
        return $this->price;
    }

    /* Destruktor */

    public function __destruct() {

    }
}

?>
