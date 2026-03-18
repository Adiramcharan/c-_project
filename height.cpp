#include <iostream>
double getTowerHeight(){
    std::cout<<"Enter the tower height: ";
    double height{};
    std::cin>>height;
    return height;
}
void caltowerheightandprint(double heightTower,int second){
    double g=9.8;
    int t=second;
    double distanceFallen{0.5*g*t*t};
    double height{heightTower-distanceFallen};
    if (height>0.0)
        std::cout<<"At "<<t<<" sec, the ball is at height: "<<height<<'\n';
    else
        std::cout<<"At "<<t<<" sec,the ball is on the ground.\n";
}
int main(){
    double heightTower{getTowerHeight()};
    caltowerheightandprint(heightTower,0);
    caltowerheightandprint(heightTower,1);
    caltowerheightandprint(heightTower,2);
    caltowerheightandprint(heightTower,3);
    caltowerheightandprint(heightTower,4);
    caltowerheightandprint(heightTower,5);
    return 0;
}