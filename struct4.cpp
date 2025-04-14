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
    for (int i = 0; i < 3; i++)
    {

        Player good[3];
        for (int i = 0; i < 3; i++)
        {
            cout << "Masukkan nama Player= ";
            getline(cin, good[i].name);
            cout << "Masukkan id= ";
            cin >> good[i].id;
            cout << "Masukkan level=";
            cin >> good[i].level;
            cout << "Masukkan Weapon=";
            getline(cin, good[i].weapone.name)
                    cout
                << "Masukkan demage=";
            cin >> good[i].weapone.demage;
            cin.ignore();
        }

        for (int i = 0; i < 3; i++)
        {
            cout << "Tampilkan Player" << endl;
            cout << "Nama Player= " << good[i].name << endl;
            cout << "Id Player= " << good[i].id << endl;
            cout << "Level Player= " << good[i].level << endl;
            cout << "Nama Weapone= " << good[i].weapone.name << endl;
            cout << "Demage Weapone= " << good[i].Weapone.demage << endl;
        }