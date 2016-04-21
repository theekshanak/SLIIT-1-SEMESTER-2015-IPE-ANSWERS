//Coded by Theekshana Kasthuriarachchi
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main(){
	int anum,n=1;
	double amount,tot,w,d;
	char t,cond;
	/*ofstream data("data.txt");

	if (!data){
		cout << "File error" << endl;
		return -1;
	}

	data  << "Account Number\t" << "Transaction Type\t" << "Amount" << endl;
	while (n==1){
		cout << "Enter account number,t type and amount: ";
		cin >> anum >> t >> amount;
		data << anum << "\t" << t << "\t" << amount << endl;
		cout << "Do you want to continue? ";
		cin >> cond;
		if (cond == 'y' || cond =='Y'){continue;}
		else if (cond=='n' || cond == 'N'){n=0;}
		else{ cout <<  "Invalid input" << endl;break;}
		
	}*/
	
	ifstream read("data.txt");
	
	if (read.fail()){
		cout << "Error\n";return -1;

	}

	while (!read.eof()){
		read >> anum >> t >> amount;
		if (t=='w'){
			w=w+amount;
		}else if (t=='d'){
			d=d+amount;
		}
	} 
	cout <<"Total withdrawl amount "  << setiosflags(ios::fixed) << setprecision(2) << w << endl;
	 cout <<"Total diposit  amount "  << setiosflags(ios::fixed) << setprecision(2) << d << endl;
return 0;
}
