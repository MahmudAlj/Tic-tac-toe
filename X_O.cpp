#include <iostream>
#include <vector>



int main(){
   char k1;
   char k2;
   char k3;
   char k4;
   char k5;
   char k6;
   char k7;
   char k8;
   char k9;
   std::string oyuncubir;
   std::string oyuncuiki;
   char array[9];
   char ex = 'X';
   char oo = 'O';
   bool kosul1 = true;
   bool kosul2 = true;
   int tas1;
   char tas;
   
   // sec ve oyna 
   while(kosul1){
        std::cout << "birinci oyunucu lutfen tas sec" << std::endl;
   std::cin >> tas;
   oyuncubir = tas;
   tas = 0;
    std::cout << "ikinci oyuncu lutfen tas sec" << std::endl;
   std::cin >> tas;
   oyuncuiki = tas;
   kosul1 = false;
   }

 
 while(kosul2){
   
   switch (tas){  
case 'O' & 'o':
std::cin>> tas1;
switch (tas1)
{
case 1:
   k1 = oo;
   break;
   case 2:
   k2 = oo;
   break;
   case 3:
   k3 = oo;
   break;
   case 4:
   k4 = oo;
   break;
   case 5:
   k5 = oo;
   break;
   case 6:
   k6 = oo;
   break;
   case 7:
   k7 = oo;
   break;
   case 8:
   k8 = oo;
   break;
   case 9:
   k9 = oo;
   break;
}
break;
case 'X' & 'x':
std::cin>> tas1;
switch (tas1)
{
case 1:
   k1 = ex;
   break;
   case 2:
   k2 = ex;
   break;
   case 3:
   k3 = ex;
   break;
   case 4:
   k4 = ex;
   break;
   case 5:
   k5 = ex;
   break;
   case 6:
   k6 = ex;
   break;
   case 7:
   k7 = ex;
   break;
   case 8:
   k8 = ex;
   break;
   case 9:
   k9 = ex;
   break;
}
}

//bourd
std::cout << k1 << "|" << k2 << "|" << k3 << std::endl;
std::cout << "-|-|-" << std::endl;
std::cout << k4 << "|" << k5 << "|" << k6 << std::endl;
std::cout << "-|-|-" << std::endl;
std::cout << k7 << "|" << k8 << "|" << k9 << std::endl;
}


    return 0;
}


// #include <iostream>
// #include <string>
// #include <random>

// class game{
// private:
//   char array[9];
//     char ex = 'X';
//     char oo = 'O';
//     bool kosul = true;
//     char k1;
//     char k2;
//     char k3;
//     char k4;
//     char k5;
//     char k6;
//     char k7;
//     char k8;
//     char k9;
//     std::string oyuncubir;
//     std::string oyuncuiki;
// public:
//     game() {
//     for (int i = 0; i < 9; i++) {
//         array[i] = ' ';
//     }
// }

// void tablo(char k1,char k2,char k3,char k4,char k5,char k6,char k7,char k8,char k9){

// std::cout << k1 << "|" << k2 << "|" << k3 << std::endl;
// std::cout << "-|-|-" << std::endl;
// std::cout << k4 << "|" << k5 << "|" << k6 << std::endl;
// std::cout << "-|-|-" << std::endl;
// std::cout << k7 << "|" << k8 << "|" << k9 << std::endl;
// }

// void kontrol() {
//     if ((k1 == k2 && k2 == k3 && k3 == ex) ||
//         (k1 == k5 && k5 == k9 && k9 == ex) ||
//         (k1 == k4 && k4 == k7 && k7 == ex) ||
//         (k2 == k5 && k5 == k8 && k8 == ex) ||
//         (k3 == k6 && k6 == k9 && k9 == ex) ||
//         (k4 == k5 && k5 == k6 && k6 == ex) ||
//         (k7 == k8 && k8 == k9 && k9 == ex))
//     {
//         std::cout << "X kazandi" << std::endl;
//         kosul = false;
//     }
//     else if ((k1 == k2 && k2 == k3 && k3 == oo) ||
//              (k1 == k5 && k5 == k9 && k9 == oo) ||
//              (k1 == k4 && k4 == k7 && k7 == oo) ||
//              (k2 == k5 && k5 == k8 && k8 == oo) ||
//              (k3 == k6 && k6 == k9 && k9 == oo) ||
//              (k4 == k5 && k5 == k6 && k6 == oo) ||
//              (k7 == k8 && k8 == k9 && k9 == oo))
//     {
//         std::cout << "O kazandi" << std::endl;
//         kosul = false;
//     }
//     else {
//         std::cout << "kazanan yok" << std::endl;
//     }
// }
// game() {
//     for (int i = 0; i < 9; i++) {
//         array[i] = ' ';
//     }
// }

// int giris(std::string oyuncubir, std::string oyuncuiki){

//     std::cout << "birinci oyuncu hangisini oynamak istersin X or O" << std::endl;
//     std::cin >>  oyuncubir;
//     if(oyuncubir == ex){
//         oyuncuiki = oo;
//     }else{
//         oyuncuiki = ex;
//     }
//     return 1;
// }}



// int main() {

// game gamer1;
// gamer1.giris();
// return 0;
// }

