//This is a test, the code doesn't work
//Correction, now it does. You're welcome, Alexander.
#include <iostream>
using namespace std;
int dead = 0;
int brain = 1;
int SelfDestruct() {
  printf("Im dead");
}
int i = 1;
int main() {
    int mark;
  cout << "Am I brain-dead? ";
  printf("0 for Yes, 1 for No. ");
  cout << i << '\n';
  printf("Answer: ");
  cin >> mark;
  printf("");
if(mark==dead)
  
  SelfDestruct();
 else
  printf("meow");
}
