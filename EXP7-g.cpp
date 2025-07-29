//Harsh kumar
//24070123146
//B3
#include <iostream>
using namespace std;
int main(){
    string a;
    cout<< "enter the string: ";
    cin>>a;
    int v =a.length();
    cout << "reversed string is: ";
    for (int i=0;i<=v;i++){
       cout << a[v-i];
    }
}

/*Output : 
enter the string: harsh
reversed string is: hsrah
*/
