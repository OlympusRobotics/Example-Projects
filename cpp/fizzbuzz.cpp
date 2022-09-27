#include <iostream> //this adds the std::cout and std::endl functionality

//this is the function that gets called by the compiler (literally the main function)
int main(){
  
  for(int i = 0; i < 16; i++){
    /*for loops iterate through a range of numbers (or an array, but we'll get to that later)
    the first section (int i = 0) sets up the variable to be iterated. in this example, I've created an integer (whole number) i and set its initial value to 0
    
    the second section (i < 16) sets the condition for the loop to work on. in this example, the loop will run until i becomes greater than or equal to 16
    
    the second section (i++) states what happens after the code block (the stuff below) runs. in this case, it increases i by 1 (that's what ++ does)
    
    each section is separated by semicolons */   
    
    /*if statements test whether the statement inside the parenthesis resolves to true. here, it's asking if i is evenly divisible by 15. 
    since it is, the code block below runs
    
    if i wasn't divisible by 15, though, the below code wouldn't run and it would skip to the "else if(i % 5 == 0){" line*/
    if(i % 15 == 0){
      
      /*here i have another set of <<s after my output. this is optional, as all it does is allow me to put another statement after my output. i have std::endl,
      which adds an enter at the end of the line. without this, all my inputs will print back to back on the same line*/
      
      std::cout << "fizzbuzz" << std::endl;
    }
    
    //else if tells the program to evaluate this next statement if the first if statement was false
    else if(i % 5 == 0){
      
      //this is the same as the first std::cout statement, but instead it outputs "buzz" if i is divisible only by 5 and not 3
      std::cout << "buzz" << std::endl;
    }
    else if(i % 3 == 0){
      
      //this is the same as the other two std::cout statements, but instead it outputs "fizz" if i is divisible only by 3 and not 5
      std::cout << "fizz" << std::endl;
    }
    else{
      
      //this std::cout statement outputs i if it isn't divisible by 3, 5, or 15
      std::cout << i << std::endl;
    }
    
  }
  return 0; //basically says that the program ran successfully
}
