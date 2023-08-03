#include<iostream>
#include<string.h>
using namespace std;

class GV {
    	char ht[30];
    	int t;
	    char bc[15];
    	char chuyennganh[20];
    	float bl;
    public:
    	friend istream& operator >>(istream& in,GV &a){
    	
			cout<<"nhap ht: ";
			fflush(stdin);
			in.getline(a.ht,30);
			
			cout<<"nhap tuoi: ";
			in>>a.t;
			
			cout<<"nhap bang cap: ";
			fflush(stdin);
			in.getline(a.bc,15);
			
			cout<<"nhap chuyen nganh: ";
			in.getline(a.chuyennganh,20);
			
			cout<<"nhap bac luong: ";
			in>>a.bl;
			return in;
		}
    		
    		
    	
	    friend ostream& operator <<(ostream& out,GV a)
	    	{
			out<<" Ho ten "<<a.ht<<endl
				<<" Tuoi "<<a.t<<endl
				<<" Bang cap "<<a.bc<<endl
				<<" Chuyen nganh "<<a.chuyennganh<<endl
				<<" Bac luong "<<a.bl<<endl
				<<" Luong cb "<<a.tinhlcb()<<endl;
			return out;
		}
		   
	    float tinhlcb();
		bool operator ==(GV a){
		   return strcmp(this->bc,a.bc)==0;
		   }
		    friend void sort(GV a[],int &n);
	};
	   	float GV::tinhlcb()	{
		     return this->bl*610;}	
		     
	
	void sort(GV a[],int&n){
	    for(int i=0;i<n;i++){
		   for(int j=i+1;j<n;j++)
		      if(strcmp(a[i].bc,a[j].bc)>0)
		           swap(a[i],a[j]);
			      //=a[i];
				  //a[i]=a[j];
				  //a[j]=tmp;
				  
				  }
				  }

	void nhapDS(GV a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"\nnhap thong tin GV thu: "<<i+1<<endl;
		cin>>a[i];
	}
}

    void xuatDS(GV a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"\nxuat thong tin GV thu: "<<i+1<<endl;
		cout<<a[i];
	}
}		    		

int main(){
	int n;
	cout<<"Nhap sl GV: ";
	cin>>n;
	GV a[n];
	nhapDS(a,n);
	xuatDS(a,n);
	sort(a,n);
	xuatDS(a,n);
	return 0;
	
   }
      	
    	
	
