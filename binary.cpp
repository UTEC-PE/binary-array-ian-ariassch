#ifndef BOOLEAN_H
#define BOOLEAN_H
#include <iostream>
using namespace std;
class boolean {
    private:
        char* array;
        int size;
    
    public:
        boolean(int size)
        {
                this->size = (size/8)+1;
                array = new char[size];
                for(int i = 0; i<size; i++)
                {
                    array[i]=0;
                }

            }
        void print()
        {
            for(int i = 0; i<size; i++)
            {
                cout<<int(array[i])<<" ";
            }
        }
        void bitOn(int position)
        {
            array[position / 8] |= 1<<(position%8);

        }
             
        void bitOff(int position) {

            array[position / 8] &= ~(1<<(position%8));
        }
        bool operator[](int position) {
            // TODO
        }
    
        void clear() {    
            // TODO
        }
             
        ~boolean() {
            // TODO
        }
};

#endif