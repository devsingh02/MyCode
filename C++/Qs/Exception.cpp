//Basic code to explain the order
#include <iostream>
using namespace std;
int main()
    { int x = -1;
    // Some code
    cout << "Before try \n";
    try {
        cout << "Inside try \n";  if (x < 0)
        {
            throw x;	//throw an exception
            cout << "After throw (Never executed) \n"; //WHY?
        }
    }
    catch (const* char )
    {
        cout << "Exception Caught \n";
    }
    cout << "After catch (Will be executed) \n";
    return 0;
}