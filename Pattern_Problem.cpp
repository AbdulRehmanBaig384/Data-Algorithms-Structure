//Here We can solve numerous Pattern problem
#include <iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){     
            cout<<j;
           };
         cout<<endl;
    }
    return 0;
}
//output of Pattern Problem
1234
1234
1234
1234

//Reverse value of the above code

#include <iostream>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        for(int j=4;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}

//output of Pattern Problem
4321
4321
4321
4321

//Increase number Pattern
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    for(int i=1;i<=n;i++){

        for(int j=1;j<=n;j++){
            cout<<count;
            count=count+1;
        }
        cout<<endl;
    }
}

//output of Pattern Problem
input=5
12345
678910
1112131415
1617181920
2122232425

//Star Problem
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << '*';
        }
        cout<<endl;
    }
}

//output of Pattern Problem    
input=5
*    
**
*** 
****
*****
