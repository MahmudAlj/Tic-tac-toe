#include <iostream>
#include <vector>

class Tahta {
private:
    char x = 'X';
    char o = 'O';
    char oyuncubir = 'X';  // Başlangıçta X oyuncusu olarak kabul edelim.
    char oyuncuiki = 'O';  // Başlangıçta O oyuncusu olarak kabul edelim.
    std::vector<char> taslar = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    bool oyunbitti = false;  // Oyunun bitip bitmediğini kontrol etmek için bir bayrak.

public:
    void bourd() {
        std::cout << "-------------" << std::endl;
        std::cout << "| " << taslar[0] << " | " << taslar[1] << " | " << taslar[2] << " |" << std::endl;
        std::cout << "-------------" << std::endl;
        std::cout << "| " << taslar[3] << " | " << taslar[4] << " | " << taslar[5] << " |" << std::endl;
        std::cout << "-------------" << std::endl;
        std::cout << "| " << taslar[6] << " | " << taslar[7] << " | " << taslar[8] << " |" << std::endl;
        std::cout << "-------------" << std::endl;
    }

    bool kontrol(char tas) {
        if ((taslar[0] == tas && taslar[1] == tas && taslar[2] == tas) ||  // Yatay kontrol
            (taslar[3] == tas && taslar[4] == tas && taslar[5] == tas) ||
            (taslar[6] == tas && taslar[7] == tas && taslar[8] == tas) ||
            (taslar[0] == tas && taslar[3] == tas && taslar[6] == tas) ||  // Dikey kontrol
            (taslar[1] == tas && taslar[4] == tas && taslar[7] == tas) ||
            (taslar[2] == tas && taslar[5] == tas && taslar[8] == tas) ||
            (taslar[0] == tas && taslar[4] == tas && taslar[8] == tas) ||  // Çapraz kontrol
            (taslar[2] == tas && taslar[4] == tas && taslar[6] == tas)) {
            return true;  // Eğer kazanan varsa true döner.
        }
        return false;
    }

    void oyun() {
        int secim;
        while (!oyunbitti) {
            bourd();
            if (oyuncubir == 'X') {
                std::cout << "Oyuncu 1 (X) icin secim yap: ";
            } else {
                std::cout << "Oyuncu 2 (O) icin secim yap: ";
            }
            std::cin >> secim;

            if (secim < 1 || secim > 9 || taslar[secim - 1] == 'X' || taslar[secim - 1] == 'O') {
                std::cout << "Gecersiz secim, tekrar deneyin." << std::endl;
                continue;
            }

            taslar[secim - 1] = oyuncubir;

            if (kontrol(oyuncubir)) {
                bourd();
                std::cout << "Oyuncu " << oyuncubir << " kazandi!" << std::endl;
                oyunbitti = true;
            } else if (taslar[0] != '1' && taslar[1] != '2' && taslar[2] != '3' &&
                       taslar[3] != '4' && taslar[4] != '5' && taslar[5] != '6' &&
                       taslar[6] != '7' && taslar[7] != '8' && taslar[8] != '9') {
                bourd();
                std::cout << "Berabere!" << std::endl;
                oyunbitti = true;
            }

            oyuncubir = (oyuncubir == 'X') ? 'O' : 'X';  // Sırayı diğer oyuncuya geçir.
        }
    }
};

int main() {
    Tahta oyun;
    oyun.oyun();
    return 0;
}
