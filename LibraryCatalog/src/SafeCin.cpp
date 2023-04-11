#include "../inc/SafeCin.h"

#include <iostream>
using std::cin;

bool isCinSafe() {
    if (cin) 
        return 1;
    return 0;
}
void clearCin() {
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}