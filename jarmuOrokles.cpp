#include <iostream>

using namespace std;

class Jarmu{
    
    int kor;
    int suly;
    
    public:
    Jarmu(int _kor, int _suly){
        kor=_kor;
        suly=_suly;
    }
    
    int getKor(){
        return kor;
    }
    
    int getSuly(){
        return suly;
    }
    
    void setKor(int ujkor){
        kor=ujkor;
    }
    
    void setSuly(int ujsuly){
        suly=ujsuly;
    }
    
    void toString(){
        std::cout << getSuly() <<" kg  "<<getKor()<<" yr"<< std::endl;
    }
};

class Auto : public Jarmu{
    int ulesszam;
    
    public:
    Auto(int _kor, int _suly, int _ulesszam): Jarmu(_kor,_suly){
        ulesszam=_ulesszam;
    }
    
    int getUlesszam(){
        return ulesszam;
    }
    
    
    void setUlesszam(int ujulesszam){
        ulesszam=ujulesszam;
    }
    
    void toString(){
        std::cout << getSuly() <<" kg  "<<getKor()<<" yr "<< getUlesszam()<<" db"<<std::endl;
    }
};


class Motor : public Jarmu{
    int kerekmeret;
    
    public:
    Motor(int _kor, int _suly, int _kerek):Jarmu(_kor, _suly){
        kerekmeret=_kerek;
    }

    int getKerekmeret(){
        return kerekmeret;
    }

    void setKerekmeret(int ujkerekmeret){
        kerekmeret=ujkerekmeret;
    }
    
    void toString(){
        std::cout << getSuly() <<" kg  "<<getKor()<<" yr "<< getKerekmeret()<<" coll"<<std::endl;
    }
};

int main()
{
    Jarmu elso(7,2500);
    elso.toString();
    Auto elsoauto(8,3000,4);
    elsoauto.toString();
    Motor elsomotor(3,750,12);
    elsomotor.toString();


    return 0;
}
