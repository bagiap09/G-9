#include<iostream>
#include<string.h>

using namespace std;

class GV{
	private:
		char ht[30];
		int t;
		char bc[15];
		char chuyennganh[20];
		float bl;
	public:
	    void nhap();
	    void xuat();
	    
	    float tinhlcb();
	    
	    bool luongNhoHon2000() {
        return tinhlcb() < 2000;}
					   
	    friend void sapxepgv(GV*ds,int &n);
	    };
	     
	    void GV::nhap() {
	    	cout<<"Nhap ho ten:  ";
			fflush(stdin);
			cin.getline(ht,30);
			
			cout<<"Nhap tuoi: ";
			cin>>this->t;
			
			cout<<"Nhap bang cap: ";
			cin>>bc;
			
			cout<<"Nhap chuyen nganh: ";
			cin>>chuyennganh;
			
			cout<<"Nhap bac luong: ";
			cin>>this->bl;
			}
		void GV::xuat()	{
				
  cout<<"Ho ten: "<<ht<<endl
			        <<"Tuoi: "<<this->t<<endl
					<<"Bang cap: "<<bc<<endl
					<<"Chuyen nganh: "<<chuyennganh<<endl
					<<"Bac luong: "<<this->bl<<endl
					<<"Luong co ban:"<<this->tinhlcb()<<endl;
					
					}
    
		float GV::tinhlcb()	{
		     return this->bl*610;}	
		     
			 
		void sapxepgv(GV*ds,int &n){
		    for(int i=0;i<n-1;i++){
			   for(int j=i+1;j<n;j++){
			       if(strcmp(ds[i].chuyennganh,ds[j].chuyennganh)>0){
				       swap(ds[i],ds[j]);
					   }
					   }
					   }
					   }
	
					   
	int main(){
	    int n;
		cout<<"Nhap so gv: ";
		cin>>n;
		
		GV*ds=new GV[n];
		
		for(int i=0;i<n;i++){
		
				cout<<"->Nhap thong tin GV thu: "<<i+1<<endl;
				ds[i].nhap();
				
			}
			

	   
		    for(int i=0;i<n;i++){
			    
				cout<<"->Xuat thong tin GV thu:"<<i+1<<endl;
				ds[i].xuat();
				cout<<endl;
				}
				
		cout << "\nDanh sach giao vien co tien luong nho hon 2000:" << endl;
    for (int i = 0; i < n; i++) {
        if (ds[i].luongNhoHon2000()) {
            ds[i].xuat();
            cout << "Tien luong: " << ds[i].tinhlcb() << endl;
            }
            }
            
		sapxepgv(ds,n);
		cout<<endl<<"Danh sap xep giao vien theo chuyen nganh"<<endl;
		for(int i=0;i<n;i++){
		    ds[i].xuat();
			cout<<endl;
			}
			delete[] ds;
			return 0;
			}	  	
							   
					   	 	
	    	
