#include<iostream>
using namespace std;
 class shape {
 public:
 	virtual void area(){
	 }
 };
 class circle : public shape{
public:
 void area(){
 	double area;
 	int radius;
 	cout<<"Enter the radius of the circle:";
 	cin>>radius;
 	area=(3.14*(radius*radius));
 	cout<<"Area of the circle:"<< area <<endl;
 }
};
class square : public shape{
	public:
	void area(){
	int area,edge;
	cout<<"Enter the edge of the square:";
 	cin>>edge;
	area=edge*edge;
	cout<<"Area of the square:"<< area <<endl;
	}
};
int main(){
	shape *pcircle;
	shape *psquare;
	square Square;
	circle Circle;
	pcircle=&Circle;
	psquare=&Square;
	pcircle->area();
	psquare->area();
	pcircle=NULL;
	psquare=NULL;
}
