#include <iostream>
using namespace std;

void value(int a);
void ref(int &a);
void pointer(int *a);

struct text{
  int x;
  string name;
};


int main ( int argc, char const *argv[])
{
  string test1 = "apple";
  string test2 = "bear";

  cout << test1.compare(test2) << endl;

}

// void value(int a){
//   a = 3;
// }
//
// void ref(int &a){
//   a = 14;
// }
// void pointer(int *a){
//   *a = 69;
// }
