#include <iostream>
#include <string>
#include "../include/commonfuncs.h"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printUsage();
        return 1;
    }

    std::string inputPath = argv[1];
    std::string outputName = "sound";

    if (argc >= 3) {
        outputName = argv[2];
    }

    SoundMaker sm;

    
    return 1;
}