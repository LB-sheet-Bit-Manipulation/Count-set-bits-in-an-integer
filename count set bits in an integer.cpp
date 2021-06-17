//baari baari (starting from rightmost bit),bitwise AND karte jao the last bit with 1 (0001). Agar 1 hai rightmost bit 
//to (n&1)=1 aayga and count increases, else count me 0 add hota jaayga

#include<iostream>
using namespace std;

unsigned int countSetBits(unsigned int n)
{
	unsigned int count=0;
	
	//while(n) is equivalent to while(n!=0)
	while(n)
	{
		count=count+(n&1);
		n=n>>1;    //rightshift by 1
	}
	return count;
}

int main() 
{ 
	//bitwise operations becomes undefined in negative numbers. so unsigned int is used.
	unsigned int n;
	
	cout<<"\nEnter the number ";
	cin>>n;
	
	//calling our function
	cout<<"\nThe number of set bits in "<<n<<" is "<<" "<<countSetBits(n);
	
	return 0;
}
