#include <iostream>
using namespace std;
class tarih{
private:
	int gun,ay,yil;
	int kontrolgun(int)const;
public:
	tarih();
	~tarih();
	int getgun();
	void setgun(int);

	int getay();
	void setay(int);

	int getyil();
	void setyil(int);

	void tarihyazdir()const;
	explicit tarih(int ,int ,int);
};