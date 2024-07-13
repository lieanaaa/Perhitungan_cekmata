#include <iostream>
#include <vector>
#include <string>

struct CekMata {
    std::string namaPasien;
    int usia;
    double tinggiBadan;
    double jarakPandang;
    int hasilTesMata;
    std::string statusKesehatanMata;
};

std::vector<CekMata> daftarCekMata;

void tambahCekMata(const std::string &namaPasien, int usia, double tinggiBadan, double jarakPandang, int hasilTesMata) {
    std::string statusKesehatanMata;
    
    if (usia <= 5) {
        std::cout << "Pemeriksaan ini hanya untuk pasien di atas 5 tahun." << std::endl;
        return;
    }
    
    double standarJarakPandang = tinggiBadan * 0.3; // Nilai standar jarak pandang berdasarkan tinggi badan
    
    if (hasilTesMata >= 8) {
        statusKesehatanMata = "Mata Sehat";
    } else if (hasilTesMata >= 5) {
        statusKesehatanMata = "Mata Kurang Sehat";
    } else {
        statusKesehatanMata = "Mata Bermasalah";
    }
    
    CekMata cekMataBaru = {namaPasien, usia, tinggiBadan, jarakPandang, hasilTesMata, statusKesehatanMata};
    daftarCekMata.push_back(cekMataBaru);
    std::cout << "Cek mata berhasil untuk " << namaPasien << " dengan status kesehatan mata: " << statusKesehatanMata << std::endl;
}

void tampilkanHasilCekMata() {
    std::cout << "Daftar hasil cek mata:" << std::endl;
    for (const auto &cekMata : daftarCekMata) {
        std::cout << "Nama Pasien: " << cekMata.namaPasien
                  << ", Usia: " << cekMata.usia
                  << ", Tinggi Badan: " << cekMata.tinggiBadan
                  << ", Jarak Pandang: " << cekMata.jarakPandang
                  << ", Hasil Tes Mata: " << cekMata.hasilTesMata
                  << ", Status Kesehatan Mata: " << cekMata.statusKesehatanMata << std::endl;
    }
}

