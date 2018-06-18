#include <stdio.h>
#include <iostream>

using namespace std;

void kapottszam (int szam)
{
  std::cout << "a kapott szam: " << szam << std::endl;
}

bool ujvaneparos(int szamok[4]){
    for(int i=0;i<4;i++){
        if(szamok[i]%2==0){
            return true;
        }
    }
    return false;
}


void kiirparos(int szamok[4]){
    if(ujvaneparos(szamok)){
        std::cout << "Van paros" << std::endl;
    }
    else{
        std::cout << "Nincs paros" << std::endl;
    }
    
}


int main ()
{
  kapottszam (5);
  int szamok[]={5,7,8,11};
  for(int i=0;i<4;i++){
      std::cout << szamok[i] << std::endl;
  }
    kiirparos(szamok);
  return 0;
}
