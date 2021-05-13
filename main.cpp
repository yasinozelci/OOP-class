Main.cpp


#include<iostream> 
#include"Course.h" 
using namespace std;
int main() {
Course course("COMP", "Object-Oriented Programing", 4); 
cout << course.getInfo() << endl;
return 0;
}

