#include<iostream>
struct GFG {
    int G1;
    char G2;
    float G3;
};
 
// Driver Code
int main()
{
    // Declaring a Structure
    struct GFG G;
    G.G1 = 85;
    G.G2 = 'G';
    G.G3 = 989.45;
    cout << "The value is : "
         << G.G1 << endl;
    cout << "The value is : "
         << G.G2 << endl;
    cout << "The value is : "
         << G.G3 << endl;
 
    return 0;
}