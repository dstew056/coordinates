#include<iostream>
using namespace std;

class coordinate{
	public: int x, y;

	public: coordinate(int x, int y){
		this->x = x;
		this->y = y;
	}
};

class point : private coordinate{
	private: int momentumx, momentumy;

	public: point(int x, int y) : coordinate(x,y){
		momentumx=0;
		momentumy=0;
	}

	public: void applyForce(int x2, int y2){
		momentumx+=x2;
		momentumy+=y2;
	}

	public: void update(){
		momentumy--;
		x+=momentumx;
		y+=momentumy;
	}

	public: void print(){
		cout<< "x: " << x << " y: " << y << "\n";
	}
};

int main(){
	point c = point(0,0);
	c.print();
	c.applyForce(5,5);
	for(int i=0;i<20;i++){
		c.update();
		c.print();
	}
	return 0;
}
