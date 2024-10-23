#include <iostream>

using namespace std;

int main(){
	cout<<"podaj temperature"<<endl;
        int x ;
	cin>>x;
        if(x>=20){
		cout<<"jest cieplo";
	}else{
		int i = 20-x;
		for(int i=0; i<10; i++){
		cout<<"dodaje rafala do pieca i jest cieplej o 1 stopien";
		}
	}
	return 0;

}

