#include <iostream>
#include <iomanip>
using namespace std;

const char USERNAME = 'a';
const int PASSWORD = 5;
char usr;
int countPrint, countAvg, pas;

//Login Function
int loginChk();

//Program Functions
   //Rectangle Printer
void print_rectangle();                  
int heightChecker(int h);                 
int widthChecker(int h, int w);

   //Average Calculator
double average_input();

//FUNCTIONS_________________________________________________________________________________________________________________________________

//LoginCheck Function
int loginChk(){
   int count = 0;
   bool flag = true;
   while (flag && count < 3){
      cout << "Username: ";
      cin >> usr;
      cout << "Password: ";
      cin >> pas;
      if ((usr == USERNAME && pas == PASSWORD))
         flag = false;
      else{
         count ++;
         cout << "\n" << "Username or Password Invalid" << endl; 
         cout << 3-count << " Tries left" << "\n" << endl;	
         }
      }		
   if (count == 3){
      cout << "Sorry, Bye!" << endl;
      return 1;
      }
}

//PROGRAM FUNCTIONS:
   //RECTANGLE PRINTER
void print_rectangle(){
   cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
   cout << setw(70) << setfill('*') << "*" << endl;
   cout << setw(48) << setfill(' ') << "Rectangle Printer (Ver .5)" << endl;
   cout << setw(70) << setfill('*') << "*" << endl;
   cout << "\n\n";      
   cout << setw(50) << "This tool will allow you to print rectangles with a given height and\nwidth. This project has been supported by the author, and is released\nunder Creative Commons. \nThis version can only allow height values within the range of 10 and\n30 and width values within the range of 15 and 35.\n\nNote that the width input MUST be larger than the height input." << endl;      
   int h, w;
   cout << "\nAt this time, please enter the height and width values you wish to\nuse in printing the rectangle." << "\n" << "height = ";
   h = heightChecker(h);
   cout << "\nwidth = ";
   w = widthChecker(h, w);
   int rectChoice;     
   cout << "\n\nInput 1 if you wish to print a hollow boundary of a rectangle\nInput 2 if you wish to print a filled rectangle\nInput: ";
   cin >> rectChoice;   
   cout << "Printing..." << endl;
   cout << "\n\n\n\n\n\n\n\n\n" << endl;
   
   if (rectChoice == 1){
      cout << setw(w) << setfill('*') << '*' << endl;
      for(int i = 0; i < h-2; i++){
         cout << "*" << setw(w-1) << setfill(' ') << '*' << endl;
         }
      cout << setw(w) << setfill('*') << '*' << endl;  
      }
   
   else if (rectChoice == 2){
      for(int i = 0; i < h; i++){
         cout << setw(w) << setfill('*') << '*' << endl;
         }
      }   
  
   cout << "\n\nRectangle Printed! Enter '1' to continue." << endl;
   int x;
   cin >> x;
   countPrint+=x;
}              


int heightChecker(int h){
   cin >> h;
   while (h < 10 || h > 30){
      cout << "ERROR 50: OUT_OF_BOUND\n" << endl;
      cout << "height = ";
      cin >> h;
      }
   return h;
}   
                  

int widthChecker(int h, int w){
   bool flag = true;
   while (flag){
      cin >> w;
      if (w < 15 || w > 35){
         cout << "ERROR 50: OUT_OF_BOUND" << endl;
         cout << "width = ";
         }
      else if (h >= w){
         cout << "ERROR 47: HEIGHT_LARGER_OR_EQUAL_VALUE_THAN_WIDTH" << endl;
         cout << "width = ";
         }
      else
         flag = false;  
      }  
   return w;     
}

   //END OF RECTANGLE PRINTER
   
   //AVERAGE CALCULATOR
double average_input(){
   cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
   cout << setw(50) << setfill('#') << '#' << endl;
   cout << setw(23) << setfill(' ') << "  ,dP" << '"' << '"' << "d8b," << endl;
   cout << setw(20) << setfill(' ') << " d"<< '"' << "   d88" << ' ' << "8b" << endl;
   cout << setw(31) << setfill(' ') << "I8    Y88a88)" << endl;
   cout << setw(30) << setfill(' ') << "`Y, a  )888P" << endl;
   cout << setw(20) << setfill(' ') << "  "<< '"' << "b,,a88P" << '"' << endl;
   cout << setw(36) << setfill(' ') << "Delphari Corporation\n" << setw(46) << setfill(' ') << "Average Calculator Beta (rel 0.9455.75)\n" << endl;
   cout << left << setw(14) << "Copyright 2013" <<  right << setw(36) << "Logo by Normand Veilleux" << endl;
   cout << "\n\n" << "Welcome! This calculator has been developed under\nthe design team at Delphari. It has been tested and\noperates with an unmatched precision.\n\nThis calculator will accurately calculate the\nsummation average of a limitless number of inputs." << endl;
   cout << "Enter '1' to continue" << endl;
   int x;
   cin >> x;
   cout << "\n\n\n\n" << "This program will now calculate your average. Please enter your inputs. To end input thread, input '-1'. " << endl;
   cout << "Input : ";
   cin >> x;
   int temp = 0;
   double avg = 0.0; 
   int dubCount = 1;
   while (x >= 0){
      avg = (double)(x + temp)/dubCount;
      cout << right << setw(20) << setfill(' ') << fixed << showpoint << setprecision(2) << "Average Input : " << avg << endl;
      temp += x; 
      dubCount ++;
      cout << "\n" << "Input : ";
      cin >> x;
      }
   countAvg ++;
   cout << "\n\nFinal Output:" << endl;
   return avg;   
   } 
   //END OF AVERAGE CALCULATOR
//END OF FUNCTIONS__________________________________________________________________________________________________________________________

int main(){
   int choice;
   while (true){
      bool contFlag = true;
      cout << "\n" << setw(22) << setfill(' ') << "Welcome!" << endl;
      cout << "Enter '1' to continue and 0 to exit" << endl;
      cin >> choice;
     
      if (choice == 0){
         cout << "Count for Rectangle Printer : " << countPrint << "\nCount for Average Calculator : " << countAvg << endl;
         cout << "Goodbye!" << endl;
         return 0;
         }
   	  
   	//Login
      cout << setw(20) << "Please enter your Username and Password\n" << endl;
      int err = loginChk();
      if (err == 1)
         return 0;
   	
   	//PGRM
      while (contFlag == true){
         cout << "\nHello " << usr << ", what would you like to calculate?" << endl;
         cout << "\n" << setw(22) << "Type 1 for Rectangle Printer \nType 2 for Average Calculator \nType 0 to log out" << endl;
         	
         cin >> choice;
         switch(choice){
            case 0: cout << "Logging out..." << endl;
                    contFlag = false;
                    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\nLogged out successfully!\n\n" << endl;
                    continue;
            case 1: print_rectangle();
                    break; 
            case 2: double average = average_input();
                    cout << "Average Input : " << average << endl;
                    break;             
            }
         cout << "\n\nWould you like to return to the main menu?\nEnter '1' for yes and '0' for no." << endl;
         cin >> choice; 
         if (choice == 0)
            contFlag = false;
            cout << "Logging out..." << "\n\n\n\n\n\n\n\n\n\n\n\n\n\nLogged out successfully!\n\n" << endl;           
         }
      }
   }