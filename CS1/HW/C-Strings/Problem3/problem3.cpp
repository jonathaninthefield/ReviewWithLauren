/*  
    Lauren Peca
    UTD ID 2010296107
    CS1337.0U1
    Assignment #3
    Problem #3
    
    Using C-strings with functions

    Given this array:
        char arr[6][25] = { "Smith, Joe", "Jones, Sue", "Adams, Bob", 
                         "Oliver, Pam", "Johnson, Ron", "Jorgan, Jenny" };

    Write a function called firstLast that receives a name and changes 
    the format to first name followed by last name.  For example, the 
    third entry becomes:

        Bob Adams
   
    Write a main function that declares this array and calls this function once
    for each entry in the array, then prints them all from the array.
*/

#include <iostream>
using namespace std;

/* Function prototypes *******************************************************/

void displayPurpose();
void programComplete();
void firstLast(char [][]);

/* Main function *************************************************************/

int main ()
{
    displayPurpose();
    
    char arr[6][25] = { "Smith, Joe", "Jones, Sue", "Adams, Bob", 
                         "Oliver, Pam", "Johnson, Ron", "Jorgan, Jenny" };
    
    
    programComplete();
    
    return 0;
}

/* Function definitions ******************************************************/

void displayPurpose()
{
    cout << "Displays the program's purpose." << endl << endl;
}

void programComplete()
{
    cout << "The program is complete.";
}

void firstLast (char array[][])
{
    char firstName[15],
         lastName[15],
         fullName[30];

    firstName = (strcpy(array, ))
         
         
         
         
}