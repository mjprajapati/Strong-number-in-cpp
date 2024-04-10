// Online C++ compiler to run C++ program online
#include <iostream>
int fact(int);
using namespace std;
class strong{
    int num;
    public:strong(){
        cout<<"default cons";
        cout<<"enter number :";
        cin>>num;
    }
    
    friend void check(strong);
    
};

void check(strong obj){
    int r,sum=0,p_num;
    p_num=obj.num;
    
    while(p_num!=0){
        r=p_num%10;
        sum=sum+fact(r);
        p_num/=10;
    }
    
    if(sum==obj.num){
        cout<<"strong no";
    }
    
    else{
        cout<<"not storng no because the calulating value is "<<sum;
    }
    
}

int fact(int rev){
    if(rev==1){
        return 1;
    }
    
    else{
        return rev*fact(rev-1);
    }
}

int main() {
    // Write C++ code here
    // std::cout << "Try programiz.pro";
    strong obj;
    check(obj);

    return 0;
}