#include <iostream>
using namespace std;
#include "GrowableArray.h"

GrowableArray::GrowableArray(int i,int j):Array(j-i+1) {
	low = i;
	high = j; 
}

GrowableArray::~GrowableArray() {
	
}

int GrowableArray::baseValue() {
int Array::baseValue() {
	return low;
}

int GrowableArray::endValue() {
	return high;
}

int& GrowableArray::operator [](int i) {
	return Array::operator [](i-low);
}

int GrowableArray::operator [](int i) const {	
	return Array::operator [](i-low);
}
