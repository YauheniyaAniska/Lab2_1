#ifndef name_h
#define name_h

using namespace std;

class Complex{
public:
	double real;
	double image;
	Complex();
	Complex operator+(Complex &);	
	Complex operator-(Complex &);	
	Complex operator*(Complex &);	
	Complex operator/(Complex &);	
	bool operator == (Complex & val){
		if ((this->real == val.real) && (this->image == val.image)){
			return true;
		}
		else{
			return false;
		}
	};
	bool operator != (Complex & val){
		if ((this->real == val.real) && (this->image == val.image)){
			return false;
		}
		else{
			return true;
		}
	}
	friend ostream &operator<<(ostream &, Complex &);
	friend istream &operator>>(istream &, Complex &);
	void show();
};

#endif