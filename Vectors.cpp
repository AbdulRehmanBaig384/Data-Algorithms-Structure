Vectors::
In C++, vector is a dynamic array that stores collection of elements same type in contiguous memory. It has the ability to resize itself automatically when an element is inserted or deleted.

Syntax
Vector is defined as the std::vector class template inside the <vector> header file.

1) vector<int> vec;
2) vector<int> vec={1,2,3,4,5} 
3) vector<int> vec(3,0) 


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<char> v = {'a', 'f', 'd'};
  
//   	// Inserting 'z' at the back
//   	v.push_back('z');
  
//   	// Inserting 'c' at index 1
//   	v.insert(v.begin() + 1, 'c');

//   	for (int i = 0; i < v.size(); i++)
//         cout << v[i] << " ";
//     return 0;
// }

 #include<iostream>
 using namespace std;
 #include<vector>
 int main(){
     vector<int>vec={1,2,3,4,5};
     for(int i: vec){
     cout<<i<<endl;}
}

/Vector Functions
/size,push back,pop_back,front,back,at
#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int>vec={1,2,3,4,5};
    cout<<vec.size()<<endl;
    vec.push_back(30); //add the value at last
    vec.push_back(40);
    cout<<vec.size()<<endl;
    vec.pop_back();//delete the last value
    cout<<vec.size()<<endl;
    cout<<vec.front()<<endl; //return front value means 1
}

#include<iostream>
using namespace std;
#include<vector>
int main(){
    int ans=0;
    vector<int>vec={1,2,1,3,4,2,5,6};
    for(int val:vec){
        ans=ans ^= val;
    }
    cout<<ans<<endl;
 return 0;
}
output :4
  

/SUBARRAYS 
/Question: Print all the subArray or subset in the  
#include<iostream>
using namespace std;
#include<vector>
int main(){
int arrays[5]={2,3,4,5,6};
int n=5;
for(int start=0;start<n;start++){
   for(int end=start;end<n;end++){
    for(int i=start;i<end;i++){
    cout<<arrays[i];
    }
    cout<<" ";
   }
   cout<<endl;
}
}
Maximum SubArrays Sum

  
/ Kadanes Algorithms

#include<iostream>
using namespace std;
#include <climits> 
#include<vector>
int main(){
    int arrays[7]={1,-2,4,5,-6,7,8};
    int size=7;
    int Sum=0;
    int maxSum=INT_MIN;
    for(int start=0;start<size;start++){
            Sum+=arrays[start];
            maxSum=max(Sum,maxSum);
            if(Sum<0){
                Sum=0;
            }
        }
        cout<<"The maximum sum of the subarray is"<<maxSum<<endl;
    }

