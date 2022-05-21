#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;

    cout << "Enter a number : ";
    cin>>n;

    for(int i=1; i<=n; i++){
        int j;
        for(j=1; j<=(n-i); j++){
            cout << "  ";
        }
        for(; j<=n; j++){
            cout << "* ";
        }
        for(; j<(n+i); j++){
            cout << "* ";
        }
        for(; j<=(2*n-1); j++){
            cout << " ";
        }
        cout << endl;
    }

    for(int i=(n-1); i>=1; i--){
        int j;
        for(j=1; j<=(n-i); j++){
            cout << "  ";
        }
        for(; j<=n; j++){
            cout << "* ";
        }
        for(; j<(n+i); j++){
            cout << "* ";
        }
        for(; j<=(2*n-1); j++){
            cout << " ";
        }
        cout << endl;
    }
    
    return EXIT_SUCCESS;
}
