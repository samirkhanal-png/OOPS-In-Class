#include <iostream>
using namespace std;

class CQ {
    static int count;
    int id;
public:
    CQ() {
        count++;
        id = count;
        cout << "CQC number:" << id << endl;
        if(id == 3)
            throw 3;
    }
    ~CQ() {  // Destructor
        cout << "CQD number:" << id << endl;
    }
};

int CQ::count = 0;

int main() {
    try {
        CQ array[5];
    } catch(int i) {
        cout << "Caught " << i << endl;
    }
}

/*
The destructor for Object 3 is not executed because:
The object was not fully constructed when the exception was thrown.
Only fully constructed objects have their destructors invoked when an exception occurs.

*/
