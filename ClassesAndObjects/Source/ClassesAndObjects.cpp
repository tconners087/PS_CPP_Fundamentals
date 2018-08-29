#include "../Headers/person.h" //now included in tweeter.h
#include "../Headers/tweeter.h"
#include "../Headers/status.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

int main()
{
    Person p1("Taylor", "Conners", 87);
    {
        Tweeter t1("Someone", "Else", 452, "@whoever");
        string name2 = t1.getName();
    }
    cout << "after innermost block" << endl;
    string name = p1.getName();

    Status s = Pending;
    s = Approved;

    cout << "Status s: " << s << endl;

    FileError fe = FileError::notfound;
    fe = FileError::ok;

    cout << "FileError fe: " << static_cast<int>(fe) << endl;

    NetworkError ne = NetworkError::disconnected;
    ne = NetworkError::ok;

    cout << "NetworkError ne: " << static_cast<int>(ne) << endl;

    return 0;
}