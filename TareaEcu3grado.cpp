#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	double z,a,b,c,d,dis,p,q,k,h,m,n,g,x1,x2,x3,imag,pi;
	float u,v;
	
	pi = 3.14159265359;
	
	cout<<"a^x3 + bx^2 + cx + d = 0"<<endl;
	cout<<"Ingrese el valor de a: "; cin>>a;
	cout<<"\nIngrese el valor de b: "; cin>>b;
	cout<<"\nIngrese el valor de c: "; cin>>c;
	cout<<"\nIngrese el valor de d: "; cin>>d;
	
	if(a==0 and b==0 and c==0 and d==0)
	{
		cout<<"\nLa ecuacion tiene infinitas soluciones"<<endl;
	}
	
	p = (c/a)-((pow(b/a,2))/3);
	q = (d/a)-((b*c)/(3*(pow(a,2))))+(((pow(b/a,3))*2)/27);
	dis = (pow(q,2)/4)+(pow(p,3)/27);
		
	if(dis<0)
	{
		x1 = (2*sqrt(-p/3))*cos(acos((-q/2)*sqrt(-27/(pow(p,3))))/3) -((b/a)/3);
    	x2 = (2*sqrt(-p/3))*cos(acos((-q/2)*sqrt((-27)/(pow(p,3))))/3 +2*pi/3) -((b/a)/3);
    	x3 = (2*sqrt(-p/3))*cos(acos((-q/2)*sqrt((-27)/(pow(p,3))))/3 +4*pi/3) -((b/a)/3);
    	
    	cout<<"\nLa ecuacion tiene 3 soluciones reales: "<<endl;
    	cout<<"x1="<<x1<<endl;
    	cout<<"x2="<<x2<<endl;
    	cout<<"x3="<<x3<<endl;
	}
	
	if(dis>=0)
	{
		h = (-q/2)-sqrt(dis);
		m = (-q/2)+sqrt(dis);
		
		if(h<0)
		{
			k = h*(-1);
			v = pow(k,1.0/3.0);	
			v = v*(-1);
		}
		else
		{
			v = pow(h,1.0/3.0);		
		}
		
		if(m<0)
		{
			n = m*(-1);
			u = pow(n,1.0/3.0);
			u = u*(-1);
		}
		else
		{
			u = pow(m,1.0/3.0);
		}
		
		x1 = u+v-(b/(3*a));
		x2 = -0.5*(u+v)-(b/(3*a));
		x3 = x2;
		imag = 0.5*sqrt(3)*(u-v);
		
		if(imag==0 and x1==x2)
		{
			cout<<"\nLa ecuacion tiene tres raices iguales: "<<endl;
			cout<<"x1=x2=x3="<<x1<<endl;
		}
		else
		{	
			cout<<"\nLa ecuacion tiene 3 soluciones"<<endl;
	    	cout<<"x1="<<x1<<endl;
	    	cout<<"x2="<<x2<<"+"<<imag<<"i"<<endl;
	    	cout<<"x3="<<x3<<"-"<<imag<<"i"<<endl;	
		}
		
	}
	
	return 0;
}
