#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
#include <iostream>
#include <exception>
using namespace std;

class CQ1 : public exception { //inheriting the exception class
  public:
   const char * what () const throw () { //overriding the what methods which returns the info about exception in string
      return "Code Quotient"; //return type const char* for returning string function name what() const novalue should be changed inside
   }
   //throw() not allowed to throw any exceptions
};

int main() {
  CQ1 o1;
   try {
      throw o1;
   } catch(CQ1& e) {
      cout << "CQ1 caught" << endl;
      cout << e.what() << endl;
   } catch(exception& e) {
      cout << "Exception caught" << endl;
   }
}
