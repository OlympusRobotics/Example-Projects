#include <iostream>
#include <string>

/*you know how in some other examples we had to put "std::" before stuff like "cout"? if we have "using namespace std" here, we no longer have to do that
we'll go more in-depth into namespaces later*/
using namespace std; 

int main(){
  
  /*here, I'm creating a string (basic text) variable without a value. I don't want it to have a value because in the next line,
  i'll be assigning it to whatever the user types into the terminal*/
  string input;
  
  cin >> input; //this assigns "input" to whatever the user puts in the terminal. also notice that now the program uses >> instead of << for input
  
  cout << input << endl; //outputs whatever was just inputted
  
  return 0;
}
