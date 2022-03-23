/*In ra tat ca cac cach doi so tien t 
ra cac to menh gia 1000, 2000, 5000, 10000 */

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float 	t;
 	int  	a, b, c, d, s = 0;		//s: so cach doi
 	cout<<"Nhap vao so tien can doi ";cin>>t;
 	cout<<setw(5)<<"Stt"<<setw(15)<<"So to 1000"<<setw(15)<<"So to 2000";
 	cout<<setw(15)<<"So to 5000"<<setw(15)<<"So to 10000"<<endl;
 	for (int a=0; a<=t/1000; a++)
      	for (int b=0; b<=t/2000; b++)
			for (int c=0; c<=t/5000; c++)
	  			for (int d=0; d<=t/10000; d++)
					if (a*1000+b*2000+c*5000+d*10000 == t)
					{	s++;
						cout<<setw(5)<<s<<setw(15)<<a<<setw(15)<<b;
						cout<<setw(15)<<c<<setw(15)<<d<<endl;
 					
					}
 	cout<<"Co tat ca "<<s<<" cach doi"<<endl;
 return 0;
}
