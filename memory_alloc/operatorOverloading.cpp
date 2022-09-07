#include<iostream>
// code for operator overloasding

using namespace std;

class Complex
    {
    int real , img;
    public:
//default constructor 
    Complex ()
        {
        real=0;
        img=0;
        }
//para construct

Complex(int x, int y)
    {
    real=x;
    img= y;
    }

void display()
    {
    cout<<"the real part : "<< real<< "and img part : "<<img<<endl;
    }

//overload the op;
Complex operator + (Complex ob)
    {
    Complex temp;
    temp.real=real+ob.real;
    temp.img=img+ob.img;
    return temp;
    }

Complex operator - (Complex ob)
    {
    Complex temp;
    temp.real=real-ob.real;
    temp.img=img- ob.img;
    return temp;
    }

Complex operator * (Complex ob)
    {
    Complex temp;
    temp.real=real*ob.real;
    temp.img=img* ob.img;
    return temp;
    }

Complex operator % (Complex ob)
    {
    Complex temp;
    temp.real=real % ob.real;
    temp.img=img % ob.img;
    return temp;
    }

Complex operator / (Complex ob)
    {
    Complex temp;
    temp.real=real / ob.real;
    temp.img=img / ob.img;
    return temp;
    }


Complex operator ^ (Complex ob)
    {
    Complex temp;
    temp.real=real ^ ob.real;
    temp.img=img ^ ob.img;
    return temp;
    }

Complex operator < (Complex ob)
    {
    Complex temp;
    temp.real=real < ob.real;
    temp.img=img < ob.img;
    return temp;
    }

Complex operator > (Complex ob)
    {
    Complex temp;
    temp.real=real > ob.real;
    temp.img=img > ob.img;
    return temp;
    }

void operator -();
//void operator --();
void operator ++();

Complex operator --()
    {
    Complex temp;
    temp.real = --real;
    temp.img=--img;
    return temp;
    }

Complex operator --(int)
    {
    Complex temp;
    temp.real = real--;
    temp.img=img--;
    return temp;
    }

};

/*void Complex ::operator --()
{
--real;
--img;
}
*/
void Complex :: operator ++()
    {
    real++;
    img++;
    }

void Complex ::operator -()
    {
    real=-real;
    img=-img;
    }


int main()
    {

    Complex c1(1,1),c2(5,5);

    c1.display();

    c2.display();

    Complex s1(5,4) ;  
  
    s1.display();

    -s1;

    s1.display();

    Complex s2(2,3),s4;

    s2.display();
//s4=--s2;
//s4.display();

//s4=s2--
//s4.display();
cout<<"_________________________________________"<<endl;
    Complex s3(9,3);

    s3.display();

    ++s3;

    s3.display();
//c2 = --c3;

/*Complex s5(9,3),s6;
s5.display();
s6=++s3;
s6.display();*/
   cout<<"_______________"<<endl; 
    Complex c3;
    
    c3=c1+c2;
  
    c3.display();

    --c3;

    c3.display();

    c3--;
  
    c3.display();

    Complex c4;

    c4=c2-c1;

    c4.display();

    Complex c5;

    c5=c2*c1;

    c5.display();
    
    Complex c6;

    c6=c2%c1;

    c6.display();

    Complex c7;

    c7=c2/c1;

    c7.display();

    Complex c8;

    c8=c2^c1;

    c8.display();

    Complex c9;

    c9=c2<c1;

    c9.display();

    Complex c10;

    c10=c2>c1;

    c10.display();



    return 0;
  
}
