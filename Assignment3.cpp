#include <iostream>
#include <string>
#include <limits> 

int main() {

    std::string instructorName, yourName, food, adjective, color, animal;
    int number;

    std::cout << "Enter the name of your instructor:";
    std::getline(std::cin, instructorName);

    std::cout << "Enter your name:";
    std::getline(std::cin, yourName);

    std::cout << "Enter your favorite food:";
    std::getline(std::cin, food);

    //Input validation for number between 100 and 120 
    while(true){
        std::cout << "Enter a number between 100 and 120:";
        if(std::cin >> number && number >= 100 && number <= 120) {
          break; 
        } else {
          std::cout << "Invalid input. Please enter a number between 100 and 120." << std::endl;
          std::cin.clear(); 
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
        }
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  

    std::cout << "Enter and adjective:";
    std::getline(std::cin, adjective);

    std::cout << "Enter a color:";
    std::getline(std::cin, color);

    std::cout << "Enter an animal:";
    std::getline(std::cin, animal);

    std::cout << "Dear Instructor" << instructorName << "," << std::endl;
    std::cout << "I am sorry that I am unable to turn in my homework at this time. First, I ate a rotten " << food << ", which made me turn" << color << " and extremely ill. I came down with a fever of " << number << ". Next, my " << adjective << " pet " << animal << " must have smelled the remains of the " << food << " on my homework, because he ate it. I am currently rewriting my homework and hope you will accept it late." << std::endl;

    std::cout << "Sincerely," << yourName << std::endl;
    
    return 0;
  }
  
