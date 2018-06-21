#include <iostream>
using namespace std;

class Noveny{
    int meret;
    
    public:
    Noveny(int _meret){
        meret=_meret;
    }
    
    int getMeret(){
        return meret;
    }
    
    void setMeret(int ujmeret){
        meret=ujmeret;
    }
    
    void toString(){
        std::cout << getMeret() << std::endl;
    }
};

class Zoldseg : public Noveny{
    int csipossegFoka;
    
    public:
    Zoldseg(int _meret, int _csipossegFoka) : Noveny(_meret){
        csipossegFoka=_csipossegFoka;
    }
    
    int getCsiposseg(){
        return csipossegFoka;
    }
    
    void setCsiposseg(int ujcsiposseg){
        csipossegFoka=ujcsiposseg;
    }
    
    void toString(){
        Noveny::toString();
        std::cout << getCsiposseg() << std::endl;
    }
};

class Gyumolcs : public Noveny{
  int edessegFoka;
  
  public:
  Gyumolcs(int _meret, int _edesseg):Noveny(_meret){
      edessegFoka=_edesseg;
  }
  
  int getEdesseg(){
      return edessegFoka;
  }
  
  void setEdesseg(int ujedesseg){
      edessegFoka=ujedesseg;
  }
  
  void toString(){
      Noveny::toString();
      std::cout << getEdesseg() << std::endl;
  }
};

class Paprika : public Zoldseg{
    string szin;
    public:
    Paprika(int _meret, int _csipossegFoka, string _szin):Zoldseg(_meret, _csipossegFoka){
        szin=_szin;
    }
    
    string getSzin(){
        return szin;
    }
    
    void setSzin(string ujszin){
        szin=ujszin;
    }
    
    void toString(){
        Zoldseg::toString();
        std::cout << szin << std::endl;
    }
};

class Meggy : public Gyumolcs{
    bool magazotte;
    public:
    Meggy(int _meret, int _edesseg, bool _magozotte) : Gyumolcs(_meret, _edesseg){
        magazotte=_magozotte;
    }
    
    bool getMagozott(){
        return magazotte;
    }
    
    void setMagozott(bool ujallapot){
        magazotte=ujallapot;
    }
    
    void toString(){
        Gyumolcs::toString();
        std::cout << magazotte << std::endl;
    }
};




int main()
{
    Noveny n(5);
    n.toString();
    
    Zoldseg z(5, 12);
    z.toString();
    
    Gyumolcs gy(7,20);
    gy.toString();
    
    Paprika p(3,2,"zold");
    p.toString();
    
    Meggy m(1,2,true);
    m.toString();
}
