#include<iostream>
#include<cmath>
using namespace std;

class Point{
    int x, y;
    public:
    Point(int a, int b){
        x = a;
        y = b;
    }
    void displayPoint(){
        cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
    }
};

void distance(int d1, int d2){
    double dist;
    double dist1 = x.d2-x.d1;
    double dist2 = y.d2-y.d1;
    double dist = sqrt((pow(dist1, 2))+(pow(dist2, 2)));
}

int main(){

    Point p(1, 2);
    p.displayPoint();
    Point q(4, 6);
    q.displayPoint();
    return 0;

}