//1. linear search
//2. Binary Search 

//3. First Occurence 
        //  >Apply Binary Search  
        //  > checking if(arr[mid]==key)
        //  >storing index in A variable  (useful index)
        //  >go to "Left Part" of Sorted array Bcoz we are finding first occurence
        //  >e ko utha kar left me kar do [e=mid-1]
   
//4. Last Occurence
        // > if(arr[mid]==key)
        // > ans=mid
        // > go to "Right Part" of Sorted array Bcoz we are finding last  occurence
        // > s ko utha kar Right me kar do [s = mid+1] 
            
//5. Total occurence
        // > calling  last occ and first occ both function
        // > total_occ = (last Occ - first Occ) +1  [ +1 Bcoz of 0 based indexing]
        

//6. Peak element in Array(Monotonic fun) 
        // > Approach 1 : using Linear search [T.C = O(n)]
        // > Approach 2 : Binary search  [T.C = log(n)]
        // >>>> Approach 2 <<<<<:
              //-> use BS and find mid
              //-> Logic of peak element : arr[mid-1] < arr[mid] > arr[mid+1]
              //-> while(s<e)  : To avoid extra comparison don't use s<=e 
              //-> if(arr[mid]<arr[mid+1]) s=mid+1; [ going towards peak ]
              //->  if element is Greater than next element : bechare (e) ko upar(peak) par lane ki koshish karenge
              //-> e=mid;    // mid-1 : karenge to peak ke us par chale jayenge , Peak par nahi pahuch payenge
    
            
//7. find Pivot in Array(Monotonic fun) 
    //    while(s<e)   // To avoid extra comparison don't use s<=e
    //    // Agr humara element 0index wale element se "bada" hai to : 2 part  ki taraf jayenge  (Think in terms of Graph going up and down)
    //     if(arr[mid]>arr[0])     s=mid+1;
    //       
    //     else
    //         // otherwise 2 part me end (e) ko peeche ki taraf (Pivot ki tarf) kheechte huye ghaseetate huye  layenge 
    //         e=mid;
    
//8. Search in A Rotated Sorted Array
     // > Approach 1 : using Linear search [T.C = O(n)]
     // > Approach 2 : Binary search  [T.C = log(n)]
        // >>>> Approach 2 <<<<<:
        //     int pivot =findPivot(arr,size);
        //     if(target >=arr[pivot] && target <=arr[size-1])
        //      {
        //       // searching in 2 line 
        //       position = binarySearch(arr,pivot, size-1, target);
        //      }
        // else{
        //       // searching in 1 line
        //        position = binarySearch(arr,0, pivot, target);
        // }


//9. find Sqrt using Binary search (leetcode without inBuilt fun)
      // long long int mid = s+(e-s)/2;   // long long int : to Avoid integer overflow
    //    long long int ans=-1;
    //    long long int square;

    //          //calculating square 
    //           square=mid*mid;
    //    //agr humara squre hi no hai to
    //         if(square==n) return mid;
    
    //         if(square<n){
    //             ans=mid;  // useful answer hai isko store kar lete hai 
    //             s=mid+1;  // go to Right part
    //         }
    //         else {
    //             e=mid-1; 
    //         }
      
//10. Sqrt upto Decimal places

//11. Book Allocation
     
//12. Painter Partition Problem
//13. Aggressive Cows 

//14. EKO (Spoj)
//15. Roti Pratha (SPOJ)





