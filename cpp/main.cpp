#include <iostream>
#include "myclass.hpp"

int main(){
    MyClass c1;
    c1.myNum = 1;
    c1.myString = "any";

    cout << c1.myNum << " : " << c1.myString << "\n";
    return 0;
}