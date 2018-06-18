#include <stdio.h>
#include <iostream>

using namespace std;

bool hattaloszt(int szamok[8]){
    for(int i=0;i<8;i++){
        if(szamok[i]%6==0){
            std::cout << szamok[i] << std::endl;
            return true;
        }
    }
    return false;
}

void kiirvane(int szamok[8]){
    if(hattaloszt(szamok)){
        std::cout << "Van" << std::endl;
    }
    else{
        std::cout << "Nincs" << std::endl;
    }
}

int main()
{
    int szamok[8];
    for(int i=0;i<8;i++){
        szamok[i]=(i+1)*3;
        std::cout << szamok[i] << std::endl;
    }
    
    kiirvane(szamok);

    return 0;
}
