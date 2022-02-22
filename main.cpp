/* Name: Madeline Whitton
Date: 2/22/2022
Section: 11
Assignment: 7
Due Date: 2/22/2022
About this project:
Assumptions:
All work below was performed by Madeline Whitton */

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

const int NUM_AVENGERS = 173;
int getValidNumAppearances();
int getValidAvenger();
void displayNumAppearances(int[]);
void ChangeANumAppearances(int []);
void displayMaxNumAppearances (int []);
void DisplayMenuOption();
int getValidOptionInput(int num);


int main(){
    int option = 0;
    int numAppearances[] = {1269, 1165, 3068, 2089, 2402,
                            612, 3458, 1456, 769, 1214,
                            115, 741, 780, 1036, 482,
                            1112, 160, 1886, 332, 557,
                            197, 106, 692, 109, 100,
                            132, 108, 100, 156, 254,
                            935, 576, 141, 355, 933,
                            348, 206, 533, 374, 2,
                            2305, 83, 402, 352, 565,
                            112, 218, 149, 168, 1561,
                            217, 158, 86, 41, 68,
                            70, 61, 2125, 1761, 293,
                            36, 22, 31, 34, 33,
                            4, 47, 7, 3, 16,
                            575, 58, 237, 4333, 126,
                            158, 355, 517, 202, 31,
                            28, 50, 27, 18, 302,
                            330, 101, 43, 126, 24,
                            886, 159, 3130, 241, 67,
                            23, 103, 123, 110, 160,
                            132, 121, 59, 629, 1324,
                            236, 663, 525, 205, 108,
                            359, 299, 333, 88, 369,
                            380, 545, 6, 126, 417,
                            31, 310, 40, 26, 63,
                            2, 73, 22, 153, 73,
                            59, 66, 43, 55, 108,
                            64, 62, 94, 18, 81,
                            1598, 1375, 746, 561, 592,
                            679, 491, 65, 55, 44,
                            65, 877, 176, 24, 25,
                            35, 44, 78, 22, 77,
                            115, 77, 69, 173, 75,
                            12, 14, 13, 198, 29,
                            45, 49, 35};

    cout << "Welcome to the Avengers number program\n";
    DisplayMenuOption();
    cin >> option;
    getValidOptionInput(option);

        do{
            switch(option){
                case 1: displayNumAppearances(numAppearances);
                case 2: cout << "hell\n";
                case 3: cout << "hell\n";
            }
            getValidOptionInput(option);
        }

        while (option != 4);
            return 0;

}

void DisplayMenuOption(){
        cout << "1) Display the number of appearances\n"
                "2) Change the number of appearances for an Avenger\n"
                "3) Display the max number of appearances\n"
                "4) Quit\n"
                "Select an option (1..4)..";
    }

int getValidOptionInput(){
    int num = 0;
    while(num < 1 || num > 4){
        DisplayMenuOption();
        cin >> num;
    }
    return num;
}

int getValidNumAppearances(){

}

int getValidAvenger(int num){
    while(num < 1 || num > NUM_AVENGERS){
        cout << "Please enter in a valid Avenger number...\n";
        cin >> num;
    }
}

void displayNumAppearances(int numAppearances[]){
    /*
     * Write a function called displayNumAppearances
     * that takes the number of appearances array as a
     * parameter and displays the number of appearances in
     * the format in the sample run below. (15 points)
     */
    //Format output
    cout << fixed << setprecision(2);

    //current element in vector:
    for (int count = 0; count < NUM_AVENGERS; count++){
        cout << numAppearances[count] << endl;
    }
}

void ChangeANumAppearances(int numAppearances[NUM_AVENGERS]){
    /*
     * Write a function called ChangeANumAppearances that
     * takes the number of appearances array as a parameter,
     * it allows the user to enter in a valid number of appearances
     * and a valid avenger. It then stores the number of appearances
     * under the selected avenger in the number of appearances array.
     * (20 points)
     */
}

void displayMaxNumAppearances(int numAppearances[NUM_AVENGERS]){

}