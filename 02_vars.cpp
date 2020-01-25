// pre-processor directives
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

// global var
int g_iRandNum = 0;
// constant
const double PI = 3.14159;

int main(int argc, char** argv) {

    // local vars
    bool b_Person = true;
    char chFirstInitial = 'A';
    // unsigned int, no negatives, min val 0
    unsigned short int u16Age = 34;
    short int siWeight = 225;
    int nDays = 7;
    long lBigNum = 999999999;
    float fPi = 3.1459;
    double dbBigFloat = 1.11111111111111111111111;
    long double ldPi = 3.1459;
    // compiler sets type
    auto whatWillIBe = true;

    // find range
    std::cout << "Min range: " << std::numeric_limits<int>::min() << "\n";
    std::cout << "Max range: " << std::numeric_limits<int>::max() << "\n";

    // get no of bytes used by types
    std::cout << "Int bytes: " << sizeof(int) << std::endl;

    // types lose precision during calculations
    // float 6 points of precision
    // double 10 points
    float fBigFloat = 1.111111111111111111111111;
    float fBigFloat2 = 1.111111111111111111111111;
    float fFloatSum = fBigFloat + fBigFloat2;

    // C style printf available in C++
    printf("fFloatSum Precision: %.10f\n", fFloatSum);

    // strings
    std::string sQuestion ("Enter Number 1: ");
    std::string sNum1, sNum2;
    std::cout << sQuestion;
    // get user input
    getline(std::cin, sNum1);
    std::cout << "Enter Number 2: ";
    getline(std::cin, sNum2);

    // type conversion
    int nNum1 = std::stoi(sNum1);
    int nNum2 = std::stoi(sNum2);

    printf("%d + %d = %d\n", nNum1, nNum2, (nNum1 + nNum2));

    return 0;
}