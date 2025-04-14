#include <iostream>
#include <string>
using namespace std;

struct Player
{
    String name;
    string id;
    string level;
    Weapon weapone;
};

struct Weapon
{
    string name;
    int demage;
};

int main()
{
    Player good;

    cout << "Masukkan nama Player= ";
    getline(cin, good.name);
    cout << "Masukkan id= ";
    cin >> good.id;
    cout << "Masukkan level=";
    cin >> good.level;
    cout << "Masukkan Weapon=";
    getline(cin, good.weapone.name)
            cout
        << "Masukkan demage=";
    cin >> good.weapone.demage;

    cout << "Tampilkan Player" << endl;
    cout << "Nama Player= " << good.name << endl;
    cout << "Id Player= " << good.id << endl;
    cout << "Level Player= " << good.level << endl;
    cin.ignore();
    cout << "Nama Weapone= " << good.weapone.name << endl;
    cout << "Demage Weapone= " << good.Weapone.demage << endl;
}