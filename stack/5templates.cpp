// Template ka use karke sirf 1 class se every datatype ke liye hum object bana payenge using template method 

//ab hum yaha 2 datatype ka pair banyenge using template 
template<typename T , typename V>

class Mypair{
    T x;
    V y;
// humne yaha T and V ko as temporary datatype banaya hai  jab chahenge to objects banate time koi bhi specific datatype ke sath replace kar denge 
 public:
 // private variable ke sath chedchad karne ke liye hume getter and setter ka Use karte hai 
  void setX(T x){
    this->x=x;
  }
   void setY(V y){
    this->y=y;
  }

  T getX(){
    return x;
  }

  V getY(){
    return y;
  }
};