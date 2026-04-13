#include <iostream>

int main(int argc, char* argv[]) {
    if (argc == 1) {
        std::cout 
        << "For correct usage, run the program as:" 
        << std::endl 
        << "./melodyMaker <input file path> <output file name>";
        //return 1;
    }
    std::cout << argc;
    return 1;
}