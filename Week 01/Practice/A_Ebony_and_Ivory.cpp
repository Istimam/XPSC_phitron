// #include<bits/stdc++.h>
// #define FOR(i,A,B) for(int i = (A); i < (B); i++)
// using namespace std;
// int main()
// {
//     int a, b, c;
//     cin >> a >> b >> c;
//     bool found = false;
//     if(c%a == 0)
//     {
//         cout << "Yes";
//     }
//     else if(c%b == 0)
//     {
//         cout << "Yes";
//     }
//     else
//     {   
//         FOR(i,0,101)
//         {
//             int x = i * a;
//             FOR(j,0,101)
//             {
//                 int y = j * b;
//                 if(c == x+y)
//                 {
//                     found = true;
//                     break;
//                 }
//                 // cout << "j" << j << " ";
//             }
//             // cout << "i" << i << endl;
//         }
//         if(found)
//         {
//             cout << "Yes";
//         }
//         else
//         {
//             cout << "No";
//         }
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// #define FOR(i,A,B) for(int i = (A); i < (B); i++)
// using namespace std;
// int main()
// {
//     int a, b, c;
//     cin >> a >> b >> c;
//     if(c%a == 0)
//     {
//         cout << "Yes";
//     }
//     else if(c%b == 0)
//     {
//         cout << "Yes";
//     }
//     else
//     {  
//         bool found = false;
//         FOR(i,0,101)
//         {
//             FOR(j,0,101)
//             {
//                 if(a*i + b*j == c)
//                 {
//                     found = true;
//                     break;
//                 }
//             }
//         }
//         if(found)
//         {
//             cout << "Yes";
//         }
//         else
//         {
//             cout << "No";
//         }
//     }
//     return 0;
// }
/*H Q R S U*/

