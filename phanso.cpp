#include<iostream>
using namespace std;
class PS{
	private:
		int ts,ms;
	public:
		void nhap(){
	    cout<<"Nhap ts: ";cin>>ts;
		cout<<"Nhap ms: ";cin>>ms;
		while(ms==0){
		cout<<"KHL,VLNL"<<endl;
		cout<<"Nhap lai ms: ";cin>>ms;}
		}
		void xuat();};
	void PS::xuat()	{
		cout<<ts<<"/"<<ms;
		}
int main(){
    PS a;
	a.nhap()	;
	a.xuat()	;
	return 0;
	}
		
	 		
