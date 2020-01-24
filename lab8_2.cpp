#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int r , int c){
	if(r <= 0 || c <= 0)
		cout << "Invalid Input";
	else{
		for(int i = 0 ; i < r ; i++){
			for(int j = 0 ; j < c ; j++){
				cout << 'o';
			}
			cout << endl;
		}
	}
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
