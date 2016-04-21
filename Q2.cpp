#include <iostream>
using namespace std;
#include <iomanip>
int main(){
	char pkg,q;
	int opt;
	double total;
	do{
		cout << "Enter package code: " ;
		cin >> pkg;
		if (pkg == 'B' || pkg == 'S' || pkg == 'M' || pkg == 'C'){
			cout << "Enter option number: ";
			cin>> opt;
			if (opt<=4 && opt >0){
				if(pkg == 'B'){
					switch (opt){
						case 1:	
							total=40000*1;
							cout << "Total expenditure = " << setiosflags(ios::fixed) << setprecision(2) <<  total << endl;
							break;
						case 2:	
							total=35000*2;
							cout << "Total expenditure = " << setiosflags(ios::fixed) << setprecision(2) <<  total << endl;
							break;
						case 3:	
							total=30000*4;
							cout << "Total expenditure = " << setiosflags(ios::fixed) << setprecision(2) <<  total << endl;
							break;
						case 4:	
							total=25000*8;
							cout << "Total expenditure = " << setiosflags(ios::fixed) << setprecision(2) <<  total << endl;
							break;
					}
							
				}else if(pkg == 'S'){
					switch (opt){
						case 1:	
							total=60000*1;
							cout << "Total expenditure = " << setiosflags(ios::fixed) << setprecision(2) <<  total << endl;
							break;
						case 2:	
							total=50000*2;
							cout << "Total expenditure = " << setiosflags(ios::fixed) << setprecision(2) <<  total << endl;
							break;
						case 3:	
							total=45000*4;
							cout << "Total expenditure = " << setiosflags(ios::fixed) << setprecision(2) <<  total << endl;
							break;
						case 4:	
							total=40000*8;
							cout << "Total expenditure = " << setiosflags(ios::fixed) << setprecision(2) <<  total << endl;
							break;
					}
	
				}else if(pkg == 'M'){
					switch (opt){
						case 1:	
							total=65000*1;
							cout << "Total expenditure = " << setiosflags(ios::fixed) << setprecision(2) <<  total << endl;
							break;
						case 2:	
							total=63000*2;
							cout << "Total expenditure = " << setiosflags(ios::fixed) << setprecision(2) <<  total << endl;
							break;
						case 3:	
							total=60000*4;
							cout << "Total expenditure = " << setiosflags(ios::fixed) << setprecision(2) <<  total << endl;
							break;
						case 4:	
							total=55000*8;
							cout << "Total expenditure = " << setiosflags(ios::fixed) << setprecision(2) <<  total << endl;
							break;
					}
	
				}else if(pkg == 'C'){
					switch (opt){
						case 1:	
							total=70000*1;
							cout << "Total expenditure = " << setiosflags(ios::fixed) << setprecision(2) <<  total << endl;
							break;
						case 2:	
							total=65000*2;
							cout << "Total expenditure = " << setiosflags(ios::fixed) << setprecision(2) <<  total << endl;
							break;
						case 3:	
							total=60000*4;
							cout << "Total expenditure = " << setiosflags(ios::fixed) << setprecision(2) <<  total << endl;
							break;
						case 4:	
							total=50000*8;
							cout << "Total expenditure = " << setiosflags(ios::fixed) << setprecision(2) <<  total << endl;
							break;
					}
	
				}
			}else{
				cout << "Invalid option number\n";
			}
		}else{
			cout << "Invalid package code\n";
		}
		cout << "Do you need to continue? (y/n): ";
		cin >> q;
	}while (q=='y' || q == 'Y');
return 0;
}
