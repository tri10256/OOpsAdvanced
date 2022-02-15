#include<bits/stdc++.h>
using namespace std;

//////BinaryOperatorOverloading//
class Complex{
  private:
  int a,b;

  public:
  void setData(int x,int y){
	  a = x;
	  b = y;
  }
  void showData(){
	  cout<<"a->"<<a<<" "<<"b->"<<b<<endl;
  }
  Complex operator+(Complex c){
     Complex temp;
	 temp.a = a + c.a;
	 temp.b = b + c.b;
	 return temp;
  }
  Complex operator-(Complex c){
	  Complex temp;
	  temp.a = a-c.a;
	  temp.b = a-c.b;
	  return temp;
  }

};

//////Unary Operator BinaryOperatorOverloading
class Integer{
    private:
	int a;
	public:
	void setData(int x){
		a = x;
	}
	void showData(){
		cout<<a<<endl;
	}
    
	Integer operator-(){
		Integer temp;
		temp.a = -a;
		return temp;
	}
    Integer operator++(){
		Integer temp;
		temp.a = ++a;
		return temp;
	}
	Integer operator++(int){
		Integer temp;
		temp.a = a++;
		return temp;
	}

};



int main(){
  
//   Complex c1;
//   Complex c2;
//   Complex c3;
//   Complex c4;
//   c1.setData(3,4);
//   c2.setData(5,6);
//   c1.showData();
//   c2.showData();
//   //c1.add(c2) same as this method.
//   c3 = c1+c2;
//   c3.showData();
//   c4 = c1-c2;
//   c4.showData();
 
 ////For Unary Overloading
//  Integer a;
//  a.setData(30);
//  a.showData();
//  Integer b;
//  /// -a or a- same but operator keyword when we use work only for those operator which are already d
//  ///define in the same way in the c language
//  b = -a;
//  b.showData();

////Overloading of Increment and decrement BinaryOperatorOverloading

  cout<<"For PreIncrement Operation"<<endl;
   Integer y;
   y.setData(30);
   y.showData();
   Integer z;
   z = ++y;
   z.showData();
   cout<<"For PostIncrement Operation"<<endl;
   Integer p;
   p.setData(40);
   Integer q;
   q=p++;
   q.showData();
   p.showData();
}
