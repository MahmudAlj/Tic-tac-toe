#include <iostream>
#include <vector>

class Tahta{

public:
enum taslar : char{
    k1,k2,k3,k4,k5,k6,k7,k8,k9
};
char bourd[9] = 
   {' ',' ',' ',' ',' ',' ',' ',' ',' '};

void tahta() const{
std::cout << taslar[k1] << "|" << taslar[k2] << "|" << taslar[k3] << std::endl;
std::cout << "-|-|-" << std::endl;
std::cout << taslar[k4] << "|" << taslar[k5] << "|" << taslar[k6] << std::endl;
std::cout << "-|-|-" << std::endl;
std::cout << taslar[k7] << "|" << taslar[k8] << "|" << taslar[k9] << std::endl;
}
int secim(){
   
}
}
int main(){
   Tahta oyun;
   char oyuncubir{};
   char oyuncuiki{};
   char array[9];
   auto x = 'X';
   auto o = 'O';
   bool kosul1 = true;
   bool kosul2 = false;
   int tas1;
   char tas;
   
   // tas sec tamam 
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

   switch (tas){  
case 'O' & 'o':
std::cin>> tas1;
switch (tas1)
{
case 1:
     k1 = o;
   break;
case 2:
     k2 = o;
   break;
case 3:
     k3 = o;
   break;
case 4:
     k4 = o;
   break;
case 5:
     k5 = o;
   break;
case 6:
     k6 = o;
   break;
case 7:
     k7 = o;
   break;
case 8:
     k8 = o;
   break;
case 9:
     k9 = o;
   break;
}
break;
case 'X' & 'x':
std::cin>> tas1;
switch (tas1)
{
case 1:
     k1 = x;
   break;
case 2:
     k2 = x;
   break;
case 3:
     k3 = x;
   break;
case 4:
     k4 = x;
   break;
case 5:
     k5 = x;
   break;
case 6:
     k6 = x;
   break;
case 7:
     k7 = x;
   break;
case 8:
     k8 = x;
   break;
case 9:
     k9 = x;
   break;
}
}



    return 0;
}