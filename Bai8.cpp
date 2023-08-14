#include<iostream>
#include<string>
using namespace std;

class Nguoi{
	protected:
		string hoten;
		int namsinh;
	public:
	   void nhap(){
	        cout<<"Nhap ho ten: ";
			fflush(stdin);
			getline(cin,hoten) ;
			cout<<"Nhap nam sinh: ";
			cin>>namsinh;
		}
		void xuat(){
		    cout<<"Ho ten: "<<hoten<<endl
				<<"Nam sinh: "<<namsinh<<endl;
				}	
};
class Thisinh:public Nguoi{
	private:
		string sbd;
		int t,l,h;
	public:
	    void TSnhap(){
		    Nguoi::nhap();
			    cout<<"Nhap so bao danh: ";
				cin>>sbd;
				cout<<"Nhap diem toan: ";
				cin>>t;
				cout<<"Nhap diem ly: ";
				cin>>l;
				cout<<"Nhap diem hoa: ";
				cin>>h;
			}
			
		void TSxuat(){
		    Nguoi::xuat();
			    cout<<"So bao danh: "<<sbd<<endl
					<<"Diem toan: "<<t<<endl
					<<"Diem ly: "<<l<<endl
					<<"Diem hoa: "<<h<<endl
					<<"Tong diem 3 mon: "<<this->Tong3mon()<<endl;
				}
		float Tong3mon(){
		    return this->t+this->l+this->h;
			}
		string getsobaodanh(){
		   return sbd;
		   }
		bool datyeucau(){
		    return (this->t>=5&&this->l>=5&&this->h>=5);
			}   	
		};
void nhapDS(Thisinh a[],int n){
	cout<<"\nNhap danh sach "<<n<<" thi sinh"<<endl;
	for(int i=0;i<n;i++){
		cout<<"\tNhap danh sach thi sinh thu: "<<i+1<<endl;
		a[i].TSnhap();
		}
		}
void xuatDS(Thisinh a[],int n){
	cout<<"\nXuat danh sach "<<n<<" thi sinh"<<endl;
	for(int i=0;i<n;i++){
		cout<<"\tXuat danh sach thi sinh thu: "<<i+1<<endl;
		a[i].TSxuat();
		}
		}
void sort(Thisinh a[],int n){
    for(int i=0;i<n;i++){
	   for(int j=i+1;j<n;j++){
	      if(a[i].Tong3mon()>a[j].Tong3mon()){
		    swap(a[i],a[j]);
			}
			}
			}
			}
							
		






int main(){
    int n;
	cout<<"Nhap so thi sinh: ";
	cin>>n;
	
	Thisinh a[n];	
	
	nhapDS(a,n);
	xuatDS(a,n);
	
	cout<<"_____________Danh sach thi sinh co tong diem ba mon tang dan___________"<<endl;
	xuatDS(a,n);
	sort(a,n);
	
	string sbd;
	cout<<"Nhap so bao danh can tim: ";
	getline(cin,sbd);
	bool timThay=false;
	for(int i=0;i<n;i++){
		if(a[i].getsobaodanh()==sbd){
			cout<<"Tim thay thi sinh co so bao danh "<<sbd<<endl;
		a[i].TSxuat();
		timThay=true;
		}
		}
	if(!timThay){
	    cout<<"Khong tim thay!"<<endl;
		}
		
		
	int diemyeucau=0;
	   for(int i=0;i<n;i++){
	      if(a[i].datyeucau()){
		     diemyeucau++;
			 }
			 }
	float phantramyeucau=(float)diemyeucau/n*100;
	    cout<<"Phan tram thi sinh dat yeu cau: "<<phantramyeucau<<"%"<<endl;
				 			
	return 0;
	}
								
