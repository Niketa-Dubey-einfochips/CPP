// Example: of Constant member function

#include<iostream>
using namespace std;

class Cons_T
{
	int x;

	public:
	
	void set(int a)
	{
		x=a;
	}

	int get() const		 //constant member function
	{
		++x;				 // Error while attempting to modify the data member
		return x;
	}//The idea of const functions is not to allow them to modify the object on which they are called.
//so that accidental changes to objects are avoided.
};


main()
{
	Cons_T d;
	d.set(10);
	cout<<endl<<d.get();

	return 0;
}
