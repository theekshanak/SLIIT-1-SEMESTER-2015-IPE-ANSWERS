//coded by Theekshana Kasthuriarachchi
#include <iostream>
using namespace std;
bool validateinput(int n, int k){

	if ((n>=0) && (k>=0) && (n>k)){
		return true;

	}else{
		return false;
	}

}
int getfactorial(int n){
	int tot=1;
	
	for (int a=n;a>=1;a--){
		tot=tot*a;
	}

	return tot;
}
int main(){
	int n,k;
	double ans;
	cout << "Enter n and k: ";
	cin >> n >> k;
	if (validateinput(n,k)==1){
			
		 ans=getfactorial(n)/(getfactorial(k)*getfactorial(n-k));
		cout << ans<< endl;	
	}else if(validateinput(n,k)==0){
		cout << "Invalid input values" << endl;

	}

return 0;
}
