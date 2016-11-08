#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  char line[50];
  ifstream myfile ("1.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";

  return 0;
}
