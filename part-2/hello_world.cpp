// Oscar Mayer
// CPSC 121-99
// oscar.mayer@csu.fullerton.edu

#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
  if (argc==1){
    cout<<"Too few arguments\n";
  }
  else{
    cout << "Hello ";
    cout << argv[1];

  }
  return 0;
}
