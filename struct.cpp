#include <iostream>
#include <string>
using namespace std;

struct Player
{
    String name;
    string id;
    string level;
};

int main()
{
    Player good;

    cout << "Masukkan nama Player= ";
    getline(cin, good.name);
    cout << "Masukkan id= ";
    getline(cin, good.id);
    cout << "Masukkan level=";
    getline(cin, good.level);

    cout << "Tampilkan Player" << endl;
    cout << "Nama Player" << good.name << endl;
    cout << "Id Player=" << good.id << endl;
    cout
}