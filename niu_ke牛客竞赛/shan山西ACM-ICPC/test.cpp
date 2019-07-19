/*************************************************************************
	> File Name: test.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年05月26日 星期日 22时15分31秒
 ************************************************************************/

//C-简单的计算几何
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+10;
const double PI=acos(-1.0);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        double rx,ry,r,x,y;
        scanf("%lf%lf%lf%lf%lf",&rx,&ry,&r,&x,&y);
        double length=0.0;
        if((x<=rx-r)||(x>=rx+r)){
            if(x<=rx-r){
                length+=sqrt((x-(rx-r))*(x-(rx-r))+(y-ry)*(y-ry));
                length+=0.5*PI*r;
            }
            else{
                length+=sqrt((x-(rx+r))*(x-(rx+r))+(y-ry)*(y-ry));
                length+=0.5*PI*r;
            }
        }
        else{
            double d=sqrt((x-rx)*(x-rx)+(y-ry)*(y-ry));
            double jiao;
            if(x!=rx){
                double cosr=abs(x-rx)/d;
                jiao=acos(cosr)-acos(r/d);
            }
            else{
                jiao=0.5*PI-acos(r/d);
            }
            jiao+=0.5*PI;
            length+=jiao*r;
            length+=sqrt(d*d-r*r);
        }
        printf("%.4f\n",length);
    }
}


