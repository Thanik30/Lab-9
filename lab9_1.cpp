
#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,rate,pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay ;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	double in = loan*rate/100;
	double total = loan+(loan*rate/100),NB = total - pay;
	
    
    for(int i = 1; NB > 0 ; i++ ){
        cout << fixed << setprecision(2); 
        cout << setw(13) << left << i; 
        cout << setw(13) << left << loan;
        cout << setw(13) << left << in;
        cout << setw(13) << left << total;
        cout << setw(13) << left << pay;
        cout << setw(13) << left << NB;
        cout << "\n";
        loan = NB;
        in = NB*rate/100;
        total = NB+(NB*rate/100);
        NB = total - pay;
        if(total < pay){
        	  
        	in = loan*rate/100;
        	total = loan+(loan*rate/100);
        	pay = total;
        	NB = 0;
        	cout << fixed << setprecision(2); 
            cout << setw(13) << left << i+1; 
            cout << setw(13) << left << loan;
            cout << setw(13) << left << in;
            cout << setw(13) << left << total;
            cout << setw(13) << left << pay;
            cout << setw(13) << left << NB;
            cout << "\n";
            loan =NB;
        	    
        	    
        }
        
        	
    }
    if(NB < 0){
        NB =0;
        pay = total;
        cout << fixed << setprecision(2); 
        cout << setw(13) << left << 1; 
        cout << setw(13) << left << loan;
        cout << setw(13) << left << in;
        cout << setw(13) << left << total;
        cout << setw(13) << left << pay;
        cout << setw(13) << left << NB;
        cout << "\n";
    
    }
    

    	
	
	
	return 0;
}
