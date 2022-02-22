#include<iostream>
#include<math.h>

using namespace std;

double factorial(int n)
{
	double fac = 1;
	for(int i=2; i<=n; i++)
		{
			fac *= i;
		}
	return fac;
}

double tayl_ex(int n, float x)
{
	double t, s = 0;
	for(int i=0; i<n; i++)
		{
			t=pow(x,i)/factorial(i);
			s = s+t;
		}	
	return s;	
}

double tayl_sen(int n, float x)
{
	double t, s=0;
	int u,v;
	
	for(int i=0; i<n; i++)
		{
			u = pow(-1,i);
			v = 2*i+1;
			t = pow(x,v)/factorial(v);
			s = s+u*t;
		}	
	return s;	
}

double tayl_cos(int n, float x)
{
	double t, s=0;
	int u,v;
	
	for(int i=0; i<n; i++)
		{
			u = pow(-1,i);
			v = 2*i;
			t = pow(x,v)/factorial(v);
			s = s+u*t;
		}	
	return s;	
}

int main()
{
	int a,n;
	float x;
	
	do
	{
		cout<<"Series de Talor-Mclaurin"<<endl;
		cout<<"\tElija la funcion"<<endl;
		cout<<"\t\te^x:    presione 1 "<<endl; 
		cout<<"\t\tsen(x): presione 2 "<<endl; 
		cout<<"\t\tcos(x): presione 3 "<<endl; cin>>a;
	} while(a<1 or a>3);
	
	if(a==1)
	{
		cout<<"\nSerie de Taylor de la funcion e^x \n\tpara n terminos"<<endl;
		cout<<"\nIngrese el valor de n: "; cin>>n;
		cout<<"Ingrese el valor de x: "; cin>>x;
		cout<<"El valor de la serie de Taylor es: "<<tayl_ex(n,x)<<endl;	
	}
	
	if(a==2)
	{
		cout<<"\nSerie de Taylor de la funcion sen(x) \n\tpara n terminos"<<endl;
		cout<<"\nIngrese el valor de n: "; cin>>n;
		cout<<"Ingrese el valor de x: "; cin>>x;
		cout<<"El valor de la serie de Taylor es: "<<tayl_sen(n,x)<<endl;	
	}
	
	if(a==3)
	{
		cout<<"\nSerie de Taylor de la funcion cos(x) \n\tpara n terminos"<<endl;
		cout<<"\nIngrese el valor de n: "; cin>>n;
		cout<<"Ingrese el valor de x: "; cin>>x;
		cout<<"El valor de la serie de Taylor es: "<<tayl_cos(n,x)<<endl;
	}
	
	return 0;
}
