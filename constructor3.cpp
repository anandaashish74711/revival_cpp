#include<iostream>
#include<cstring>
using namespace std;

class Namaste {
public:
    char *name;
    int Lavel;
    int health;
    static int timetocomplete;

    Namaste() {
        name = new char[100];
    }

    void setName(char name[]) {
        strcpy(this->name, name);
    }

    void setHealth(int h) {
        this->health = h;
    }

    void setLevel(int L) {
        this->Lavel = L;
    }

    void print() {
        cout << "name: " << this->name << endl;
        cout << "Lavel: " << this->Lavel << endl;
        cout << "health: " << this->health << endl;
    }
    // Parameterized constructor
    Namaste(char n[], int l, int h) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        Lavel = l;
        health = h;
    }

    // Copy constructor
    Namaste(const Namaste &temp) {
        name = new char[strlen(temp.name) + 1];
        strcpy(name, temp.name);
        Lavel = temp.Lavel;
        health = temp.health;
    }
    ~Namaste(){
 delete[] name;
    }
};
//out of class
//initialization of static operator
int Namaste::timetocomplete=6;

int main() {
    Namaste Ram;
    Ram.setHealth(10);
    Ram.setLevel(34);
    char name[8] = "Aashish"; // Increase the size of the array to accommodate the null terminator
    Ram.setName(name);

    Ram.print(); // Print the details
    //use default copy constuctor
    Namaste Mohan(Ram);

Mohan.print();
   Ram.name[0]='n';
    Ram.print();

 Mohan.print();
 cout<<Namaste::timetocomplete<<endl;
    return 0;
 
}
 