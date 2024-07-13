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

