/*  
    Lauren Peca
    UTD ID 2010296107
    CS1337.0U1
    Assignment #3
    Problem #1
    
    Using C-strings with character testing functions and atoi

    Write a function called getEmployeeID.  It should ask the user to enter an
    employee ID.  Employee ID's must have two alphabetic characters followed by
    two digits.  The two alphabetic characters must be uppercase.  The two digits
    should sum to 10 or less.  For example, 55 is okay, but 56 is not.  If the input
    is not in this format, ask the user to enter it again.  Use getline for the
    input to limit how many characters are accepted.  The function should
    receive an array of five characters and return a pointer to this array.

    Write a main function that calls this function and prints the ID that was returned.
*/

#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>
using namespace std;

/* Function prototypes *******************************************************/

void displayPurpose();
void programComplete();
char *getEmployeeID();
void displayID(const char *);
bool validateID(char [], int);

/* Main function *************************************************************/

const                        // this is a const object...
class {
public:
  template<class T>          // convertible to any type
    operator T*() const      // of null non-member
    { return 0; }            // pointer...
  template<class C, class T> // or any type of null
    operator T C::*() const  // member pointer...
    { return 0; }
private:
  void operator&() const;    // whose address can't be taken
} nullptr = {};              // and whose name is nullptr

int main ()
{
    displayPurpose();
    char *employeeID = nullptr;
    
    employeeID = getEmployeeID();
    displayID(employeeID);
    
    programComplete();
    
    return 0;
}

/* Function definitions ******************************************************/

void displayPurpose()
{
    cout << "This program requests an employee's ID, validates the input, then" 
         << "displays the ID that was entered." << endl << endl;
}

void programComplete()
{
    cout << "The program is complete.";
}

char *getEmployeeID()
{
    int length = 4+1;
    char employeeID[length];
    bool validID;
    
    do
    {
        validID = false;
        
        cout << "Please enter an employee ID number: ";
        cin.getline(employeeID, length);
        
        validID = validateID(employeeID, length);
        
    } while (!validID);
    
    return employeeID;
}

void displayID(const char *ID)
{
    
}

bool validateID(char employeeID[], int size)
{
    int numberSum = 0;
    
    for (int count = 0; count < 2; count++)
    {
        if (!isalpha(employeeID[count])) {
            cout << employeeID[count] << ": Not alpha\n\n";
            return false;
        }
        if (!isupper(employeeID[count])) {
            cout << employeeID[count] << ": Not upper\n\n";
            return false;
        }
    }
    
    for (int count = 2; count < (size - 1); count++)
    {
        if (!isdigit(employeeID[count])) {
            cout << employeeID[count] << ": Not digit\n\n";
            return false;
        }
        char nextchar[2];
        strncpy(nextchar, &employeeID[count], 1);
        numberSum += atoi(nextchar);
        if (numberSum > 10){ 
            cout << employeeID[count] << ": Sum too great: " << numberSum << "\n\n";
            return false;
        }
    }
    
    return true;
}