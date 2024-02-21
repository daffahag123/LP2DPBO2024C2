<!-- /*
    Saya Daffa Fakhry Anshori dengan NIM 2200337 mengerjakan soal Latihan 2 
    dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
    maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
*/ -->

<?php

// Import class Product 
require('Product.php');

// Deklarasi kelas Clothing inheritance dengan kelas Product
// kelas Product <- kelas Clothing
class Clothing extends Product {
    // Atribut private
    // Inisialisasi dengan string kosong
    private $size = "";        // Ukuran pakaian
    private $material = "";    // Bahan pakaian
    private $gender = "";      // Jenis kelamin yang sesuai dengan pakaian (Male/Female)

    /* Konstruktor */

    // Konstruktor dengan parameter
    public function __construct($idProduct, $name, $brand, $price, $size, $material, $gender) {
        // Panggil konstruktor kelas induk (Product) dengan menggunakan parent::__construct()
        parent::__construct($idProduct, $name, $brand, $price);
        
        // Set nilai atribut size, material dan gender
        $this->size = $size;
        $this->material = $material;
        $this->gender = $gender;
    }

    /* Getter & Setter */

    // Mengatur nilai Ukuran pakaian
    public function setSize($size) {
        $this->size = $size;
    }
    // Mendapatkan nilai Ukuran pakaian
    public function getSize() {
        return $this->size;
    }

    // Mengatur nilai Bahan pakaian
    public function setMaterial($material) {
        $this->material = $material;
    }
    // Mendapatkan nilai Bahan pakaian
    public function getMaterial() {
        return $this->material;
    }

    // Mengatur nilai Jenis kelamin yang sesuai dengan pakaian
    public function setGender($gender) {
        $this->gender = $gender;
    }
    // Mendapatkan nilai Jenis kelamin yang sesuai dengan pakaian
    public function getGender() {
        return $this->gender;
    }

    /* Destruktor */

    public function __destruct() {

    }
}

?>
