#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void square(int & n) { n *= n; }
void print(int & n) { cout << n << " "; }

int main() {
  vector<int> v;
  v.push_back(11);
  v.push_back(3);
  v.push_back(4);
  v.push_back(22);

  // Invoke the given function (print, square)
  // for each element in the range
  for_each(v.begin(), v.end(), print);
  for_each(v.begin() + 1, v.begin() + 3, square);
  for_each(v.begin(), v.end(), print);
  return 0;
}

/*
For each function calls the callback function for all the elements of the container
just like in javascript
*/
