#include <iostream> 
#include <string> 
#include "StackV.h"	//Use vector implementation of Stack

using namespace std;
        
        
string reverseString(const string& str)
{
    string result;
    Stack<char> stk;
    
    for (auto ch : str ) 
        stk.push(ch);

    
    while( stk.size() > 0)
    {
        result +=  stk.top();
        stk.pop();
    }

   return result;
}


int main()
{         
    string a_string = "COMP2115 here we come!!!";
     
    cout<<"\""<<a_string<<"\""<<endl<<"\""<<reverseString(a_string)<<"\"";
	    
    return 0;
        
}
