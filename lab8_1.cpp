#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	float  loan , pay , interest , rate ,total , balance;
	cout << "Enter initial loan: ";
	cin >> loan;
	balance = total = loan ;
	cout << "Enter interest rate per year (%): ";
	cin >> interest;
	cout << "Enter amount you  can pay per year: ";
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
	for(int i = 1 ;; i++){
		loan = total= balance;
		rate = loan * ((interest * 0.01));
		total += rate;
		balance = total;
		//balance -= total < pay ? balance : pay;
		if(total < pay){
			pay = total;
			balance -= balance;
		}else{
			balance -= pay;
		}
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i; 
		cout << setw(13) << left << loan;
		cout << setw(13) << left << rate;
		cout << setw(13) << left << total;
		cout << setw(13) << left << pay;
		cout << setw(13) << left << balance;
		cout << "\n";	

		if(balance == 0) break;
	}

	return 0;
}
