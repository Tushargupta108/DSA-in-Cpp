#include<bits/stdc++.h>
using namespace std;
class customer{
   string name;
   int acc_number;
   int balance;
   static  int totalcustomer;
//    static is used to make common elements to all object

   public:
   customer(string name,int acc_number,int balance){
    // construtor used for object inintialization
    this->name=name;
    this->acc_number=acc_number;
    this->balance=balance;
    totalcustomer++;
   }

    void display(){
        cout<<name<<" "<<acc_number<<" "<<balance<<" "<<totalcustomer<<endl;
    }
     static int getTotalCustomer() {
        return totalcustomer;
    }
};
// inintalise static keyword
int customer::totalcustomer=0;
// return type -> class name->variable name


int main(){
    customer A1("Tushar",3534,1000000000);
    customer A2("rohan",1234,31242);
    // these are the no of customers in a bank but now we have to find total numbers of customer in abank 
    // so need a variable which are common to both obj  all obje ts should points to it 
    // and can change according from every object 
    A1.display();
    A2.display();
     cout << "Total customers: "
         << customer::getTotalCustomer()<<endl;

}    
// 1. What is a static function?
// A static member function is a function that belongs to the class itself, rather than to a particular object.
// The :: means we are accessing something belonging to the class.
// 3. Why make the function static?
// Ask yourself:
// Does getTotalCustomer() need a particular customer?
// No.
// You don't need:
// A1.getTotalCustomer();
// because the total is not specific to Tushar.
// It belongs to the whole customer class.
// Therefore:
// customer::getTotalCustomer();
// // makes more sense.

// static void show() {      A static member function does not have access to non-static data members directly.

//         cout << totalcustomer;  // ✅
//         cout << name;           // ❌
//     }
// | Normal member function                 | Static member function                |
// | -------------------------------------- | ------------------------------------- |
// | Belongs to object                      | Belongs to class                      |
// | Called using object                    | Can be called using class             |
// | `A1.display()`                         | `customer::getTotalCustomer()`        |
// | Has `this` pointer                     | No `this` pointer                     |
// | Can access static + non-static members | Directly accesses only static members |
