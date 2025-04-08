// here we discussion the important data structure that is ARRAY
 #include<iostream>
 using namespace std;
 int main(){
 int marks[5]={100,2,322,212,121};
 cout<<marks[0]<<endl;
 cout<<marks[1]<<endl;
 cout<<marks[2]<<endl;
 cout<<marks[3]<<endl;
 marks[4]=99;
 cout<<marks[4]<<endl;
 cout<<marks[5]<<endl;

 }
// smallest number in the array
 #include<iostream>
 using namespace std;
 int main(){
     int array[5]={4,5,2,1,8};
     int size=5;
     int smallest=INT8_MAX;
     int largest=INT8_MIN;
     for(int i=0;i<=size;i++){
         if(array[i]>largest){
             largest=array[i];
         }
         else if(array[i]<smallest){
             smallest=array[i];        
          }
    }
     cout<<"smallest number is "<<smallest<<endl;
     cout<<"Largest number is "<<largest<<endl;
}

/pass by reference
 Two of the common ones are Passing by Value and Passing by Reference. Passing by reference allows a function to modify a variable without creating a copy. We have to declare reference variables.
  The memory location of the passed variable and parameter is the same. Therefore, any change to the parameter also reflects in the variable inside its parent function.
  This article focuses on discussing how to pass variables by reference in C++.
 
/ Reverse of an Array
 #include<iostream>
 using namespace std;

 int Reverse(int array[],int size){
     int start=0;
    int end=size-1;
     while(start<end){
         swap(array[start],array[end]);
         start++;
         end--;
     };
 }
 int main(){
  int arrays[]={9,8,7,6,5,4,3,2,1};
  int sz=9;
  int result=Reverse(arrays,sz);
  for(int i=0;i<sz;i++){
     cout<<arrays[i]<<"";
  }    
  cout<<endl;
  return 0;
 }


//Calculate the suum of the and product of the number present in the array
// #include<iostream>
// using namespace std;
// void Sum(int array[],int size){
//     int sum=0;
//     for(int i=0;i<size;i++){
//         sum+=array[i];
//     }
//     cout<<sum<<endl;
// }
// void Product(int array[],int size){
//     int product=1;
//     for(int i=0;i<size;i++){
//         product*=array[i];
//     }
//     cout<<product<<endl;
// }
// int main(){
// int arrays[]={1,2,3,4,5,6};
//  int size=6;
//  Sum(arrays,size);
//  Product(arrays,size);
// }


/ Write a function to swap the max and min value of the numbers in the arrays
 #include<iostream>
 using namespace std;
 int main(){
     int array[]={2,33,45,23,2321,121};
     int size=6;
   int max_num=0; 
    int min=0;
     for(int i=0;i<size;i++){
         if(array[i]>array[max_num]){
             max_num=i;        
         }
         else if(array[i]<array[min]){
//             min=i;
//         };
//         };
//         int temp=array[max_num];
//         array[max_num]=array[min];
//         array[min]=temp;
//         cout << "Array after swapping max and min: ";
//         for (int i = 0; i < size; i++) {
//             cout << array[i] << " ";
//         }
//         cout << endl;
//     }
    
/// Question:to find the unique number in the arrays
#include<iostream>
using namespace std;
 void Unique_number(int array[],int size){
    for(int i=0;i<size;i++){
        bool isuniqque=true;
        for(int j=0;j<size;j++){
            if(i!=j && array[i]!=array[j]){
            isuniqque=false;
            break;
            }}
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    }
 }
int main(){
 int array[]={1,3,4,2,1,5,6,3}
 int size=8;
 Unique_number(array,size)
}
