#include <iostream> 
#include <string>
#include "strextra.h"
#include <unistd.h>


using namespace std; 


int main(){

    char myString1[500] = {};
    char myString2[500] = {};
    char a;
    char b;  

    cout << "Please enter your first string\n"; 

    cin.getline(myString1, 500);


    cout << "Please enter your second string\n";

    cin.clear();

    cin.getline(myString2,500);

    cout << "Would you like to compare Spaces(Y/N)\n";

    cin >> a; 

    cout << "Would you like to compare Punctuation(Y/N)\n";

    cin >> b;

    cout << "Comparing the two strings.......\n"; 


    if(a == 'N' && b == 'Y'){
        cout << "My return value is " 
	     << strcmp_ncase(myString1,myString2,a) 
    	     << "\n";
    }else if(a == 'Y' && b == 'N'){
        cout << "My return value is "
	     << strcmp_ncase(myString1,myString2,b)
	     << "\n";
    }else if(a == 'N' && b == 'N'){
        cout << "My return value is " 
	     << strcmp_ncase(myString1, myString2,a,b)
	     << "\n";
    }else if(a == 'Y' && b == 'Y'){
        cout << "My return value is " 
             << strcmp_ncase(myString1, myString2)
	     << "\n";

    }

}