/* 
    Saya Daffa Fakhry Anshori dengan NIM 2200337 mengerjakan soal Latihan 2 
    dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
    maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
*/

// Deklarasi kelas
public class Product {
    // Atribut private
    private String idProduct;   // ID produk
    private String name;        // Nama produk
    private String brand;       // Merk produk
    private String price;       // Harga produk

    /* Konstruktor */

    // Konstruktor default 
    public Product() {
        this.idProduct = "";    // Inisialisasi ID produk dengan string kosong
        this.name = "";         // Inisialisasi Nama produk dengan string kosong
        this.brand = "";        // Inisialisasi Brand produk dengan string kosong
        this.price = "";        // Inisialisasi Harga produk dengan string kosong
    }

    /* Getter & Setter */

    // Mengatur nilai ID produk
    public void setIdProduct(String idProduct) {
        this.idProduct = idProduct; 
    }
    // Mendapatkan nilai ID produk
    public String getIdProduct() {
        return this.idProduct;      
    }

    // Mengatur nilai Nama produk
    public void setName(String name) {
        this.name = name;
    }
    // Mendapatkan nilai Nama produk
    public String getName() {
        return this.name;
    }

    // Mengatur nilai Merk produk
    public void setBrand(String brand) {
        this.brand = brand;
    }
    // Mendapatkan nilai Merk produk
    public String getBrand() {
        return this.brand;
    }

    // Mengatur nilai Harga produk
    public void setPrice(String price) {
        this.price = price;
    }
    // Mendapatkan nilai Harga produk
    public String getPrice() {
        return this.price;
    }

    /* Tidak ada Destruktor */
}
