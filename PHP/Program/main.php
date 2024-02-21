<!-- /*
    Saya Daffa Fakhry Anshori dengan NIM 2200337 mengerjakan soal Latihan 2 
    dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
    maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
*/ -->

<?php
    // Import file class Shirt
    require('Shirt.php');

    // Membuat & Mengisi Objek Shirt
    $baju1 = new Shirt("001", "Kemeja Flanel", "Zara", "300000", "L", "Katun", "Pria", "Putih", "Panjang", "../Foto/kemeja_flanel.jpeg");
    $baju2 = new Shirt("002", "Kaos V-Neck", "H&M", "250000", "M", "Katun", "Pria", "Hitam", "Pendek", "../Foto/v-neck.jpg");
    $baju3 = new Shirt("003", "Kaos Crop Top", "Uniqlo", "120000", "S", "Katun", "Wanita", "Pink", "Pendek", "../Foto/crop_top.jpg");

    // Memasukan nilai objek ke dalam array
    $listShirt = array();
    array_push($listShirt, $baju1);
    array_push($listShirt, $baju2);
    array_push($listShirt, $baju3);

    // Membuat Tabel
    echo "<br>";
    echo "<table border=1>";
    echo "<caption>Daftar Data Baju</caption>";
    echo "<tr>";
    echo "<th>ID Produk</th>";
    echo "<th>Nama</th>";
    echo "<th>Merk</th>";
    echo "<th>Harga</th>";
    echo "<th>Ukuran</th>";
    echo "<th>Bahan</th>";
    echo "<th>Jenis Kelamin</th>";
    echo "<th>Warna</th>";
    echo "<th>Tipe Lengan</th>";
    echo "<th>Foto</th>";
    echo "</tr>";

    // Isi Tabel
    foreach ($listShirt as $row) {
        $row->daftarBaju();
    }

?>

