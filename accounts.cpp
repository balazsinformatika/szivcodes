#include <iostream>
using namespace std;

class Person{
    string name;
    int age;
    int ID;
    public:
    Person(){}
    Person(string _name, int _age, int _ID){
        name=_name;
        age=_age;
        ID=_ID;
    }
    
    string getName(){
        return name;
    }
    
    int getAge(){
        return age;
    }
    
    int getID(){
        return ID;
    }
    
    void setName(string _name){
        name=_name;
    }
    
    void setAge(int _age){
        age=_age;
    }
    
    void setID(int _ID){
        ID=_ID;
    }
    
    void toString(){
        std::cout <<"Name: " <<getName()<<" ID: "<<getID()<<" Age: " <<getAge()<< std::endl;
    }
};

class Account{
    Person owner;
    int amount;
    public:
    Account(int _amount, string _name, int _age, int _ID){
        amount=_amount;
        owner.setName(_name);
        owner.setAge(_age);
        owner.setID(_ID);
    }
    
    Account(Person _owner, int _amount){
        owner=_owner;
        amount=_amount;
    }
    
    int getAmount(){
        return amount;
    }
    void toString(){
        owner.toString();
        std::cout <<" Money: "<<getAmount()<< std::endl;
    }
    
    bool out(int _amount){
        if(_amount<=amount){
            amount-=_amount;
            return true;
        }
        return false;
    }
    
    void in(int _amount){
        amount+=_amount;
    }
    
};

int main(){
    Person p("Adam", 30, 11133344);
    p.toString();
    
    Account acc(p,60000);
    acc.toString();
    
    
    Account a(50000, "Jani", 25, 12345678);
    a.toString();
    a.in(100000);
    a.toString();
    a.out(130000);
    a.toString();
    return 0;
}
