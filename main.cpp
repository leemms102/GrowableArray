#include "Array.h"
#include "GrowableArray.h"
#include <iostream>
using namespace std;


int main(){
	cout <<"GrowableArray<int> Test" << endl;
	GrowableArray<int> g(10);
	int i;
	for(i = 0; i <g.length(); i++)
		g[i] = 2*i + 3;
	cout << "g(10)";
	g.print();

	g[13] = 13;
	cout<<"g(20)";
	g.print();

}

