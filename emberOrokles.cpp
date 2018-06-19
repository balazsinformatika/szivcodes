#include <iostream>
using namespace std;

class Ember{
    int kor;
    string nev;
    
    public:
    Ember(int _kor, string _nev){
        kor=_kor;
        nev=_nev;
    }
    
    int getKor(){return kor;}
    string getNev(){return nev;}
    
    void setKor(int ujkor){kor=ujkor;}
    void setNev(string ujnev){nev=ujnev;}
    
    void toString(){
        std::cout << getKor() << " eves es a neve " << getNev() << std::endl;
    }
};

class Alkalmazott : public Ember{
    int fizetes;
    
    public:
    Alkalmazott(int _kor, string _nev, int _fizetes):Ember(_kor, _nev){
        fizetes=_fizetes;
    }
    
    int getFizetes(){return fizetes;}
    void setFizetes(int ujfizetes){fizetes=ujfizetes;}
    void toString(){
        Ember::toString();
        std::cout << "fizetese: " << getFizetes() << std::endl;
    }
};

class Tanulo : public Ember{
    int diakszam;
    
    public:
    Tanulo(int _kor, string _nev, int _diakszam):Ember(_kor, _nev){
        diakszam=_diakszam;
    }
    
    int getDiakszam(){return diakszam;}
    void setDiakszam(int ujdiakszam){diakszam=ujdiakszam;}
    
    void toString(){
        Ember::toString();
        std::cout << "diakszama: " << diakszam << std::endl;
    }
};


int main()
{
    Alkalmazott elso(45, "Janos", 150000);
    elso.toString();
    Tanulo masodik(15,"Pistike", 58934523);
    masodik.toString();
}
