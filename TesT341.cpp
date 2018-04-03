//This is a test, the code doesn't work
//Correction, now it does. You're welcome, Alexander.
//========================
//You sure this works?? I doubt it will.
//It does, but I remade it better anyways
//old version you made at the bottom for comparison btw, I made mine in 9 lines compared to your 20 lines
//and thats with mine being more spaced out than yours, Samuel
#include <iostream>
using namespace std;

int main(){
    
    int ChosenOne = 0;
    cout <<"Am I brain dead?!?\n1=Yes 2=No\nAnswer: ";
    cin>>ChosenOne;
    
    if(ChosenOne==1)
      cout<<"I'm dead...";
    else
    cout<<"meow";
    
}
//-------------------------------------------------------------------------------------------------------------
//                                                  With SelfDestruct Function
/*#include <iostream>
using namespace std;

    int SelfDestruct(){
      cout<<"I'm dead...";
}

int main(){
    
    int ChosenOne = 0;
    cout <<"Am I brain dead?!?\n1=Yes 2=No\nAnswer: ";
    cin>>ChosenOne;
    
    if(ChosenOne==1)
      SelfDestruct();
    else
    cout<<"meow";
    
}
*/
//-------------------------------------------------------------------------------------------------------------------------
//                                                      The Samuel Way
/*
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
*/
