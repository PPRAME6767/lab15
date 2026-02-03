#include <iostream>
using namespace std;

int main(){
int a = 5;
char b = 'A';
char &c = b;
void *x = &a;
void *y = &b;
void *z = &c;
cout << a << " "<< b << " "<< c << " "<< (void*)x << " "<< (void*)y <<" "<< (void*)z <<"\n";
cout << &a << " "<< (void*)y << " "<< (void*)z << " "<< &x << " "<< &y <<" "<< &z <<"\n";
*(char*)y = 'F';
cout << a << " "<< b << " "<< c << " "<< x << " "<< y <<" "<< z <<"\n";
*(char*)y = 'W';
cout << a << " "<< b << " "<< c << " "<< (void*)x << " "<< (void*)y <<" "<< (void*)z <<"\n";
*(int*)x = 6;
cout << a << " "<< b << " "<< c << " "<< (void*)x << " "<< (void*)y <<" "<< (void*)z <<"\n";
*(int*)x = 7;
cout << a << " "<< b << " "<< c << " "<< (void*)x << " "<< (void*)y <<" "<< (void*)z <<"\n";
	return 0;
}
