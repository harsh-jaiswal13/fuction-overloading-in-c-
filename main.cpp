/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class Book
{
    public:
    int bookid,bookpages;
    float cost;
    void getdetail()
     {cout<<"enter bookId , bookpages and cost"<<endl;
      cin>>bookid>>bookpages>>cost;
     }
    void putdetail()
    { cout<<"bookId="<<bookid<<endl<<"bookpages="<<bookpages<<endl<<"cost="<<cost<<endl;
    }
};

int main()
{   Book b1,b2;
    b1.getdetail();
    b1.putdetail();


    cout<<"Hello World";

    return 0;
}
