#include <iostream>
//Every exception is derived from the exception class
#include<stdexcept>

#include <iostream>
#include <stdexcept>  // For standard exceptions
#include <new>        // For std::bad_alloc
#include <vector>     // For std::out_of_range

using namespace std;

void testMemoryAllocation() {
    try {
        // Simulating memory allocation failure by requesting a huge block of memory
        int* arr = new int[100000000000];  // Likely to fail
    }
    catch (const bad_alloc& e) {
        cout << "Caught std::bad_alloc: " << e.what() << endl;
    }
}

void testOutOfRange() {
    try {
        vector<int> v(5);  // Vector with 5 elements
        cout << v.at(10);  // Accessing out of bounds
    }
    catch (const out_of_range& e) {
        cout << "Caught std::out_of_range: " << e.what() << endl;
    }
}

void testInvalidArgument() {
    try {
        throw invalid_argument("Invalid argument passed to function");
    }
    catch (const invalid_argument& e) {
        cout << "Caught std::invalid_argument: " << e.what() << endl;
    }
}

void testOverflowError() {
    try {
        throw overflow_error("Arithmetic overflow occurred");
    }
    catch (const overflow_error& e) {
        cout << "Caught std::overflow_error: " << e.what() << endl;
    }
}

void testLogicError() {
    try {
        throw logic_error("Logic error occurred in the code");
    }
    catch (const logic_error& e) {
        cout << "Caught std::logic_error: " << e.what() << endl;
    }
}

int main() {
    testMemoryAllocation();
    testOutOfRange();
    testInvalidArgument();
    testOverflowError();
    testLogicError();

    try {
        throw runtime_error("Generic runtime error");
    }
    catch (const runtime_error& e) {
        cout << "Caught std::runtime_error: " << e.what() << endl;
    }

    return 0;
}


