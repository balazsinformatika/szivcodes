#include <iostream>
using namespace std;

class Felso{
    int adat;
    
    public:
    Felso(int a){
        adat=a;
    }
    
    int getAdat(){
        return adat;
    }
};

class Kozepso : public Felso{
    string nev;
    
    public:
    Kozepso(int a, string b):Felso(a){
        nev=b;
    }
    
    string getNev(){
        return nev;
    }
    
};

class Also : public Kozepso{
    bool igaze;
    
    public:
    Also(int a, string n, bool i):Kozepso(a, n){
        igaze=i;
    }
    
    bool getIgaze(){
        return igaze;
    }
};

int main()
{
    Kozepso k(5, "jani");
    Also a(5, "isti", true);
    
    std::cout << k.getNev()<<"  "<<k.getAdat() << std::endl;
    std::cout << a.getNev()<<"  "<<a.getAdat()<<" "<<a.getIgaze() << std::endl;

    return 0;
}
