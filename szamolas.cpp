#include <iostream>
using namespace std;

class Szamolas{
    
    public:
    
    static const int szorzas(int egyikSzam, int masikSzam ){
        return egyikSzam*masikSzam;
    }
    
    static const int osszeadas(int egyikSzam, int masikSzam){
        return egyikSzam+masikSzam;
    }
    
    static const int kivonas(int egyikSzam, int masikSzam){
        if(egyikSzam>masikSzam){
            return egyikSzam - masikSzam;
        }
        
        else if(masikSzam>egyikSzam){
            return masikSzam - egyikSzam;
        }
        
        return 0;
    }
    
    static const int osztas(int egyikSzam, int masikSzam){
        if(egyikSzam>masikSzam){
            return egyikSzam/masikSzam;
        }
        
        else if(egyikSzam<masikSzam){
            return masikSzam/egyikSzam;
        }
        
        return 1;
    }
};

int main()
{
    std::cout << Szamolas::osszeadas(3,4) << std::endl;
    std::cout << Szamolas::kivonas(3,4) << std::endl;
    std::cout << Szamolas::szorzas(3,4) << std::endl;
    std::cout << Szamolas::osztas(3,4) << std::endl;

    return 0;
}
