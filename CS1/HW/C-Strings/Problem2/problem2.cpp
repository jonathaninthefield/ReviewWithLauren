/*  
    Lauren Peca
    UTD ID 2010296107
    CS1337.0U1
    Assignment #3
    Problem #2
    
    Using C-strings with strlen, strcpy, strcat, strstr

    Given this array:
        char *arr[] = { "joe smith, joe, aol.com", "sue jones, sue, gmail.com",
            "bob adams, bob.adams, yahoo.com", "pam oliver, pamo, att.net",
            "ron johnson, jron, sbcglobal.net", "jenny jorgan, jj1, msn.com" };

    Write a function called printInfo that formats and prints a string like 
    the ones in the array.  For example, the third entry should print like this:

        Bob Adams, bob.adams@yahoo.com
   
    Write a main function that declares this array and calls this function once 
    for each entry in the array to print them all.
*/

#include <iostream>
using namespace std;

/* Function prototypes *******************************************************/

void displayPurpose();
void programComplete();
void printInfo(char *[], int);

/* Main function *************************************************************/

int main ()
{
    displayPurpose();
    const int SIZE = 6;
    char *arr[] = { "joe smith, joe, aol.com", "sue jones, sue, gmail.com",
            "bob adams, bob.adams, yahoo.com", "pam oliver, pamo, att.net",
            "ron johnson, jron, sbcglobal.net", "jenny jorgan, jj1, msn.com" };
    
    // size = sizeof(arr);  Get size of the array!
    
    for (int count = 0; count < SIZE; count++)
    {
        printInfo(arr[count], count);
    }
    
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

void printInfo(char *array[], int index)
{
    char name[15], emailName[15], emailProvider[15], formattedInfo[45];
    int size = strlen(array);
    char *nameEnd = strstr(array, ", "),
         *emailNameEnd = strstr(array+nameEnd, ", "),
    int emailProviderEnd = size - 1;
    
    strcpy(name, array, (nameEnd - array));
    strcpy(emailName, nameEnd, (emailNameEnd-nameEnd));
    strcpy(emailProvider, emailNameEnd, (size-emailNameEnd));
    
    
    
    
    cout << "Printing formatted info stored at index " << index << "." << endl;
    
    
    
    
    
    cout << endl << endl;
}

// Use strstr to find commas and break up the string.