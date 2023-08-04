#include<iostream>
using namespace std;

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){

    // NAMESPACE - provides a solution for preventing name conflicts
    //             in large projects. Each entitty needs a unique name.
    //             A namespace allows for identically named entities as
    //             long as the namespace are different.

    int x = 0;
    
    cout<< first::x;

    return 0;
}