#include <iostream>
double mass(){
    std::cout<<"Enter the mass: ";
    double ma;
    std::cin>>ma;
    return ma;
}
double velocity(){
    std::cout<<"Enter the velocity: ";
    double v;
    std::cin>>v;
    return v;
}
int main(){
    double m=mass();
    double v=velocity();
    double ke=0.5*(v*v*m);
    std::cout<<"The kinectic energy stored in body of mass "<<m<<"kg"<<" which is travelling with velocity "<<v<<"m/s is "<<ke<<"J\n";
    return 0;
}