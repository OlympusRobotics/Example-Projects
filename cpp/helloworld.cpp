// Your First C++ Program

#include <iostream> //allows us to output values (make them show up in the terminal)
#include <string> //allows us to use strings (basic text inside "quotation marks")

//this is the starting function of the program (literally the main function)
int main() {
    
    /*std::cout is the most common way to generate outputs in cpp. basically, you just type "std::cout" and put two < signs.
      
    then, you type whatever you want to output. here, I'm outputting the string "hello world". 
    
    lastly, i have a semicolon. semicolons just tell the program that the statement/action is over and that it can move on to the next statement*/
    
    std::cout << "Hello World!";
    
    
    return 0; //return 0 tells the program that everything was successful
}
