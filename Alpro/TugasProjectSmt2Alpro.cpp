#include <bits/stdc++.h>
using namespace std;

// class inheritance polymorphism
// class utama
class kendaraan{
    private:                    // mung iso dinggo ning class iki tok
        string no_bpkb;
    protected:                  // mung iso dinggo ning class & derived class
        char no_reg[10];
    public:                     // iso dinggo ning kabeh tempat
        // Untuk Deskripsi
        string merk, tipe, warna, jenis_mesin, jenis_bhnbkr;
        int th_pembuatan, kap_mes, power;
        float kecepatan_max, harga;
        // Untuk Pajak
        float BBNKB, PKB, SWDKLLJ, biaya_admin, biaya_STNK, total_pajak;  

    ~kendaraan(){
        cout << "=== Program Selesai, class mobil successfully destructed ===\n";
    }
};

// anak/derived class 1
class motor : public kendaraan{
    public:
         void input_desk_motor(){                                
            cout << "##== Silahkan input deskripsi motor anda dibawah ini ==##\n";
            cout << "Merk motor: "; cin >> merk;
            cout << "Tipe motor (All Capsloclock dengan Underscore): "; cin >> tipe;
            cout << "Warna motor: "; cin >> warna;
            cout << "No Registrasi motor: "; cin >> no_reg;
            cout << "Tahun Pembuatan motor: "; cin >> th_pembuatan;
            cout << "Kecepatan Maksimal (Km/J): "; cin >> kecepatan_max;
            cout << "Jenis Mesin motor: "; cin >> jenis_mesin;
            cout << "Jenis Bahan Bakar motor: "; cin >> jenis_bhnbkr;
            cout << "Kapasitas Mesin motor (cc): "; cin >> kap_mes;
            cout << "Power Output Mesin motor (horsepower): "; cin >> power;
            cout << "harga motor (dalam ribuan rupiah/K): "; cin >> harga;
            cout << endl;
        }

        void output_desk_motor(){
            cout << "##== Deskripsi motor Anda ==##\n";
            cout << "Merk motor: " << merk << endl;
            cout << "Tipe motor (All Capsloclock): " << tipe << endl;
            cout << "Warna motor: "<< warna << endl;
            cout << "No Registrasi motor: "<< no_reg << endl;
            cout << "Tahun Pembuatan motor: "<< th_pembuatan << endl;
            cout << "Kecepatan Maksimal: "<< kecepatan_max << "Km/J\n";
            cout << "Jenis Mesin motor: "<< jenis_mesin << endl;
            cout << "Jenis Bahan Bakar motor: "<< jenis_bhnbkr << endl;
            cout << "Kapasitas Mesin motor: "<< kap_mes << "cc\n";
            cout << "Power Output Mesin motor: "<< power << "hp\n";
            cout << "harga motor (dalam ribuan rupiah/K): Rp"<< harga;
            cout << endl;
        }

        // Method untuk menghitung pajak motor
        int hitung_pjk_motor(int harga){
            // dalam ribuan rupiah (1K = 1000 rupiah)
            BBNKB = harga*0.1;      // Bea Balik Nama Kendaraan Bermotor
            PKB = harga*0.02;       // Pajak Kendaraan Bermotor
            SWDKLLJ = 35;           // Sumbangan Wajib Dana Kecelakaan Lalu Lintas Jalan 
            biaya_admin = 100;      // Biaya administrasi Tanda Nomor Kendaraan Bermotor
            biaya_STNK = 50 + 200;  // Bea administrasi dan penerbitan STNK
            total_pajak = BBNKB + PKB + SWDKLLJ + biaya_admin + biaya_STNK;

            return total_pajak;
        }

        // Method untuk mengoutputkan pajak motor yang telah dihitung
        void output_pjk_motor(){
            cout << "\n=== Rincian Penghitungan Pajak Motor ===\n";
            cout << "Biaya Bea Balik Nama Kendaraan Bermotor Yaitu: " << BBNKB << "K\n";
            cout << "Biaya Pajak Kendaraan Bermotor: " << PKB << "K\n";
            cout << "Biaya Sumbangan Wajib Dana Kecelakaan Lalu Lintas Jalan: " << SWDKLLJ << "K\n";
            cout << "Biaya Administrasi Tanda Nomor Kendaraan Bermotor: " << biaya_admin <<"K\n";
            cout << "Biaya Bea administrasi dan penerbitan STNK: " << biaya_STNK << "K\n";
            cout << "=> Total Pajak yang harus dibayar Yaitu: Rp" << total_pajak <<"K\n";
        }

        ~motor(){
            cout << "=== program selesai, class motor successfully destructed  ===\n";
        }
};

