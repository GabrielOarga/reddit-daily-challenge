#include <iostream>
#include <vector>
#include <sstream>

/* Forward declarations */
std::string convertToRomanNumerals(int number);
bool isPandigital(int number);
std::vector<int> getPandigitals(int number);

/* Commonly used namespace members */
using std::cout;
using std::endl;

/* Actual program */
int main(int argc, char** argv)
{
    int number = 0;
    std::vector<int> pandigitals;

    if (argc > 1) {
        number = *argv[0];
    }

    number = 1001; //Hardcoded for testing
    pandigitals = getPandigitals(number);

    if (pandigitals.size()) {
        cout << "\nFor " << number << " the pandigitals in roman numerics are: " << endl;
        for (int pandigital : pandigitals) {
            cout << pandigital << endl;
        }
    }

    return 0;
}

std::vector<int> getPandigitals(int number)
{
    std::vector<int> pandigitals;

    for (int currentNumber = 1000; currentNumber < number; currentNumber++) {
        if (isPandigital(currentNumber)) {
            cout << currentNumber << " is a pandigital number" << endl;
            pandigitals.push_back(currentNumber);
        } else {
            cout << currentNumber << " is not a pandigital" << endl;
        }
    }

    return pandigitals;
}

bool isPandigital(int number)
{
    std::string romanPandigital;
    romanPandigital = convertToRomanNumerals(number);

    //see if unique sequence
    unsigned char mask = 0; // 0000 0000

    for (const char c : romanPandigital) {

    }


    return true;
}

std::string convertToRomanNumerals(int number)
{
    std::string romanConversion;

    romanConversion.append("MCDXLIV"); //1444

    cout << "The Roman conversion for " << number << " -> " << romanConversion << endl;
    return romanConversion;
}