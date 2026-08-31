#include<iostream>
#include<string>

/*
This program introduce std::cin.eof(), std::cin.fail(), std::cin.bad() .
*/

int main(){

    std::string line;

    std::cout << "Enter a text: ";

    // This loops safely loops untile an error or  EOF occurs
    while (getline(std::cin, line))
    {
        std::cout << "You entered : " << line << "\n";

    }

    // Determine what cuased the loop to stop
    if(std::cin.eof()){
        std::cout << "End of file reached successfully.\n";
    }else if(std::cin.fail()){
        std::cout << "A non-fatal read error occured.\n";
    }else if(std::cin.bad()) {
        std::cout << "An unrecoverable stream error occured.\n";
    }

    return 0;
}
