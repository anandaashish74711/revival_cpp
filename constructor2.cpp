#include<iostream>
using namespace std;
class Hero{
    public:
    int health;
    char level;

    Hero(int h){
       this->health=h;
      
    }

   
};

int main(){

  Hero Ram(10);
cout<<Ram.health<<endl;
  

    Hero Krishna(20);
   

  Hero Mahesh(Krishna);
  cout<<"Mahesh"<<Mahesh.health<<endl;
    return 0;
}
