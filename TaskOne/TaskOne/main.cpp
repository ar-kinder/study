//
//  main.cpp
//  TaskOne
//
//  Created by Дмитрий Зяблев on 23.05.21.
//

#include <iostream>

using namespace std;

int my_function ()
{
    int a, z;
    
    cout << "Введите два целых числа : ";
    cin >> a >> z;
    
    cout << a << "*" << z << "=" << a * z << endl;
    cout << a << "-" << z << "=" << a - z << endl;
    cout << a << "+" << z << "=" << a + z << endl;
    cout << a << "/" << z << "=" << a / z << endl;
   
    return 0;
}




int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    
    my_function ();
    
    
    return 0;
}

