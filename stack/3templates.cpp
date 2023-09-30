
class Mypair{
    int x;
    int y;

 public:
 // private variable ke sath chedchad karne ke liye hume getter and setter ka Use karte hai 
  void setX(int x){
    this->x=x;
  }
   void setY(int y){
    this->y=y;
  }

  int getX(){
    return x;
  }

  int getY(){
    return y;
  }
};


// Agar hum is tarah se class banayenge to hume 
// Every datatype ke liye specially alag se class banana padega 

// iske solution ke liye ab hum aage templates ka use karenge
