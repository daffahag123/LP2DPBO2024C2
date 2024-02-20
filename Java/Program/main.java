/* 
    Saya Daffa Fakhry Anshori dengan NIM 2200337 mengerjakan soal Latihan 2 
    dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
    maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
*/

// Import Library
import java.util.Scanner;
import java.util.ArrayList;

public class main {
    public static void main(String[] args) {
        // Inisialisasi list
        ArrayList<Shirt> listShirt = new ArrayList<>(); 

        // Deklarasi atribut
        int i = 0, n = 0;
        String idProduct, name, brand, price; 
        String size, material, gender;
        String color, sleeve_type;

        // Input harus melalui suatu objek
        Scanner sc = new Scanner(System.in);

        // Membaca inputan banyaknya baju
        System.out.print("Tambah baju yang ingin ditampilkan: ");
        try {
            // Masukan integer
            n = sc.nextInt();
            sc.nextLine();          // Membersihkan karakter newline dari buffer masukan
        } catch (Exception e) {
            // Masukan bukan integer
            System.out.println();
            System.out.println("The input is not an integer!");
            System.out.println();
        }
        System.out.println();

        // Perulangan mengisi objek
        for(i = 0; i < n; i++) {
            // Instansiasi objek baju
            Shirt baju = new Shirt();

            // Menampilkan tabel untuk memasukkan data
            System.out.println("============================");
            System.out.println("| Masukkan data baju ke: " + (i+1) + " |");
            System.out.println("============================");
            System.out.print("- ID Product  : ");
            idProduct = sc.nextLine();
            System.out.print("- Name        : ");
            name = sc.nextLine();
            System.out.print("- Brand       : ");
            brand = sc.nextLine();
            System.out.print("- Price       : ");
            price = sc.nextLine();    
            System.out.print("- Size        : ");
            size = sc.nextLine(); 
            System.out.print("- Material    : ");
            material = sc.nextLine();     
            System.out.print("- Gender      : ");
            gender = sc.nextLine();      
            System.out.print("- Color       : ");
            color = sc.nextLine(); 
            System.out.print("- Sleeve Type : ");
            sleeve_type = sc.nextLine(); 
            System.out.println("============================");         
           
            // Mengatur nilai atribut ke objek Shirt
            baju.setIdProduct(idProduct);
            baju.setName(name);
            baju.setBrand(brand);
            baju.setPrice(price);
            baju.setSize(size);
            baju.setMaterial(material);
            baju.setGender(gender);
            baju.setColor(color);
            baju.setSleeveType(sleeve_type);
       
            // Menambahkan objek Shirt ke dalam list
            listShirt.add(baju);
        }

        // Output
        System.out.println();
        System.out.println("============================");
        System.out.println("|         DATA BAJU        |");
        System.out.println("============================");
        

        // Instansiasi objek tabel
        Tabel tab = new Tabel();    
        tab.setBaris(listShirt.size()+1);   
        tab.setKolom(9);

        // Instansiasi objek array untuk menyimpan list data Shirt
        String[][] arrStr = new String[listShirt.size()+1][9];    
                    
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

        // Melakukan pengisian pada setiap elemen array dari list Shirt
        for(i = 0; i < listShirt.size(); i++) {
            arrStr[i+1][0] = "" + listShirt.get(i).getIdProduct();
            arrStr[i+1][1] = "" + listShirt.get(i).getName();
            arrStr[i+1][2] = "" + listShirt.get(i).getBrand();
            arrStr[i+1][3] = "" + listShirt.get(i).getPrice();
            arrStr[i+1][4] = "" + listShirt.get(i).getSize();
            arrStr[i+1][5] = "" + listShirt.get(i).getMaterial();
            arrStr[i+1][6] = "" + listShirt.get(i).getGender();
            arrStr[i+1][7] = "" + listShirt.get(i).getColor();
            arrStr[i+1][8] = "" + listShirt.get(i).getSleeveType();
        }

        // Menampilkan data Shirt
        tab.buatTabel(arrStr, tab.getBaris(), tab.getKolom());
        System.out.println();

        sc.close();
    }
}
