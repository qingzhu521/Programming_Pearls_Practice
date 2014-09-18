#include <iostream>
#include <stdio.h>

using namespace std;

template<totalsize>
class bitset{
    private:
        const int bitsize = 32;
        const int arrsize = totalsize / bitsize + 1;
        const int maxbit = arrsize * bitsize;
        const int shift = 5;
        const int mod = 0x1f;
        int a[arrsize];
    public:
        bitset(){
            memset(a,0,sizeof(a));
        }
        bool set(int i){
            if( i >= maxbit )
                return false;
            a[i>>5] |= (1<<( i & mod)); 
            return true;
        }
        bool clear(int i){
            if( i >= maxbit )
                return false;
            a[i>>5] &= ~(1<<( i & mod));
            return true;
        }
        bool at(int i){
            return a[i>>5] & (1 <<(i & mod)); 
        }
};

int main(){ //testmain

}
