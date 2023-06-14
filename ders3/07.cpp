#include <iostream>
#include <string>

using namespace std;

int main()
{

string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};

cout << letters[0][2] <<endl;  // Outputs "C"

system("PAUSE"); //program kapanmasin

return 0;

}