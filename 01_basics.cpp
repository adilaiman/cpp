// pre-processor directives
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

// using namespace std;
// no need to use std:: if using this line

int main(int argc, char** argv) {
    // std::cout << "Hello World" << std::endl;
    // same as
    std::cout << "Hello World\n";

    // argc has info on the num of params passed
    // if nothing is passed in the argc == 1,
    // (cont) it prints out the app name
    // ex ./a.out is the first param
    if(argc != 1) {
        std::cout << "You entered " << argc <<
                    " arguments\n";
    }

    for(int i = 0; i < argc; i++){
        // argv stores arguments passed in an array
        std::cout << argv[i] << std::endl;
    }

    // when we return 0 program has executed correctly
    // if return -1, error has occured
    return 0;
}