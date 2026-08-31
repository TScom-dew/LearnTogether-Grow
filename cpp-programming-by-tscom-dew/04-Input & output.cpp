#include<iostream>
#include<limits>
/*
This pogram explain basic input & output operartions
and buffer handling 
*/

int main(){

    // taking a number
    double number1;
    std::cout << "Enter a number: ";
    std::cin >> number1;

    //if input fail
    if(std::cin.fail()){

        std::cout << "Input process failed" << std::endl;

        // clearing buffer
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        // std::exit(1); // to take input for number2
    }else{
        std::cout << "Your Number: " << number1 << std::endl;
    }

    // taking input until the correct input is recieved
    std::cout << "\n";
    double number2;
    std::cout << "Enter a number: ";
    while (true)
    {
        std::cin >> number2;

        // if input fail
        if(std::cin.fail()){
            std::cout << "Input process fail!" << std::endl;

           // clearing buffer
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            // continue taking input
            std::cout << "Enter a valid number: ";
        }else{
            std::cout << "Your Number: " << number2 << std::endl;
            
            // break the while loop
            break;
        }
    }

    std::cout << "\n";
    // taking string input : one word

    std::string str1;
    std::cout << "Enter a word: ";
    std::cin >> str1;

    // if input is not valid
    if(std::cin.fail()){
        std::cout << "Input process is failed!" << std::endl;

        // clearing buffer;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }else{
        std::cout << "Your Word: " << str1 << std::endl;
        
        // if enter more than one word then clearing buffer
        std::cin.clear(); // 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //
    }

    std::cout << "\n";
    // taking whole line as input at once
    std::string str2;
    std::cout << "Enter a string : ";

    // here we use getline()
    getline(std::cin>>std::ws, str2);

    std::cout << "Your string: " << str2 << std::endl;

    return 0;
}
