// Omar Vergara
// 03/23/24
// Loops and files 
// Sum of all numbers

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    // Variables 

    int count = 0; // to count numbers 
    double number;  // to hold a nubmer from the file 
    double total = 0;  // accumulator set to 0 to start 
    double average;  // to hold the average

    // create a flie stream object 
    ifstream myFile;  // it's an input file , hence if stream called myfile

    // open the file 
    myFile.open("Random.txt");

    // read the numbers from the file
    while (myFile >> number)
    {
         // we read a number ! increment the counter
         count++; 

         // add the number to the accumulator 
         total += number; 

    }
    
    // close the file 
    myFile.close(); 

       
    // calculate the average of the numbers
    average = total / count; 
    
    // display the results 
    cout << "Number of numbers: " << count << endl; 
    cout << "Sum of the number: " << total << endl; 
    cout << "Average of the numbers: " << average << endl; 



    return 0;
}
