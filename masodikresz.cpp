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
    
    int getKor(){
        return kor;
    }
    
    string getNev(){
        return nev;
    }
    
    void setKor(int _kor){
        kor=_kor;
    }
    
    void setNev(string _nev){
        nev=_nev;
    }
    
    void toString(){
        std::cout << "Neve: "<<getNev()<<" Kora: "<<getKor() << std::endl;
    }
};

class MunkasEmber : public Ember{
    int fizetes;
    
    public:
    MunkasEmber(int _kor, string _nev, int _fizetes):Ember(_kor, _nev){
        fizetes=_fizetes;
    }
    
    int getFizetes(){
        return fizetes;
    }
    
    int setFizetes(int _fizetes){
        fizetes=_fizetes;
    }
    
    void toString(){
        std::cout << "Neve: "<<getNev()<<" Kora: "<<getKor()<<" Fizu: "<<getFizetes() << std::endl;
    }
};

int main(){
    Ember e(5, "Jani");
    e.toString();
    MunkasEmber me(25, "Juli", 120000);
    me.toString();
}
