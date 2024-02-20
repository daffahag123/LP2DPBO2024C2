/* 
    Saya Daffa Fakhry Anshori dengan NIM 2200337 mengerjakan soal Latihan 2 
    dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
    maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
*/

// Deklarasi kelas Clothing inheritance dengan kelas Product
// kelas Product <- kelas Clothing
public class Clothing extends Product {
    // Atribut private
    private String size;        // Ukuran pakaian
    private String material;    // Bahan pakaian
    private String gender;      // Jenis kelamin yang sesuai dengan pakaian (Male/Female)

    /* Konstruktor */

    // Konstruktor default
    public Clothing() {
        this.size = "";         // Inisialisasi Ukuran pakaian dengan string kosong
        this.material = "";     // Inisialisasi Bahan pakaian dengan string kosong
        this.gender = "";       // Inisialisasi Jenis kelamin yang sesuai dengan pakaian dengan string kosong
    }

    /* Getter & Setter */

    // Mengatur nilai Ukuran pakaian
    public void setSize(String size) {
        this.size = size;
    }
    // Mendapatkan nilai Ukuran pakaian
    public String getSize() {
        return this.size;
    }

    // Mengatur nilai Bahan pakaian
    public void setMaterial(String material) {
        this.material = material;
    }
    // Mendapatkan nilai Bahan pakaian
    public String getMaterial() {
        return this.material;
    }

    // Mengatur nilai Jenis kelamin yang sesuai dengan pakaian
    public void setGender(String gender) {
        this.gender = gender;
    }
    // Mendapatkan nilai Jenis kelamin yang sesuai dengan pakaian
    public String getGender() {
        return this.gender;
    }


}
