#include <iostream>
#include <vector>
using namespace std;



bool isPrime(int n){
for(int i=2; i< n; i++){
    if(n% i==0){
        return false;
    }
    return true;
}


vector <int> primeFactors(int n){
vector<int> temp;

for(i=2; i< n; i++){
    while(n%i==0){
       if(i> 2 && i%2==0) continue;
        temp.push_back(i);
        n/=i;
    }
}


}

}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
