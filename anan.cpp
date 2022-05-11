#include <iostream>
using namespace std;

class daire{
unsigned int odasayisi;
unsigned int metrekare;
public:

	daire(){
    		cout<<"daire oluşturuldu"<<endl;
    	}


void setodasayisi(int odasayisi){
    	this->odasayisi=odasayisi;
    }
    int getodasayisi(){
    	return odasayisi;
    }
void setmetrekare(int metrekare){
    	this->metrekare=metrekare;
    }
    int getmetrekare(){
    	return metrekare;
    }
   void yazdir(){
   		cout<<"dairenin oda sayisi: "<<odasayisi<<", metre karesi: "<<metrekare<<endl;
    }
    double kirahesapla(){
    	return odasayisi*metrekare*15;
    }

};

class apartman:public daire{
unsigned int katsayisi;
unsigned int kattakidairesayisi;
string ad;
public:
	apartman(){
		cout<<"Apartman oluşturuldu."<<endl;
	}
	void setkatsayisi(int katsayisi){
    	this->katsayisi=katsayisi;
    }
    int getkatsayisi(){
    	return katsayisi;
    }

    void setkattakidairesayisi(int kattakidairesayisi){
    	this->kattakidairesayisi=kattakidairesayisi;
    }
    int getkattakidairesayisi(){
    	return kattakidairesayisi;
    }
    void setad(string ad){
    	this->ad=ad;
    }
    string getad(){
    	return ad;
    }
    void yazdir(){
    	cout<<"Apartmandaki kat sayisi: "<<katsayisi<<", her kattaki daire sayisi: "<<kattakidairesayisi<<", Dairenin oda sayisi: "<<getodasayisi()<<", metre karesi: "<<getmetrekare()<<endl;

    }
    double kirahesapla(){
    	return daire::kirahesapla()*kattakidairesayisi*katsayisi;
    }

};





class site:public apartman{
    unsigned int binasayisi;
    string siteadi;
    public:
    	site(){
    		cout<<"Site olusturuldu"<<endl; 

    	}
    void setbinasayisi(int binasayisi){
    	this->binasayisi=binasayisi;
    }
    int getbinasayisi(){
    	return binasayisi;
    }

    void setsiteadi(string siteadi){
    	this->siteadi=siteadi;
    }

    string getsiteadi(){
    	return siteadi;
    }
    void yazdir(){
    	cout<<"Sitenin adi: "<<getsiteadi()<<", sitedeki bina sayisi: "<<getbinasayisi()<<"Apartmandaki kat sayisi: "<<getkatsayisi()<<"her kattaki daire sayisi:"<<getkattakidairesayisi()<<" Dairenin oda sayisi: "<<getodasayisi()<<"metre karesi"<<getmetrekare()<<endl;
    }

    double kirahesapla(){
    	return apartman::kirahesapla()*binasayisi;
    }
};


int main()
{
	daire d1;
	d1.setodasayisi(3);
	d1.setmetrekare(100);
	cout<<"kira"<<d1.kirahesapla()<<endl;
	
	return 0;
}