// anak/derived class 2
class mobil : public kendaraan{
    public:
        void input_desk_mobil(){                                
            cout << "##== Silahkan input deskripsi mobil anda dibawah ini ==##\n";
            cout << "Merk Mobil: "; cin >> merk;
            cout << "Tipe Mobil (All Capsloclock dengan Underscore): "; cin >> tipe;
            cout << "Warna Mobil: "; cin >> warna;
            cout << "No Registrasi Mobil: "; cin >> no_reg;
            cout << "Tahun Pembuatan Mobil: "; cin >> th_pembuatan;
            cout << "Kecepatan Maksimal (Km/J): "; cin >> kecepatan_max;
            cout << "Jenis Mesin Mobil: "; cin >> jenis_mesin;
            cout << "Jenis Bahan Bakar Mobil: "; cin >> jenis_bhnbkr;
            cout << "Kapasitas Mesin Mobil (cc): "; cin >> kap_mes;
            cout << "Power Output Mesin Mobil (horsepower): "; cin >> power;
            cout << "harga Mobil (dalam ribuan rupiah/K): "; cin >> harga;
            cout << endl;
        }

        // method untuk output deskripsi mobil 
        void output_desk_mobil(){
            cout << "##== Deskripsi Mobil Anda ==##\n";
            cout << "Merk Mobil: " << merk << endl;
            cout << "Tipe Mobil (All Capsloclock): " << tipe << endl;
            cout << "Warna Mobil: "<< warna << endl;
            cout << "No Registrasi Mobil: "<< no_reg << endl;
            cout << "Tahun Pembuatan Mobil: "<< th_pembuatan << endl;
            cout << "Kecepatan Maksimal: "<< kecepatan_max << "Km/J\n";
            cout << "Jenis Mesin Mobil: "<< jenis_mesin << endl;
            cout << "Jenis Bahan Bakar Mobil: "<< jenis_bhnbkr << endl;
            cout << "Kapasitas Mesin Mobil: "<< kap_mes << "cc\n";
            cout << "Power Output Mesin Mobil: "<< power << "hp\n";
            cout << "harga Mobil (dalam ribuan rupiah/K): Rp"<< harga;
            cout << endl;
        }

        // Method untuk menghitung pajak mobil
        int hitung_pjk_mobil(int harga){
            // dalam ribuan rupiah (1K = 1000 rupiah)
            BBNKB = harga*0.1;      // Bea Balik Nama Kendaraan Bermotor
            PKB = harga*0.02;       // Pajak Kendaraan Bermotor
            SWDKLLJ = 143;          // Sumbangan Wajib Dana Kecelakaan Lalu Lintas Jalan 
            biaya_admin = 100;      // Biaya administrasi Tanda Nomor Kendaraan Bermotor
            biaya_STNK = 50 + 200;  // Bea administrasi dan penerbitan STNK
            total_pajak = BBNKB + PKB + SWDKLLJ + biaya_admin + biaya_STNK;

            return total_pajak;
        }

        // Method untuk mengoutputkan pajak mobil yang telah dihitung
        void output_pjk_mobil(){
            cout << "\n=== Rincian Penghitungan Pajak Mobil ===\n";
            cout << "Biaya Bea Balik Nama Kendaraan Bermotor Yaitu: " << BBNKB << "K\n";
            cout << "Biaya Pajak Kendaraan Bermotor: " << PKB << "K\n";
            cout << "Biaya Sumbangan Wajib Dana Kecelakaan Lalu Lintas Jalan: " << SWDKLLJ << "K\n";
            cout << "Biaya Administrasi Tanda Nomor Kendaraan Bermotor: " << biaya_admin <<"K\n";
            cout << "Biaya Bea administrasi dan penerbitan STNK: " << biaya_STNK << "K\n";
            cout << "=> Total Pajak yang harus dibayar Yaitu: Rp" << total_pajak <<"K\n";
        }

        ~mobil(){
            cout << "=== program selesai, class mobil successfully destructed ===\n";
        }
};

int main(){
    mobil a;
    motor x;
    int pil1;
    char pil2;

    cout << "===== Program Pendeskripsian & Penghitungan Pajak Kendaraan =====\n\n";
    awal:
    cout << "Silahkan Pilih kendaraan anda (1=Motor, 2=Mobil)\n";
    pilihan1:   // label untuk memilih jenis kendaraan
    cout << "Inputkan Disini -> "; cin >> pil1; cout << endl;
    switch (pil1) {
        case 1: 
            cout << "#= MOTOR =#\n";
            x.input_desk_motor();
            x.output_desk_motor();
            x.hitung_pjk_motor(x.harga);
            x.output_pjk_motor();
            cout << endl;
            break;
        case 2:
            cout << "#= MOBIL =#\n";
            a.input_desk_mobil();
            a.output_desk_mobil();
            a.hitung_pjk_mobil(a.harga);
            a.output_pjk_mobil();
            cout << endl;
            break;
        default:
            cout << "Input invalid, silahkan inputkan kembali pilihan anda\n";
            goto pilihan1;
    }
    cout << "Apakah anda sudah selesai?\n";
    pilihan2:
    cout << "(Y/T) --> "; cin >> pil2;
    if(pil2 == 'y' || pil2 == 'Y'){
        cout << "\n#= Terimakasih sudah memakai program kami =#\n";
    }
    else if (pil2 == 't' || pil2 == 'T') {
        cout << "\nanda akan dikembalikan ke menu awal\n\n";
        goto awal;
    }
    else{
        cout << "Input invalid, silahkan pilih lagi dengan (Y/T)\n\n";
        goto pilihan2;
    }

    return 0;
}