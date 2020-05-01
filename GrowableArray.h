#ifndef MTT
#define MTT
#include "Array.h"
#include <iostream> 
using namespace std;

template <class T>
class GrowableArray : public Array<T>{
	public :			
		GrowableArray(int size): Array<T>(size) {
			}		
		

		T& operator[](int i){
		static T temp;
		if(i >=0 && i < this->len)
			return *((this->data) + i);

		else if(i > this->len && i < (this->len)*2){
			T* temp = new T[(this->len)*2];

			for(int j = 0; j < this->len; j++){
				temp[j] = *((this->data) + j);
			}
			for(int j = this->len; j < (this->len)*2; j++){
				temp[j] = 0;
			}

			delete[] this->data;

			this->data = temp;
			this->len *= 2;

			return *((this->data) + i);

		}
	}
};


#endif
