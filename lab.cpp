#include "functions.h"

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num1, num2;
    cout << "Ââåä³òü ïåðøå ÷èñëî: ";
    cin >> num1;
    cout << "Ââåä³òü äðóãå ÷èñëî: ";
    cin >> num2;
    cout << "Ì³í³ìóì ç " << num1 << " ³ " << num2 << " - öå: " << findMin(num1, num2) << endl;
    cout << "Ìàêñèìóì ç " << num1 << " ³ " << num2 << " - öå: " << findMax(num1, num2) << endl;
    cout << "Êâàäðàò ÷èñëà " << num1 << " - öå: " << square(num1) << endl;
    cout << num1 << " ï³äíÿòå â ñòóï³íü 3 äîð³âíþº: " << power(num1, 3) << endl;
    if (isEven(num1))
        cout << num1 << " - ïàðíå ÷èñëî." << endl;
    else
        cout << num1 << " - íåïàðíå ÷èñëî." << endl;
    if (isOdd(num2))
        cout << num2 << " - íåïàðíå ÷èñëî." << endl;
    else
        cout << num2 << " - ïàðíå ÷èñëî." << endl;
    return 0;
}
