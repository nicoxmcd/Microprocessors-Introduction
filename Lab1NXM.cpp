//===================================================
// Nicole McDermott - CPE 390 LA - Summer Session 2
// Lab assignment 1 a, b, c
//===================================================
#include <iostream>
using namespace std;
int main(){
    //Part A, Write a program that prints your name,
    // compiles and run it on the command line. 
    string name; //Initialize string variable
    cout<<"Part A: What is your name? ";
    cin>>name; //Getting input for variable
    cout<<"Your name is " << name <<"!" << endl;

    //Part B, read 2 numbers from input, 
    // loop to print all numbers on a single line
    int start, end, i; //Initialize variables
    cout << "Part B: Enter two numbers:"<< endl;
    cin >> start >> end; //Input with start and end

    while (i <= (end-start)){ // iterate through the difference of start and end
        cout << start + i << " "; //Add the number to the start and add on iterations
        ++i; //Adding 1 to i
    } // returns the numbers on a single line

    //Part C, create multiplication table :)
    cout << endl << "Part C: Enter number:" << endl;
    int x, k, j, m; //initialize variable and incremental
    cin >> x; //input!
    
    for (int k=1; k<=x; k++){ //Vertical
        for (int j=1; j<=x; j++){ //Horizontal
           // m = k*j; //Multiplying incremental numbers 
            cout << k*j << "   "; //output
            if (k==1 and j==x){ //for adding the i and j
                cout << "\t i"; //when first row but last value, add a i at the end
            }
        }
        cout << endl;//next line after every row
         if (k==x){
                cout << endl << "j"; //after the last row then add j
        }
    }
} 
