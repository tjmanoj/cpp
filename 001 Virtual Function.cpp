#include <bits/stdc++.h>
using namespace std;

class Base {
public:
  virtual void show(){
    cout << "Base class" <<endl;
  }
};
class Derived1: public Base{
public:
  void show(){
    cout << "Derived class 1" <<endl;
  }
};
class Derived2: public Base{
public:
  void show(){
    cout << "Derived class 2" <<endl;
  }
};

int main() {
  Base *ptr;
  ptr = new Derived1();
  ptr->show();              // it will call the base class
  
  ptr = new Derived2();
  ptr->show();              // base class call since it is not hidden
                            // use the virtual keyword in the show function base class
}






