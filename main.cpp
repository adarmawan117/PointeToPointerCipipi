#include <iostream>

typedef struct {
    int nim;
    std::string nama;
    float nilai[3];
} Mahasiswa;

int main() {

    Mahasiswa **mhs = (Mahasiswa**) malloc(sizeof(Mahasiswa*) * 2);
    
    Mahasiswa m1 = {
            201120207,
            "AGUSTINUS",
            {
                    100.0,
                    30.5,
                    50.9
            }
    };
    
    Mahasiswa m2 = {
            201120207,
            "AGUSTINUS",
            {
                    100.0,
                    30.5,
                    50.9
            }
    };
    
    mhs[0] = &m1;
    mhs[1] = &m2;

    for(int i = 0; i < 2; i++) {
        std::cout << "NIM   : " << mhs[i]->nim << "\n";
        std::cout << "Nama  : " << mhs[i]->nama << "\n";
        std::cout << "Nilai : ";
        for (int j = 0; j < 3; j++) {
            std::cout << mhs[i]->nilai[j] << " ";
        }
        std::cout << "\n\n";
    }

    free(mhs);

    return 0;
}
