#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cctype> //for to lower and toupper
#include <numeric> //accumulate

using namespace std;

int main() {
    // abs() example
    int number = -42;
    // Syntax: abs(number);
    cout << "abs(" << number << ") = " << abs(number) << endl;

    // ceil() example
    double ceilNumber = 4.2;
    // Syntax: ceil(ceilNumber);
    cout << "ceil(" << ceilNumber << ") = " << ceil(ceilNumber) << endl;

    // floor() example
    double floorNumber = 4.7;
    // Syntax: floor(floorNumber);
    cout << "floor(" << floorNumber << ") = " << floor(floorNumber) << endl;

    // fmax() example
    double a = 5.6, b = 3.4;
    // Syntax: fmax(a, b);
    cout << "fmax(" << a << ", " << b << ") = " << fmax(a, b) << endl;

    // fmin() example
    // Syntax: fmin(a, b);
    cout << "fmin(" << a << ", " << b << ") = " << fmin(a, b) << endl;

    // sort() example
    int arr[] = {4, 6, 2, 8, 7, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    // Syntax: sort(arr, arr + n);
    sort(arr, arr + n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;

    // find() example
    vector<int> dataset{1, 89, 0, 7, 33, 45};
    auto index = find(dataset.begin(), dataset.end(), 0);
    // Syntax: find(dataset.begin(), dataset.end(), value);
    if (index != dataset.end()) {
        cout << "Element 0 found at index " << index - dataset.begin() << endl;
    } else {
        cout << "Element 0 not found" << endl;
    }

    // binary_search() example
    vector<int> sortedArr = {10, 11, 12, 13, 14};
    // Syntax: binary_search(sortedArr.begin(), sortedArr.end(), target);
    if (binary_search(sortedArr.begin(), sortedArr.end(), 16)) {
        cout << "16 is present." << endl;
    } else {
        cout << "16 is not present" << endl;
    }

    // max() and min() example
    int x = 7, y = 6;
    // Syntax: max(a, b);
    cout << "max(" << x << ", " << y << ") = " << max(x, y) << endl;
    // Syntax: min(a, b);
    cout << "min(" << x << ", " << y << ") = " << min(x, y) << endl;

    // swap() example
    int x1 = 3, y1 = 4;
    // Syntax: swap(x1, y1);
    cout << "Before swap: x1 = " << x1 << ", y1 = " << y1 << endl;
    swap(x1, y1);
    cout << "After swap: x1 = " << x1 << ", y1 = " << y1 << endl;

    // tolower() example
    string str = "GFG";
    // Syntax: tolower(character);
    for (auto& ch : str) {
        ch = tolower(ch);
    }
    cout << "Lowercase string: " << str << endl;

    // toupper() example
    str = "geeksforgeeks";
    // Syntax: toupper(character);
    for (auto& ch : str) {
        ch = toupper(ch);
    }
    cout << "Uppercase string: " << str << endl;

    // max_element() example
    vector<int> v = {1, 2, 3, 4, 5};
    auto maxElem = max_element(v.begin(), v.end());
    // Syntax: max_element(v.begin(), v.end());
    cout << "Max element is " << *maxElem << endl;

    // min_element() example
    vector<int> v2 = {5, 4, 3, 2, 1};
    auto minElem = min_element(v2.begin(), v2.end());
    // Syntax: min_element(v2.begin(), v2.end());
    cout << "Min element is " << *minElem << endl;

    // copy() example
    vector<int> src = {1, 2, 3, 4, 5};
    vector<int> dest(src.size());
    // Syntax: copy(src.begin(), src.end(), dest.begin());
    copy(src.begin(), src.end(), dest.begin());
    cout << "Copied elements: ";
    for (int n : dest)
        cout << n << " ";
    cout << endl;

    // reverse() example
    vector<int> v3 = {1, 2, 3, 4, 5};
    // Syntax: reverse(v3.begin(), v3.end());
    reverse(v3.begin(), v3.end());
    cout << "Reversed vector: ";
    for (int n : v3)
        cout << n << " ";
    cout << endl;

    // accumulate() example
    vector<int> v4 = {1, 2, 3, 4, 5};
    // Syntax: accumulate(v4.begin(), v4.end(), initial_value);
    int sum = accumulate(v4.begin(), v4.end(), 0);
    cout << "Sum of elements: " << sum << endl;

      // Example for partial_sum()
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> partialSums(v1.size());

    // Compute partial sums
    partial_sum(v1.begin(), v1.end(), partialSums.begin());

    cout << "Partial sums: ";
    for (int i : partialSums) {
        cout << i << " ";
    }
    cout << endl;

    // Example for adjacent_difference()
    vector<int> v2 = {1, 3, 6, 10, 15};
    vector<int> differences(v2.size());

    // Compute adjacent differences
    adjacent_difference(v2.begin(), v2.end(), differences.begin());

    cout << "Adjacent differences: ";
    for (int i : differences) {
        cout << i << " ";
    }
    cout << endl;

    // Example for iota()
    vector<int> v3(5);
    int startValue = 10;

    // Fill the vector with sequentially increasing values starting from startValue
    iota(v3.begin(), v3.end(), startValue);

    cout << "Sequential values: ";
    for (int i : v3) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
