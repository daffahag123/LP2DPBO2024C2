/* 
    Saya Daffa Fakhry Anshori dengan NIM 2200337 mengerjakan soal Latihan 2 
    dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
    maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
*/

// Deklarasi kelas Shirt inheritance dengan kelas Clothing
// kelas Product <- kelas Clothing <- kelas Shirt
public class Shirt extends Clothing {
    // Atribut private
    private String color;       // Warna baju
    private String sleeve_type; // Tipe lengan baju

    /* Konstruktor */

    // Konstruktor default
    public Shirt() {
        this.color = "";        // Inisialisasi Warna baju dengan string kosong
        this.sleeve_type = "";  // Inisialisasi Tipe lengan baju dengan string kosong
    }

    /* Getter & Setter */

    // Mengatur warna baju
    public void setColor(String color) {
        this.color = color;
    }
    // Mendapatkan warna baju
    public String getColor() {
        return this.color;
    }

    // Mengatur Tipe lengan baju
    public void setSleeveType(String sleeve_type) {
        this.sleeve_type = sleeve_type;
    }
    // Mendapatkan Tipe lengan baju
    public String getSleeveType() {
        return this.sleeve_type;
    }
}
