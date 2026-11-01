#include<bits/stdc++.h>

using namespace std;

class gameObject{

    private:
     int x;
     int y;
    
    

     public:
      int health;
      //parametrised constructors

     gameObject(int x, int y, int health){
        this->x = x;
        this->y = y;
        this->health  = health;
     }
     gameObject(int health){
      this->x = 0;
      this->y = 0;
      this->health = health;
     }
     void print(){
      cout<<this->x<<" "<<this->y <<" "<<this->health<<" ";
     }
     int type;

     void setx(int nx){
        x = nx;
     }
     void sety(int ny){
        y = ny;

     }
     void chealth(int nh){
        if(nh < 0){
           return;
        }
        health = nh;
     }
};


class player : public gameObject{
    int state;
    public:
    
     player(int x, int y, int health, int state) : gameObject(x, y, health){
        this->state = state;
     }
     //copy constructor 
     player(const player &p) : gameObject(p.health){
       
       this->state = p.state;
     }
};


int main(){

   player * p = new player(0, 0, 10, 1);
   player*c =  new player(*p);
   c->print();
   p->print();

}