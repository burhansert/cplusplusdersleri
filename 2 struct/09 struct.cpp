#include <iostream>
#include <string>

using namespace std;

int main()
{


struct {
  int myNum;
  string myString;
} myStructure;

// Assign values to members of myStructure
myStructure.myNum = 1;
myStructure.myString = "Hello World!";

// Print members of myStructure
cout << myStructure.myNum << "\n";
cout << myStructure.myString << "\n";

system("PAUSE"); //program kapanmasin

return 0;

}
