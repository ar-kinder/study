//
//  main.cpp
//  Task_2
//
//  Created by Дмитрий Зяблев on 31.05.21.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";

    cout << "Задайте три числа а, в, с: ";

    double a, b , c, d = 0;

    cin >> a >> b >> c; // ввод трёх значений

    cout << "Задайте операцию (+-*/): ";

    char op1, op2;
    cin >> op1 >> op2; //ввод знака операции
    if (op2 == '*' || op2 == '/')
    {
        switch (op2) {
            case '*':
                d = b * c;
                break;
            case '/':
                d = b / c;
                break;
                
            default:
                break;
        }
    }
    if (op2 == '+' || op2 == '-')
    {
        switch (op1) {
            case '+':
                d = a + b;
                break;
                
            case '-':
                d = a - b;
                break;
                
            case '*':
                d = a * b;
                break;
                
            case '/':
                d = a / b;
                break;
            default:
                break;
        }
        
    }

    switch (op1) {
        case '+':
            cout << a + d << endl;
            break;
            
        default:
            break;
    }
    return 0;
}
