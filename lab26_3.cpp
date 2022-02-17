#include<iostream>
#include<set>
using namespace std;

int count(int d[],int size){
	set<int> inter;
	for(int i=0;i<size;i++){
		inter.insert(d[i]);
	}
	return inter.size();
}

int main(){	
	int data[] = {1,2,4,5,4,8,2,1,2,4,6,1,4,4,4,2,1,0,12}; 
	
	cout << "There are " << count(data,sizeof(data)/sizeof(int)); 
	cout << " different numbers in data.";
	
	return 0;
}
