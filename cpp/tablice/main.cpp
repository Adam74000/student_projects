#include <iostream>

using namespace std;

int main(){
	cout<<"witaj swiecie"<<endl;
        int t[2];
        t[0] =22;
        t[1] =38;
        for(int i=0; i<2;i++){
                cout<<t[i]<<endl;
        }
	int c[3][3];
	c[0] [0]=5;
	c[1] [1]=16;
	c[2] [2]=34;
	c[3] [3]=63;
	for(int y=0;y<5;y++){
		for(int x=0; x<5; x++){
			cout<<c[y][x]<<endl;
	}
	}
	return 0;
}
