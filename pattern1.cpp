// Full pyramid
// #include <iostream>

// using namespace std;

// void fullPyramid(int n) {
//   for (int i = 0; i < n; i++) {
//     // 1. spaces
//     for (int j = 0; j < n - i - 1; j++)
//       cout << " ";

//     // 2. stars
//     for (int j = 0; j < i + 1; j++)
//       cout << "* ";
//     cout << endl;
//   }
// }


// //inverted pyramid
// #include <iostream>
// using namespace std;

// void invertedpyramid(int n){
//     for (int row = 0; row<n; row++){
//         for(int col=0;col<row;col++)
//             cout<<" ";
//         for(int col = 0; col <n-row; col++)
//             cout<<"* ";  
//         cout<<endl;      
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     invertedpyramid(n);
//     return 0;
// }

// void diamond(int n){
//   fullPyramid(n);
//   invertedpyramid(n);
// }
// int main(){
//     int n;
//     cin>>n;
//     diamond(n);
//     return 0;
// } 


// #include <iostream>

// using namespace std;

// void hollowFullPyramid(int n) {
//   for (int i = 0; i < n; i++) {
//     // 1. spaces
//     for (int j = 0; j < n - i - 1; j++)
//       cout << " ";

//     // 2. stars and inner spaces
//     for (int j = 0; j <= i; j++) {
//       if (i == 0 || i == n - 1 || j == 0 || j == i)
//         cout << "* ";
//       else
//         cout << "  ";  // two spaces to align with "* "
//     }
//     cout << endl;
//   }
// }

// int main() {
//   int n;
//   cout << "Enter the number of rows: ";
//   cin >> n;
//   hollowFullPyramid(n);
//   return 0;
// }

// hollow inverted pyramid
// #include <iostream>
// using namespace std;

// void hollowinvertedpyramid(int n){
//   for (int row = 0 ; row<n ; row++){
//       for(int col=0 ; col<row ; col++)
//         cout<<" ";
//       for(int col = 0; col <n-row; col++){
//         if (row==0 || row==n-1|| col==0 || col==n-row-1 )
//           cout<<"* ";
          
//         else
//           cout<<"  ";  
//         }  
//         cout<<endl;      
//     } 
// }

// int main(){
//      int n;
//      cin>>n;
//      hollowinvertedpyramid(n);
//      return 0;
// }

// Hollow Diamond
// #include <iostream>
// using namespace std;

// void hollowFullPyramid(int n) {
//   for (int i = 0; i < n; i++) {
//     // 1. spaces
//     for (int j = 0; j < n - i - 1; j++)
//       cout << " ";

//     // 2. stars and inner spaces
//     for (int j = 0; j <= i; j++) {
//       if (i == 0 || /*i == n - 1 */ j == 0 || j == i)
//         cout << "* ";
//       else
//         cout << "  ";  // two spaces to align with "* "
//     }
//     cout << endl;
//   }
// }

// void hollowinvertedpyramid(int n){
//   for (int row = 0 ; row<n ; row++){
//       for(int col=0 ; col<row ; col++)
//         cout<<" ";
//       for(int col = 0; col <n-row; col++){
//         if (/*row==0*/  row==n-1|| col==0 || col==n-row-1 )
//           cout<<"* ";
          
//         else
//           cout<<"  ";  
//         }  
//         cout<<endl;      
//     } 
// }

// void hollowdiamond(int n){
//   hollowFullPyramid(n);
//   hollowinvertedpyramid(n);
// }

// int main(){
//      int n;
//      cin>>n;
//      hollowdiamond(n);
//      return 0;
// }

//Mix pyramid
// #include <iostream>
// using namespace std;

// void mixpyramids(int n){
//   //PART-1
//   for(int i=0; i<n ;i++){
//     //I. stars
//     for(int j=0; j<n-i;j++)
//     cout<<"*";
//     //II. space
//     for(int j=0; j< 2*i + 1; j++)
//     cout<<" ";
//     //III. star
//     for(int j= 0; j<n-i;j++)
//       cout<<"*";
//     cout<<endl;
//   }

//   //PART-2
//   for(int i=0; i<n ;i++){
//     //I. stars
//     for(int j=0; j<i+1;j++)
//     cout<<"*";
//     //II. space
//     for(int j=0; j< 2*(n-i)-1; j++)
//     cout<<" ";
//     //III. star
//     for(int j= 0; j<i+1;j++)
//       cout<<"*";
//     cout<<endl;
//   }
// }

// int main(){
//   int n;
//   cin>>n;
//   mixpyramids(n);
// }

// // Fancy 12 pattern

// #include <iostream>
// using namespace std;

// void fancy12(int n){
//   for(int i = 0; i<n ; i++){
//     for(int j = 0; j<2*i+1; j++){
//       if(j%2==0)
//         cout<<i+1;
//       else
//         cout<<"*";  
//     }
//     cout<<endl;
//   }
// }

// int main(){
//   int n;
//   cin>>n;
//   fancy12(n);
// }

// full fancy 12 pattern

// #include <iostream>
// using namespace std;

// void fullfancy12(int n){
//   //I.
//   for(int i = 0; i<n ; i++){
//     for(int j = 0; j<2*i+1; j++){
//       if(j%2==0)
//         cout<<i+1;
//       else
//         cout<<"*";  
//     }
//     cout<<endl;
//   }
//   //II.
//     n--; // nki value 5 se 4 karne ke liye kiya hai
//     //inverted ka logic
//     for(int i=0; i<n; i++){
//       for(int j=0; j<2*(n-i)-1 ; j++){
//         if(j%2==0 )
//           cout<<n-i;
//         else  
//           cout<<"*";  
//       }
//       cout<<endl;
//     }
// }

// int main(){
//   int n;
//   cin>>n;
//   fullfancy12(n);
// }


//ABCDpattern 
#include <iostream>
using namespace std; 

void ABCDpattern(int n){
  for(int i = 0; i<n; i++){
    char ch = 'A' ;  // ASCII value of A is 65
    //int ch = 65 - 1;
    for(int j = 0; j< i+1; j++){
      cout<< ch;
      ch = ch +1;
    }
    //ek ulta loop chalayenge
    ch--; 
    //last letter ko dubara na print karna pade uske liye ek minus kiya hai
    while (ch>'A'){
      ch--;
      cout <<ch;
    }
    cout<<endl;
  }
}
int main(){
  int n;
  cin>>n;
  ABCDpattern(n);
}