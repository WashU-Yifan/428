#include "9.h"
#define success 0;
size_t MyClass::NumObject;
int main(){
	//size_t MyClass::NumObject=0;
    	//MyClass O1,O2(O1);
    MyClass *myarray=new MyClass[10];
	delete myarray;
    return success;
}
