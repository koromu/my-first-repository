//#include <iostream>
//
//using namespace std;
//
//const int N = 1010;
//
//int n, m;
//int v[N], w[N];
//int f[N][N];
//
//int main()
//{
//    cin >> n >> m;
//    for (int i = 1; i <= n; i++) cin >> v[i] >> w[i];//这个是正着存的
//
//    for (int i = n; i >= 1; i--)//这个是反着遍历的, 序号从大到小, 这样求出来的最终答案在f[1][m]
//        for (int j = 0; j <= m; j++)
//        {
//            f[i][j] = f[i + 1][j];//不选第i个
//            if (j >= v[i]) f[i][j] = max(f[i][j], f[i + 1][j - v[i]] + w[i]);//选第i个
//        }
//    //f[i][j]中, 
//    int j = m;
//    for (int i = 1; i <= n; i++)//倒着求状态的原因是因为, 在求字典序的时候, 一定需要从1 -> n, 比如最优答案在f[n][m]的话, 假设f[n-1][m]也是最优解(也就是不选第n个的情况)
//                                //那么我们本应该选n-1 ,但是先遍历到n所以, 答案会变成n, 字典序就不是最小了
//        if (j >= v[i] && f[i][j] == f[i + 1][j - v[i]] + w[i])//从答案推过程
//        {
//            //如果f[i][j]是由它的后一个, 也就是推导时的上次层再加上第i个转移过来的, 那么第i个元素就是必选的, 因为i个元素绝对是同种价值中, 序号最小的, 所以字典序最小
//            cout << i << ' ';//直接打印出来这个序号
//            j -= v[i];//状态变成f[i+1][j-v[i]]
//            //所以   j = j - v[i]  -> j -= v[i]
//            //      i = i + 1     -> i++
//        }
//
//    return 0;
//}
