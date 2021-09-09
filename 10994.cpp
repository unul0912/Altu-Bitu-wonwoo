#include <iostream>
#include <algorithm>

using namespace std;

void Middle(int n, int index){
    for(int i=0; i<index; i++)
        cout << "* ";
    cout << "*";
    for(int i=0; i<index; i++)
        cout << " *";
    cout << "\n";
}
void Blank(int n, int index){

    cout << "*";
    for(int i=0; i<index; i++)
        cout << " *";
    for(int i=0; i<4*n - 5 - 4*index; i++)
        cout << " ";
    for(int i=0; i<index; i++)
        cout << "* ";
    cout << "*" << "\n";

}

void Star(int n, int index){

    cout << "*";
    for(int i=0; i<index; i++)
        cout << " *";
    for(int i=0; i<4*n - 5 - 4*index; i++)
        cout << "*";
    for(int i=0; i<index; i++)
        cout << "* ";
    cout << "*" << "\n";


}


int main() {
    int n;

    //입력
    cin >> n;





    for(int i=0; i<n*2-1; i++){
        if(i == n-1){
            Middle(n, i);
        }
        else if(i < n-1){
            Star(n, i);
            Blank(n, i);
        }
        else{
            Blank(n, 2*n-i-2);
            Star(n, 2*n-i-2);

        }




    }
}