#include <iostream>
#include <string>

using namespace std;


//int main()
//{
//	char a[62501];// 注意'/0'
//
//	//再用一个数组记录翻译后的WL
//	int b[62501];//用来判断的数组
//	int i = 0;
//	for (; cin >> a[i] && a[i] != 'E';i++)//忽略E以后的全部内容
//	{
//		if (a[i] == 'W')
//			b[i] = 1;
//		if (a[i] == 'L')
//			b[i] = 2;
//		//全部插上双面的标记
//	}
//	//11分制
//		int w = 0, l = 0;//记录分数,内部进行一局, 只有结束才出来, 所以出一局是清空双方分数 -> 21分制也能使用,节省内存
//	for (int j = 0; 1; j++)
//	{
//		//对b数组进行遍历 , 条件是如果w - l >= 2 ||l - w >= 2, 且 w >=11 || l >= 11
//		//内循环,进行判断
//		//结束一局才break, 否则 1 
//		
//			if (b[j] == 1)
//				w++;
//			if (b[j] == 2)
//				l++;
//			if (b[j] == 0)
//			{
//				cout << w << ':' << l << endl;
//			}
//			if (w - l >= 2 || l - w >= 2)
//			{
//				if (w >= 11 || l >= 11)
//				{
//					cout << w << ':' << l<< endl;
//					w = 0;
//					l = 0;
//				}
//			}
//	}
//		//11分制出来了,清空分数
//			w = 0;
//			l = 0;
//			cout << endl;
//	//21分制
//			for (int j = 0; 1; j++)
//			{
//				//对b数组进行遍历 , 条件是如果w - l >= 2 ||l - w >= 2, 且 w >=11 || l >= 11
//				//内循环,进行判断
//				//结束一局才break, 否则 1 
//
//				if (b[j] == 1)
//					w++;
//				if (b[j] == 2)
//					l++;
//				if (b[j] == 0)
//				{
//					cout << w << ':' << l << endl;
//				}
//				if (w - l >= 2 || l - w >= 2)
//				{
//					if (w >= 21 || l >= 21)
//					{
//						cout << w << ':' << l << endl;
//						w = 0;
//						l = 0;
//						break;
//					}
//				}
//			}
//
//	return 0;
//}