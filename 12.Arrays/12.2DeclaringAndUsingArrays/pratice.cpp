#include<iostream>
using namespace std;

int main (){
   int scores[10]{34,56,78,90,12,3,4,5,6,7};
    int sum{0};
    for (int elements : scores){
      sum+=elements;
     

    }
     cout<<"THE TOTAL SCORE IS : "<<sum<<endl;
     return 0;
    
}