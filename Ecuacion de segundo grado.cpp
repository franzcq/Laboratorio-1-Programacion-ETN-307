#include<iostream>
#include<math.h>

using namespace std;

int main()
{	
	float a,b,c,d=0,imag=0,x1=0,x2=0;
	
	cout<<"ax^2 + bx + c = 0\n";
	cout<<"Ingrese el valor de a: "; cin>>a;
	cout<<"Ingrese el valor de b: "; cin>>b;
	cout<<"Ingrese el valor de c: "; cin>>c;
	
	if(a==0) 
	{
		if(a==0 and b==0 and c==0)
			{
				cout<<"\nLa ecuacion tiene infinitas soluciones"<<endl;
			}
		else
		{
			x1 = -c/b;
		
			cout<<"Solo existe una solucion para x"<<endl;
			cout<<"El valor de x que satisface la ecuacion es: x="<<x1<<endl;		
		}
	}
	else
	{ 
		d = (pow(b,2))-(4*a*c);
	
		if(d<0)
		{
			imag = (sqrt(-d))/(2*a);
			x1 = (-b/(2*a));
			x2 = x1;
			
			cout<<"\nSu ecuacion tiene dos soluciones imaginarias";
			cout<<"\nEl primer valor que satisface la ecuacion es: x1="<<x1<<"+"<<imag<<"i";
			cout<<"\nEl segundo valor que satisface la ecuacion es: x2="<<x2<<"-"<<imag<<"i";
		}
		else
		{
			x1 = (-b+sqrt(d))/(2*a);
			x2 = (-b-sqrt(d))/(2*a);
		
			cout<<"\nEl primer valor que satisface la ecuacion es: x1="<<x1;
			cout<<"\nEl segundo valor que satisface la ecuacion es: x2="<<x2;
		}
	}
	
	return 0;	
}
