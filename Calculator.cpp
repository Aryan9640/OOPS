#include <iostream>
using namespace std;

class Calci{
    
    public:Calci(){
        firstNum=0;
        secondNum=0;
    }

   public:Calci(double thirdNum,double fourthNum){
        this->thirdNum=thirdNum;
        this->fourthNum=fourthNum;
    }

    public:Calci(int firstNum,int secondNum){
        this->firstNum=firstNum;
        this->secondNum=secondNum;
    }
    
    //class members

    //class variables
    public:int firstNum;
    public: int secondNum;
    public: double thirdNum;
    public: double fourthNum;

    //class method
    public: int add(int firstNum,int secondNum){
        return firstNum+secondNum;
    }

};

int main() {
    cout << "Hello, World!" << endl;

    Calci cal;
    cal.firstNum=10;
    cout<<cal.firstNum<<endl;

    Calci cal1;
    cout<<cal1.firstNum<<endl;
    cout<< cal1.add(15,15)<<endl;

    Calci cal3(12.02,13.04);
    cout<<cal3.thirdNum;

}


