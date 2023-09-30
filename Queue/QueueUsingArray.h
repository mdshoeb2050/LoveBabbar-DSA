template<typename T>  // 1. Creating a Template 
class myQ{  // 2. Creating A class
     T *data;    // creating an array 
     int nextIndex;
     int firstIndex;
     int size;
     int capacity;

     public:
       myQ(int s){  // constructor 
           data =new  T[s];
           nextIndex =0;
           firstIndex =-1;
           size=0;
           capacity=s;
       }

       //size of Queue
       int getSize(){
           return size;
       }

       // empty method
      T isEmpty(){
        return size==0;
      }

      // Insertion method
     void enq(T element){
        //check
         if(size==capacity){
            cout<<"Queue is Full."<<endl;
            return ;
         }
        data[nextIndex]=element;
        //using modulus concept
        nextIndex=(nextIndex+1) % capacity;

        //check for empty case
        if(firstIndex == -1){
            firstIndex =0;
        }
        size++;  // important point to be noted
     }

      // Deletion method
      T dq(){
       //check for empty case
         if(isEmpty()){
            cout<<"Queue is Empty"<<endl;
            return  0;
         }
        // storing result into ans 
         T ans=data [firstIndex];
        //using modulus concept
        firstIndex=(firstIndex+1) % capacity;
        size--;

        // wapas se Array ko initialize karenge
        if(size==0){
            firstIndex = -1;
            nextIndex =0;
        }
        return ans;
      }  

     // front method 
     T front(){
        //check for empty case
        if(isEmpty()){
            cout<<"Queue is Empty"<<endl;
            return  0;
         }
         return  data[firstIndex];
     }


};