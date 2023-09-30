// Template ka use karke sirf 1 class se every datatype ke liye hum object bana payenge using template method 
template<typename T>

class Mypair{
    T x;
    T y;
// humne yaha T ko as temporary datatype banaya hai  jab chahenge to objects banate time koi bhi specific datatype ke sath replace kar denge 
 public:
 // private variable ke sath chedchad karne ke liye hume getter and setter ka Use karte hai 
  void setX(T x){
    this->x=x;
  }
   void setY(T y){
    this->y=y;
  }

  T getX(){
    return x;
  }

  T getY(){
    return y;
  }
};