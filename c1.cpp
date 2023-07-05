#include <iostream> //Header file
using namespace std;

int main()
{
    //Basic Input and Output

    // ************************* OUTPUT
    //1. When you want to print a String or a sentence
    cout<<"Hello Students\n";

    //2. When you want to print only a variable
    int n = 9;
    cout<<n;

    //3. When you want to print a String with variable
    cout<<"\nThe value of 'n' is : "<<n<<'\n';

    // ********************* Input

    //1. When you want to take input of a variable
    cout<<"Enter: "<<'\n';
    int num ;
    cin>>num;
    cout<<num<<"\n";

    cout<<"Enter a word: "<<'\n';
    string word;
    cin>>word;
    cout<<word<<'\n';

    //2. When you want to take input of two variables together.
    int x,y;
    cout<<"Enter two nums: "<<'\n';
    cin>>x>>y;
    cout<<"Value of x is "<<x<<" The value of y is "<<y<<'\n';

    return 0;
}