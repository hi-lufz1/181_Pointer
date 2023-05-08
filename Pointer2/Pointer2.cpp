#include <iostream>
using namespace std;

class mahasiswa {
public :
    int nim;
    void  showNim() {
        cout << "No Induk = " << nim << endl;
    }
};

int main()
{
    mahasiswa* Mhs = new mahasiswa{ 1 }; 
    Mhs->nim = 2;  
    Mhs->showNim();
    delete Mhs;
    system("pause");
    return 0;
}

