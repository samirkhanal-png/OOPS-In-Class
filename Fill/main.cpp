#include <iostream>
#include <vector>
#include <algorithm>  // for std::fill

int main() {
    std::vector<int> vec(10);  // Create a vector with 10 elements (default initialized to 0)

    // Use std::fill to set all elements to 42
    std::fill(vec.begin(), vec.end(), 42);

    // Output the vector to verify the result
    for (int i : vec) {
        std::cout << i << " ";  // Output: 42 42 42 42 42 42 42 42 42 42
    }

    return 0;
}

//Used to partially fill
//Constructor fills all the elements so we use this to partially fill the elements
