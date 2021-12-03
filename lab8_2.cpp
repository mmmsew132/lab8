#include <iostream>
#include <string>

using namespace std;

int main() {
    string name, mov, dat, res;
    int stid, geer;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << "\n?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name." << "\nFahsai: I think you are an Engineering student. What is your student ID?" << "\n" << name << ": ";
    cin >> stid;
    geer = (stid/10000000) - 12;
    cout << "Fahsai: I think you may be GEAR " << geer << ". I have a free movie ticket for you." << "\nFahsai: Let's go to the cinema together!!!" << "\nFahsai: What movie do you want to watch?" << "\n" << name << ": ";
    cin.ignore();
    getline(cin,mov);
    cout << "Fahsai: So....which day are you free to go with me?" << "\n" << name << ": ";
    getline(cin,dat);
    cout << "Fahsai: " << dat << "....that is OK!!! I'm looking forward to watching " << mov << " with you." << "\n" << name << ": ";
    getline(cin,res);
    cout <<  "Fahsai: 555+ see you " << dat << ". Bye Bye \\(^ ^)/";
    return 0;
}
