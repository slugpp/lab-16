#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a,int &b,int &c,int &d){
	int allow[4]={1,1,1,1};
	int arr[4]={a,b,c,d};
	int shuffled[4];
	int i=0;
	while(i<4){
		int ran=rand()%4;	
		if(allow[ran]==1){
			allow[ran]=0;
			shuffled[i++]=arr[ran];
		}
	}i=0;
	a=shuffled[i++];
	b=shuffled[i++];
	c=shuffled[i++];
	d=shuffled[i++];
}