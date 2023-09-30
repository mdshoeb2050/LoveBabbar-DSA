template<typename T>
class myQ{
     T *data;
     int nextIndex;
     int firstIndex;
     int size;
     int capacity;

     public:
       myQ(){
           data =new  T[5];
           nextIndex =0;
           firstIndex =-1;
           size=0;
           capacity=5;
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
         if(size==capacity)
         {
            T *newData= new T[5*capacity]; // Dynamically creating double size Array
            int j=0;
            for(int i=firstIndex; i<capacity; i++){
                newData[j]=data[i];
                j++;
            }
           
           //delete old array
           delete [] data;
           // newData ka control data ptr ko de denge 
           // now old ptr is pointing to new array
           data =newData;

           firstIndex=0;
           nextIndex=capacity;
           capacity*=2; // double capacity
         }
         // else 

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

     //display
       void display(){
        int  i=0;
        //check for empty case
        while(i< data.length()){
           cout<<data[i]<<endl;
           i++;
         }
          
     }


};