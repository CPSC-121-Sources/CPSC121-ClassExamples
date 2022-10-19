// reading a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string line;
    int sum = 0;

  ifstream myfile ("numbers.dat");
  if (myfile.is_open())
  {
    while ( getline (myfile, line) )
    {
      cout << line << '\n';
      int currLineNumber = 0;
      currLineNumber = stoi(line);

      sum += currLineNumber;
    }
    myfile.close();
  }
  else cout << "Unable to open file" << endl; 

  cout << "Sum total: " << sum << endl;
  return 0;
}