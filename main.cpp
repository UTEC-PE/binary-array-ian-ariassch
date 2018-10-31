#include <iostream>
#include "binary.cpp"

using namespace std;

int main(int argc, char *argv[]) {
    cout << "===========================================================" << endl;
    cout << "Binary Array Practice" << endl;
    cout << "===========================================================" << endl << endl;


    boolean xd(16);
    xd.bitOn(7);
    xd.print();
    xd.bitOff(7);
    xd.bitOn(10);
    xd.bitOn(11);
    cout<<endl<<xd[10]<<endl;
    xd.print();
    return EXIT_SUCCESS;
}

