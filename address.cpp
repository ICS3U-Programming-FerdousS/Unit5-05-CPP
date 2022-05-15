// Copyright (c) 2021 Ferdous Sediqi All rights reserved.
// Created by: Ferdous Sediqi
// Created on: May. 4, 2022
// This program asks the user for their address info 
// then use the 2 functions with and without apartment parameter
// to display address in mailing format.


#include <iostream>
// include string
#include <string>
// include algorithm to capitalize the letter
#include <algorithm>



// declare function with apartment number parameter
std::string formatAddress(std::string fullName, std::string streetNum, std::string
streetName, std::string city, std::string province, std::string postalCode, std::string aptNum) {
    std::cout << "" << std::endl;
    std::cout << "Your Canadian mailing address is: " << std::endl;
    std::cout << fullName << "\n";
    // check for apt-num input
    if (aptNum != "") {
        std::cout << aptNum << "-" << streetNum << " " << streetName << "\n";
        std::cout << city << " " << province << " " << postalCode << std::endl;
    }
}

// declare function without apartment number parameter
std::string formatAddressNoApt(std::string fullName, std::string streetNum, 
std::string streetName, std::string city, std::string province, std::string postalCode) {
    std::cout << "" << std::endl;
    std::cout << "Your Canadian mailing address is: " << std::endl;
    std::cout << fullName << "\n";
    std::cout << "-" << streetNum << " " << streetName << "\n";
    std::cout << city << " " << province << " " << postalCode << std::endl;
    
    
}

int main() {
    // variables
    std::string fullName;
    std::string livesInApt;
    std::string aptNum;
    std::string streetNum;
    std::string streetName;
    std::string city;
    std::string province;
    std::string postalCode;

    // ask user name
    std::cout << "Enter your full name: ";
    // function to get string with spaces
    std::getline(std::cin, fullName);
    // ask user if they live in an apartment
    std::cout << "Do you live in an apartment? ";
    std::cin >> livesInApt;
    
    // check if user live in an apartment or not and ask the questions
    if(livesInApt == "y") {
        std::cout << "Enter your apt-number: ";
        std::cin >> aptNum;
        // function to get to not skip next line
        std::cin.ignore();
        std::cout << "Enter your street number: ";
        std::cin >> streetNum;
        std::cout << "Enter your street name (i.e. main st, Lees , Rideau, etc): ";
        std::cin.ignore();
        std::getline(std::cin, streetName);
        std::cout << "Enter your city: ";
        std::cin >> city;
        std::cin.ignore();
        std::cout << "Enter your province (i.e. ON, AB, B.C.): ";
        std::cin >>  province;
        std::cout << "Enter your postal code (i.e. K1S 5J5): ";
        std::cin.ignore();
        std::getline(std::cin, postalCode);

        // conver the user input to capital letters
        transform(fullName.begin(), fullName.end(), fullName.begin(), ::toupper);
        transform(streetName.begin(), streetName.end(), streetName.begin(), ::toupper);
        transform(city.begin(), city.end(), city.begin(), ::toupper);
        transform(province.begin(), province.end(), province.begin(), ::toupper);
        transform(postalCode.begin(), postalCode.end(), postalCode.begin(), ::toupper);
        // calling function and display addres in mailing format
        formatAddress(fullName, streetNum, streetName, city, province, postalCode, aptNum);
    } else{
         std::cout << "Enter your street number: ";
        std::cin >> streetNum;
        std::cout << "Enter your street name (i.e. main st, Lees , Rideau, etc): ";
        std::cin.ignore();
        std::getline(std::cin, streetName);
        std::cout << "Enter your city: ";
        std::cin >> city;
        std::cin.ignore();
        std::cout << "Enter your province (i.e. ON, AB, B.C.): ";
        std::cin >>  province;
        std::cout << "Enter your postal code (i.e. K1S 5J5): ";
        std::cin.ignore();
        std::getline(std::cin, postalCode);
        std::cout << "";

        // conver the user input to capital letters
        transform(fullName.begin(), fullName.end(), fullName.begin(), ::toupper);
        transform(streetName.begin(), streetName.end(), streetName.begin(), ::toupper);
        transform(city.begin(), city.end(), city.begin(), ::toupper);
        transform(province.begin(), province.end(), province.begin(), ::toupper);
        transform(postalCode.begin(), postalCode.end(), postalCode.begin(), ::toupper);

        // calling function and display addres in mailing format
        formatAddressNoApt(fullName, streetNum, streetName, city, province, postalCode);
    }

    
}
