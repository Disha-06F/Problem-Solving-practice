#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define F first
#define S second
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define Disha ios_base::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
using namespace std;
double angle_between(double h ,double m){
    double hour_angle=30*(h+(m/60));/* 360 degree=12 hour
    1hour=30degree*/
    double minute_angle=(m*6);/*60 minute=360 degree
    1 minute=6 degree*/
    double angle=abs(hour_angle-minute_angle);
    return min((360-angle),angle);
}
int main(){
    Disha;
    double h,m;
    cin>>h>>m;
    cout<<fixed<<setprecision(7)<<angle_between(h,m)<<"\n";
    

}
