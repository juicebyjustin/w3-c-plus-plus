#include <iostream>
#include <string>

using namespace std;

#pragma region variables

int myNum = 5;               // Integer (whole number without decimals)
double myFloatNum = 5.99;    // Floating point number (with decimals)
char myLetter = 'D';         // Character
string myText = "Hello";     // String (text)
bool myBoolean = true;       // Boolean (true or false)  

string partTypes[4] = {"Air Filter", "Oil Filter", "Tires", "Transmission Filter"};

string makes[6] = {"Accord", "Chevy", "Ford", "Honda", "Subaru", "Suzuki"};

// 2d array to store the makes of the models
string models[6][5] = {
    { "TC" },
    { "Cruze" },
    { "Mustang GT" },
    { "S2000" },
    { "WRX" },
    { "Samari" },
};

#pragma endregion

void printPartTypesSelection(){
    cout << "\n\nEnter the number for the part you want to search:\n";

    for (int i = 0; i < sizeof(partTypes); i++)
    {
        if(partTypes[i] == "") break;

        cout << "\t(" << i << ") " << partTypes[i] << "\n";
    }
    
    cout << "\n";
}

void printSelectYear(){
    cout << "\n\nEnter year of car: ";
}

void printSelectMakes(){
    cout << "\n\nMakes\n";

    for (int i = 0; i < sizeof(makes); i++)
    {
        if(makes[i] == "") break;

        cout << "\t(" << i << ") " << makes[i] << "\n";
    }
    cout << "\n";

    cout << "Enter the number for the make of the car: \n";
}

void printSelectModels(int make){
    cout << "\n\nModels for " << makes[make] << "\n";
    
    for (int i = 0; i < sizeof(models[make]); i++)
    {
        if(models[make][i] == "") break;

        cout << "\t(" << i << ") " << models[make][i] << "\n";
    }
    cout << "\n";

    cout << "Enter the number for the model of the car: \n";
}

void searchForPart(int part, int year, int make, int model){

}

// src: https://www.programiz.com/cpp-programming/string-int-conversion
int convertStringtoInt(string input){
    int num = std::stoi(input);
    return num;
}

int main(){
    printPartTypesSelection();
    printSelectModels(2);
    printSelectMakes();
    cout << "jjjjjj u    u iiiii ccccc  eeeee\n";
    cout << "   j   u    u   i   c      e\n";
    cout << "   j   u    u   i   c      eeeee\n";
    cout << "j  j   u    u   i   c      e\n";
    cout << "jjjj    uuuu  iiiii ccccc  eeeee\n\n\n";

    cout << "Welcome to the Car Part Finder.\n";
    cout << "You can find part numbers for wiper blades, oil filters, & air filters.  \n\n";

    printPartTypesSelection();

    string input = "";
    int num = -1, count = 0, year = 1970, make = -1;
    cin >> input;

    while(input != "q"){
        printPartTypesSelection();
        cout << "\n";

        // using stoi() to store the value of str1 to x
        num = convertStringtoInt(input);
        
#if DEBUG
        cout << "\n\nYou entered: " << num< "\n\n";
#endif
        cout << "Select year:";

        printSelectYear();
        cin >> year;

        printSelectMakes();
        cin >> make;

        // select part type
        // select year
        // select make
        // select model
        // select trim level
        // show part number

        switch(num) {
            case 1:
                break;
            default:
                break;
        }

        cin >> input;
        count++;
    }

    return 0;
}
