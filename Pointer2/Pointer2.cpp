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
    
    pMhs->nim = 3;  //Arrow Operator
    mhs.showNim();
    system("pause");
    return 0;
}

