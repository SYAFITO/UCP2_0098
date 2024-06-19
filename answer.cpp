#include <iostream>
#include <vector>
using namespace std;

class Perusahaan;
class proyek {
    public :
    string nama;
    vector<proyek*> daftarProyek;

     proyek(string pNama) : nama(pNama) {  
     cout << "proyek dibuat dengan nama : " << nama << endl;
     cout << "----------------------------------" << endl;
    }

     ~proyek() {   
     cout << "proyek dihancurkan" << endl;
     cout << "----------------------------------" << endl;
    }

    void tambahkaryawan(karyawan*); 
    void cetakkaryawan(); 
  
};

class karyawan {
    public:
    string namaKaryawan, proyek;
    vector<karyawan*> daftarkaryawan; 

    karyawan(string pNamakaryawan, string pProyek) : namaKaryawan(pNamakaryawan) , proyek(pProyek) {
    cout << "----------------------------------" << endl;
    cout << "Karyawan ditambahkan dengan nama : " << namaKaryawan << endl;
    cout << "Proyek karyawan : " << proyek << endl;
    cout << "----------------------------------" << endl;

    }

    ~karyawan() {
    cout << "Karyawan dimusnahkan" << endl;
    cout << "----------------------------------" << endl;

    }
    void tambahkaryawan(karyawan*);
    void cetakKaryawan();
    

};


void karyawan::tambahproyek(){
    daftarProyek.push_back(pProyek);
}

void karyawan::cetakProyek(){
    cout << "----------------------------------" << endl;
    cout << "Proyek " << this->namaKaryawan << " ada di Proyek: " << endl;
    for (auto& a : daftarProyek) {    // pengulangan for khusus tipe data vector
    cout << a->nama << endl;
    }
    cout << "----------------------------------" << endl;
    cout << endl;

}
void proyek::tambahPerusahaan(perusahaan*pPerusahaan) {
    daftarPerusahaan.push_back(pPerusahaan);
}


int main() {
    karyawan* varKaryawan1 = new karyawan("Budi");
    karyawan* varKaryawan2 = new karyawan("Andi");
    proyek* varProyek1 = new proyek("")
}
