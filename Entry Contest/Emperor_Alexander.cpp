// #include<bits/stdc++.h>
// #define pi pair<int, int>
// using namespace std;
// const int N = 1e5 + 5;
// int n, e;
// vector<pi> v[N];
// bool vis[N];
// class Edge
// {
//     public:
//         int a, b;
//         long long w;
//         Edge(int a,int b,long long w)
//         {
//             this->a = a;
//             this->b = b;
//             this->w = w;
//         }
// };
// class cmp
// {
//     public:
//     bool operator()(Edge a,Edge b)
//     {
//         return a.w > b.w;
//     }
// };
// void prims(int s)
// {
//     priority_queue<Edge, vector<Edge>, cmp> pq;
//     vector<Edge> edgeList;
//     pq.push(Edge(s, s, 0));
//     while (!pq.empty())
//     {
//         Edge parent = pq.top();
//         pq.pop();
//         int a = parent.a;
//         int b = parent.b;
//         long long w = parent.w;
//         if(vis[b]) continue;
//         vis[b] = true;
//         edgeList.push_back(parent);
//         for (int i = 0; i < v[b].size();i++)
//         {
//             pi child = v[b][i];
//             if(!vis[child.first])
//             {
//                 pq.push(Edge(b, child.first, child.second));
//             }
//         }
//     }
//     edgeList.erase(edgeList.begin());
//     int edge = 0;
//     long long v = 0;
//     for(Edge val:edgeList)
//     {
//         edge++;
//         v += val.w;
//         // cout << val.a << " " << val.b << " " << val.w << endl;
//     }
//     if(edge+1 == n)
//     {
//         cout << edge << " " << v;
//     }
//     else
//     {
//         cout << "Not Possible" << endl;
//     }
// }
// int main()
// {
//     // int n, e;
//     cin >> n >> e;
//     while (e--)
//     {
//         int a, b;
//         long long w;
//         cin >> a >> b >> w;
//         v[a].push_back({b,w});
//         v[b].push_back({a,w});
//     }

//     prims(1);
//     return 0;
// }
