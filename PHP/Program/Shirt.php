<!-- /*
    Saya Daffa Fakhry Anshori dengan NIM 2200337 mengerjakan soal Latihan 2 
    dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
    maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
*/ -->

<?php

// Import file class Clothing
require('Clothing.php');

// Deklarasi kelas Shirt inheritance dengan kelas Clothing
// kelas Product <- kelas Clothing <- kelas Shirt
class Shirt extends Clothing {
    // Atribut private
    // Inisialisasi dengan string kosong
    private $color = "";       // Warna baju
    private $sleeve_type = ""; // Tipe lengan baju
    private $foto = "";        // Foto baju

    /* Konstruktor */

    // Konstruktor dengan parameter
    public function __construct($idProduct, $name, $brand, $price, $size, $material, $gender, $color, $sleeve_type, $foto) {
        // Panggil konstruktor kelas induk (Clothing) dengan menggunakan parent::__construct()
        parent::__construct($idProduct, $name, $brand, $price, $size, $material, $gender);
        
        // Set nilai atribut color, sleeve_type dan foto
        $this->color = $color;
        $this->sleeve_type = $sleeve_type;
        $this->foto = $foto;
    }

    /* Getter & Setter */

    // Mengatur nilai Warna baju
    public function setColor($color) {
        $this->color = $color;
    }
    // Mendapatkan nilai Warna baju
    public function getColor() {
        return $this->color;
    }

    // Mengatur nilai Tipe lengan baju
    public function setSleeveType($sleeve_type) {
        $this->sleeve_type = $sleeve_type;
    }
    // Mendapatkan nilai Tipe lengan baju
    public function getSleeveType() {
        return $this->sleeve_type;
    }

    // Mengatur nilai Foto baju
    public function setFoto($foto) {
        $this->foto = $foto;
    }
    // Mendapatkan nilai Foto baju
    public function getFoto() {
        return $this->foto;
    }

    // Method untuk menampilkan daftar data baju
    public function daftarBaju() {
        echo "<tr>";
        // Menggunakan getter dari kelas Product
        echo "<td>{$this->getIdProduct()}</td>";    // Ambil nilai ID produk dari kelas Product
        echo "<td>{$this->getName()}</td>";         // Ambil nilai Nama produk dari kelas Product
        echo "<td>{$this->getBrand()}</td>";        // Ambil nilai Merk produk dari kelas Product
        echo "<td>{$this->getPrice()}</td>";        // Ambil nilai Harga produk dari kelas Product
        // Menggunakan getter dari kelas Clothing
        echo "<td>{$this->getSize()}</td>";         // Ambil nilai Ukuran pakaian dari kelas Clothing
        echo "<td>{$this->getMaterial()}</td>";     // Ambil nilai Bahan pakaian dari kelas Clothing
        echo "<td>{$this->getGender()}</td>";       // Ambil nilai Jenis kelamin sesuai pakaian dari kelas Clothing
        // Menggunakan atribut langsung dalam kelas Shirt
        echo "<td>{$this->color}</td>";             // Ambil nilai Warna baju dari kelas Shirt
        echo "<td>{$this->sleeve_type}</td>";       // Ambil nilai Tipe lengan baju dari kelas Shirt
        echo "<td><img src='{$this->foto}' height='50' width='50' ></td>";  // Ambil nilai Foto baju dari kelas Shirt
        echo "</tr>";
    }

    /* Destruktor */

    public function __destruct() {

    }
}

?>
