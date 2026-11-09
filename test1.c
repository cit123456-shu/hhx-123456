#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

void calculate();

int main()
{
	double Bx,By,Cx,Cy;
	scanf("%d %d %d %d",&Bx,&By,&Cx,&Cy);
	double x[9]={Cx,Cx+1,Cx+2,Cx+2,Cx+1,Cx-1,Cx-2,Cx-2,Cx-1};
	double y[9]={Cy,Cy-2,Cy-1,Cy+1,Cy+2,Cy+2,Cy+1,Cy-1,Cy-2};
	double sit1[9];
	for(int i=0;i<9;i++)
	{
		double m=x[i]+y[i];
		double n=y[i];
		double m_n=m-n;
		calculate(&m);
		calculate(&n);
		calculate(&m_n);
		sit1[i]=m/(n*m_n);
	}
	sit1[0]-=(3*sit1[5]+3*sit1[6]);
	sit1[4]-=(sit1[5]);
	sit1[3]-=(sit1[6]+2*sit1[4]+2*sit1[5]);
	sit1[7]-=(sit1[6]);
	sit1[8]-=(2*sit1[7]+sit1[5]+2*sit1[6]);
	sit1[2]-=(3*sit1[0]+sit1[3]+sit1[7]+5*sit1[5]+5*sit1[6]+2*sit1[4]);
	sit1[1]-=(3*sit1[0]+sit1[8]+sit1[4]+2*sit1[7]+5*sit1[6]+5*sit1[5]);
	double sitBm=Bx+By;
	double sitBn=By;
	double sitBm_n=Bx;
	calculate(&sitBm);
	calculate(&sitBn);
	calculate(&sitBm_n);
	double sit=sitBm/(sitBn*sitBm_n);
	for(int i=0;i<9;i++)
	{
		sit-=sit1[i];
	}
	printf("%lf",sit);
	return 0;
}

void calculate(double *p)				//用于计算累乘
{
	double m=*p;
	double sum=1;
	for(int i=1;i<=m;i++)
	{
		sum*=i;
	}
	*p=sum;
}