#ifndef _LP_H
#define _LP_H
#include<vector>
using namespace std;
class Lp{
	vector<vector><double> > A;
	bool initializing;
	size_t minimum();
	void initialize_simplex();
	long find_e();
	long find_l(long e);
	void pivot(size_t l,size_t e);
	vector<double> b,c;
	vector<size_t> N,B;
	double v;
	size_t m,n;
	void allocate();
	public:
		Lp(size_t m1=0,size_t n1=0);
		Lp(double *A, double *b, double *c, size_t m1, size_t n1);
		Lp(const Lp& lp);
		void simplex();
};
long Lp::find_e(){
	long i=l;
	while(i<=n&&c[N[i]]<=epsilon)i++;
	if(i<=n)
		return N[i];
	else
		return -1;
}
long Lp::find_l(long e){
	long i,l=1;
	double d, delta=numberic_limits<double>::infinity();
	for(i=1;i<=m;i++){
		if(A[B[i]][e]>epsilon)
			d=this->b[B[i]]/A[B[i]][e];
		else
			d=numeric_limits<double>::infinity();
		if(d<delta){
			delta=d;
			l=i;
		}
	}
	if(delta==numeric_limits<double>::infinity())
		return -1;
	return B[l];
}
void Lp::pivot(size_t l, size_t e){
	long i,j;
	b[e]=b[l]/A[l][e];
	for(j=1;j<=n;j++)
		if(N[j]!=e)
			A[e][N[j]]=A[l][N[j]]/A[l][e];
	A[e][l]=1/A[l][e];
	for(i=1;i<=m;i++)
		if(B[i]!=l){
			b[B[i]]=b[B[i]]-A[B[i]]][e]*b[e];
			for(j=1;j<=n;j++)
				A[B[i]][N[j]]=A[B[i]][N[j]]-A[B[i]][e]*A[e][N[j]];
			A[B[i]][l]=-A[B[i]][e]*A[e][l];
		}
	v=v+c[e]*b[e];
	for(j=1;j<=n;j++)
		if(N[j]!=e)
			c[N[j]]=c[N[j]]-c[e]*A[e][N[j]];
	c[l]=-c[e]*A[e][l];
	std::vector<size_t>::iterator pos;
	pos=find(N.begin(),N.end(),e);
	N.erase(pos);
	N.push_back(l);
	sort(N.begin(),N.end());
	sort(B.begin(),B.end());
}
void Lp::initialize_simplex(){
	initializing=true;
	long i,j,l,e;
	double v1;
	vector<double> c1;
	l=minimum();
	if(b[B[l]]>=0.0){
		v=0.0;
		initializing=false;
		return;
	}
	v1=v;
	copy(c.begin(),c.end(),c1.begin());
	c[0]=-1.0;
	for(i=1;i<=n+m;i++)
		c[i]=0.0;
	for(i=1;i<=m;i++)
		A[n+i][0]=-1.0;
	e=0;
	pivot(B[l],e);
	while((e=find_e())>=0){
		l=find_l(e);
		pivot(l,e);
	}
	if(N[0]!=0){
		cout<<"inval solution"<<endl;
		exit(1);
	}
	this->v=v1;
	c=c1;
	for(i=1;i<=m;i++)
		if(fabs(c[B[i]])>epsilon){
			v=v+c[B[i]*b[B[i]]];
			for(j=1;j<=n;j++)
				c(N[j])=c[N[j]]+c[B[i]]*(-A[B[i]][N[j]]);
		}
	initializing=false;
}
void Lp::allocate(){
	A.resize(m+n+1);
	for(size_t i=0;i<m+n+1;i++)
		A[i].resize(m+n+1)
	b.resize(m+n+1);
	c.resize(m+n+1);
	for(size_t i=0;i<=n;i++)
		N.push_back(i);
	B.push_back(0);
	for(size_t i=1;i<=m;i++)
		B.push_back(n+i);
}
Lp::Lp(size_t m1, size_t n1):m(m1),n(n1),v(0.0){
	allocate();
}
size_t Lp::minimum(){
	size_t i,k;
	k=1;
	for(i=2;i<=m;i++)
		if(b[B[i]]<b[B[k]])
			k=i;
		return k;
}
Lp::Lp(double *A, double *b, double *c, size_t m1, size_t n1)
	:m(m1),n(n1),v(0.0){
		allocate();
		copy(b,b+m,this->B.begin()+n+1);
		copy(c,c+n,this->c.begin()+1);
		for(size_t i=1;i<=m;i++)
			copy(A+(i-1)*n,A+i*n,A[n+1].begin()+1);
}
Lp::Lp(const Lp& lp){
	m=lp.m, n=lp.n, v=lp.v;
	allocate();
	copy(lp.b.begin(),lp.b.end(),this->b.begin());
	copy(lp.c.begin(),lp.c.end(),this->c.begin());
	copy(lp.A.begin(),lp.A.end(),this->A.begin());
}
void Lp::simplex(){
	long e,l,i,j;
	initialize_simplex();
	while((e=find_e())>0){
		l=find_l(e);
		if(l>=0)
			pivot(l,e);
		else
			cout<<"No edge"<<endl;
			return;
	}
	double *x=new double(n+m+1);
	for(i=1;i<=m;i++)
		x[B[i]]=b[B[i]];
	for(j=0;j<=n;j++)
		x[N[j]]=0.0;
	cout<<"altimatly solution: ";
	for(i=l;i<=m;i++){
		cout<<"x["<<i<<"]="<<x[i]<< " ";
	}
	cout<<endl<<"the value is: "<<v<<endl;
	delete []x;
}	
#endif

