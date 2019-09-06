// plans to allow the use of a string instead of an unsigned long to increase calculating abilities
#include <iostream>
#include <math.h>

using namespace std;

bool isPanDigital(unsigned long num, int base){
    int digits_found = 0, all_digits_found = pow(2, base) - 1;

    while(num != 0){
        digits_found = digits_found | (1 << (num % base));
        num /= base;
    }

    return digits_found == all_digits_found;
}

int main(){
    unsigned long num;
    int base;

    cout << "Enter a positive number less than 4,294,967,296: ";
    cin >> num;

    // the smallest pandigital number for bases 11+ are greater than the largest unsigned long
    cout << "Enter a base (2 to 10): ";
    cin >> base;

    if(isPanDigital(num, base))
        cout << num << " is a pandigital number in base " << base;
    else
        cout << num << " is not a pandigital number in base " << base;

    return 0;
}
