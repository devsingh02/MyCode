//Basic code to explain the order
#include <iostream>
using namespace std;
int main()
    { string x="yo";
    
    try {
        {   
            throw x;	//throw an exception
        }
    }
    catch (const char* ch)
    {
        cout << "Exception Caught \n";
    }
    cout << "After catch (Will be executed) \n";
    return 0;
}