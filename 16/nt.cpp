#include "nt.h"

 void fun (std::ostream& os, const std::string& s){
    os<<"\""<<s<<"\" ";
}
void fun (std::ostream& os, const char * const c) {
    os << "[" << c << " " << reinterpret_cast<const void *>(c) << "]";
}

void fun (std::ostream& os, const my_class& c) {
    os << "{" << c <<" "<< &c <<  "}";
}