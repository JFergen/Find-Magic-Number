#include <iostream>
using namespace std;

int getDigits(int magicNum); // Gets the digits of the number added together

int main()
{
    int magicN; // Magic number entered by user
    int digits = 0; // Digits of magic number added together
    
    // Getting the magic number
    cout << "Enter a positive integer [1-100,000]:";
    cin >> magicN;
    
    // Making sure magic number is [1-100,000]
    while(magicN < 1 || magicN > 100000)
    {
        cout << "Error. Please enter a positive integer [1-100,000]:";
        cin >> magicN;
    }
    
    digits = getDigits(magicN); // Gets the digits of the number added together
    
    // Increases magic number by 1 and gets the digits until it finds one that matches
    while(magicN % digits != 0)
    {
        ++magicN;
        digits = getDigits(magicN); // Gets the digits of the number added together
    }
    
    cout << endl << magicN << " is the closest magic number" << endl; // Returns the closest magic number
    
    return 0;
}

int getDigits(int magicNum)
{
    int addDigits = 0;
    
    while(magicNum > 0)
    {
        addDigits += magicNum % 10;
        magicNum /= 10;
    }
    
    return addDigits;
}