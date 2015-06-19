/*  
    Lauren Peca
    UTD ID 2010296107
    CS1337.0U1
    Assignment #3
    Problem #4
    
    Using C++-strings (string objects)
  
    Given these two arrays:
        string arr[] = { "Smith, Joe; 101 Maple; 75080", 
                         "Jones, Sue; 711 Pine; 75023",
                         "Adams, Bob; 117 Cedar; 75002", 
                         "Oliver, Pam; 19 N Elm; 75024", 
                         "Johnson, Ron; 1007 Campbell; 75083", 
                         "Jorgan, Jenny; 11 Waterview; 75083" };

        string zipcodes[] = { "75002, Allen, TX", 
                              "75023, Plano, TX", 
                              "75024, Plano, TX",
                              "75080, Richardson, TX", 
                              "75083, Richardson, TX" };   

    Write a function called printInfo that receives a string like the ones 
    in arr[], and a list of zipcodes like the ones in zipcodes[].  

    It should format and print output as shown below for the third entry 
    in arr[]:

        Bob Adams, 117 Cedar, Allen, TX 75002
   
    Write a main function that declares these arrays and calls this function 
    once for each entry in arr[] to print them all.
*/

#include <iostream>
#include <string>
using namespace std;

/* Function prototypes *******************************************************/

void displayPurpose();
void programComplete();
void printInfo(string [], string []);

/* Main function *************************************************************/

int main ()
{
    displayPurpose();
    
    string arr[] = { "Smith, Joe; 101 Maple; 75080", 
                     "Jones, Sue; 711 Pine; 75023",
                     "Adams, Bob; 117 Cedar; 75002", 
                     "Oliver, Pam; 19 N Elm; 75024", 
                     "Johnson, Ron; 1007 Campbell; 75083", 
                     "Jorgan, Jenny; 11 Waterview; 75083" };
    
    string zipcodes[] = { "75002, Allen, TX", 
                          "75023, Plano, TX", 
                          "75024, Plano, TX",
                          "75080, Richardson, TX", 
                          "75083, Richardson, TX" };  
    
    
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

void printInfo(string arr[], string zipcodes[])
{
    arrLength = 
}