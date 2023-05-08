
#include <iostream>\
using namespace std;

class mahasiwa {
public : 
    int nim;
    void  showNim(); //deklarasi method
};

void mahasiswa::showNim() { //implementasi methor diluar kelas
    cout << "No Induk = " << nim << endl;
}

int main()
{
    mahasiswa mhs{ 1 }; //object mhs
    mhs.showNim(); //member acces operator

    mahasiwa& ref = mhs; //pointer reference refMhs
}

