//#include<bits/stdc++.h>
//using namespace std;
//char m[12][12];//地图
//int f[3], c[3], ans, tdz;//农夫，奶牛，秒数，专属值
//bool zt[160005];//记录专属值是否出现
//void move(int x, int y, int mi, int h) {//移动函数
//	if (mi == 0) {
//		if (m[x - 1][y] == '*') 
//			if (h == 0) f[0] = 1;
//			else c[0] = 1;
//		else if (h == 0) f[1]--;
//		else c[1]--;
//	}
//	else if (mi == 1) {
//		if (m[x][y + 1] == '*')
//			if (h == 0) f[0] = 2; 
//			else c[0] = 2;
//		else if (h == 0) f[2]++; 
//		else c[2]++;
//	}
//	else if (mi == 2) {
//		if (m[x + 1][y] == '*')
//			if (h == 0) f[0] = 3; 
//			else c[0] = 3;
//		else if (h == 0) f[1]++; 
//		else c[1]++;
//	}
//	else {
//		if (m[x][y - 1] == '*')
//			if (h == 0) f[0] = 0;
//			else c[0] = 0;
//		else if (h == 0) f[2]--; 
//		else c[2]--;
//	}
//}
//bool pd() { //判断循环终止条件：如果奶牛坐标与农夫坐标相等，则他们重叠，返回0，退出循环
//	if (f[1] == c[1] && f[2] == c[2]) return 0;
//	else return 1;
//}
//int main() {
//	for (int i = 0; i <= 11; i++) m[i][0] = '*', m[i][11] = '*';
//	for (int i = 1; i <= 11; i++) m[0][i] = '*', m[11][i] = '*';
//	for (int i = 1; i <= 10; i++) {
//		for (int j = 1; j <= 10; j++) {
//			cin >> m[i][j];
//			if (m[i][j] == 'F') f[1] = i, f[2] = j;
//			if (m[i][j] == 'C') c[1] = i, c[2] = j;
//		}
//	}
//	while (pd()) {//模拟每秒
//		tdz = f[1] + f[2] * 10 + c[1] * 100 + c[2] * 1000 + f[0] * 10000 + c[0] * 40000;
//		if (zt[tdz]) {//死循环了就输出0并结束程序
//			cout << 0 << endl;
//			return 0;
//		}
//		zt[tdz] = 1;//标记
//		move(f[1], f[2], f[0], 0);
//		move(c[1], c[2], c[0], 1);//依次移动农夫和奶牛
//		ans++;//记录秒数
//	}
//	cout << ans << endl;//输出
//	return 0;
//}

//char arr[13][13];//地图
//int f[3], c[3];
//bool over[500000];
//bool dp()
//{
//	if (f[1] == c[1] && f[2] == c[2])return 0;
//	return 1;
//}
//void Move(int w,int h,int x,int y)
//{
//	if (h == 0)if (arr[x - 1][y] == '*')if (w == 0)f[0] = 1;else c[0] = 1;
//		else if (w == 0)f[1]--;else c[1]--;
//	else if (h == 1)if (arr[x][y + 1] == '*')if (w == 0)f[0] = 2;else c[0] = 2;
//		else if (w == 0)f[2]++;else c[2]++;
//	else if (h == 2)if (arr[x + 1][y] == '*')	if (w == 0)f[0] = 3;else c[0] = 3;
//		else	if (w == 0)f[1]++;else c[1]++;
//	else if (arr[x][y - 1] == '*')if (w == 0)f[0] = 0;else c[0] = 0;
//		else	if (w == 0)f[2]--;else c[2]--;
//}
//int main()
//{
//	int i, j, num = 0;
//	for (i = 0; i <= 11; i++) { arr[i][0] = '*'; arr[0][i] = '*'; arr[i][11] = '*'; arr[11][i] = '*'; }
//	for (i = 1; i <= 10; i++)
//	{
//		for (j = 1; j <= 10; j++)
//		{
//			cin >> arr[i][j];
//			if (arr[i][j] == 'F') { f[1] = i; f[2] = j; }
//			if (arr[i][j] == 'C') { c[1] = i; c[2] = j; }
//		}
//	}
//	while (dp())
//	{
//		Move(0, f[0], f[1], f[2]); //农夫移动
//		Move(1, c[0], c[1], c[2]);//奶牛移动
//		int ret = f[0] + f[1] * 10 + f[2] * 100 + c[0] * 1000 + c[1] * 10000 + c[2] * 100000;
//		if (!over[ret])over[ret] = true;
//		else
//		{
//			cout << 0 << endl;
//			return 0;
//		}
//		num++;
//	}
//	cout << num << endl;
//	return 0;
//}  不知道为什么超时！！！！！！！！！！！





//int main()
//{
//	int n, x;
//	cin >> n;
//	int flag = 0;
//	while (n > 1)
//	{
//		cin >> x;
//		if (flag == 0)
//		{
//			if(x!=0){
//				if (x != 1 && x != -1)
//					cout << x << "x^" << n; 
//				else
//				{
//					if (x == 1)cout << "x^" << n;
//					else cout << "-x^" << n;
//				}
//				flag = 1;
//			}
//			n--;
//			continue;
//		}
//		if (x < 0)
//		{
//			if (x != -1)
//				cout << x << "x^" << n;
//			else
//				cout << "-x^" << n;
//		}
//		if (x > 0)
//		{
//			if (x != 1)
//				cout << "+" << x << "x^" << n;
//			else
//				cout << "+" << "x^" << n;
//		}
//		n--;
//	}
//	cin >> x;
//	if (x > 0) {
//		if (x == 1)cout << "+x";
//		else cout << "+" << x << "x";
//	}
//	if (x < 0)
//		if (x == -1)cout << "-x";
//		else cout << x << "x";
//
//	cin >> x;
//	if (flag == 0) { cout << x << endl; return 0; }
//	if (x < 0)
//		cout << x << endl;
//	else if (x > 0)
//			cout << "+" << x << endl;
//	return 0;
//}//太细了


//int main()
//{
//	int p1, p2, p3;
//	cin >> p1 >> p2 >> p3;
//	string s;
//	cin >> s;
//	int i;
//	string::iterator it = s.begin();
//	while (it != s.end())
//	{
//		char m, n;
//		if (*it == '-')
//		{
//			m = *(it - 1);
//			n = *(it + 1);
//			if (m >= n) { ; }
//			else
//			{
//				if (p1 == 1)
//				{
//					if (m >= 'a')
//					{
//						s.erase(it, it + 1);
//						for (i = 1; i <= n - m - 1; i++)
//						{
//							s.insert(it, p2, m + i);
//							it = it + p2;
//						}
//					}
//					else if (n <= '9')
//					{
//						s.erase(it, it + 1);
//						for (i = 1; i <= n - m - 1; i++)
//						{
//							s.insert(it, p2, m + i);
//							it = it + p2;
//						}
//					}
//					else
//					{
//						s.erase(it, it + 1);
//						for (i = 1; i <= n - m - 1; i++)
//						{
//							s.insert(it, p2, m + 32 + i);
//							it = it + p2;
//						}
//					}
//				}
//				else if (p1 == 2)
//				{
//					if (m >= 'a')
//					{
//						s.erase(it, it + 1);
//						for (i = 1; i <= n - m - 1; i++)
//						{
//							s.insert(it, p2, m - 32 + i);
//							it = it + p2;
//						}
//					}
//					else if (n <= 9)
//					{
//						s.erase(it, it + 1);
//						for (i = 1; i <= n - m - 1; i++)
//						{
//							s.insert(it, p2, m + i);
//							it = it + p2;
//						}
//					}
//					else
//					{
//						s.erase(it, it + 1);
//						for (i = 1; i <= n - m - 1; i++)
//						{
//							s.insert(it, p2, m + i);
//							it = it + p2;
//						}
//					}
//				}
//				else
//				{
//					s.erase(it, it + 1);
//					for (i = 1; i <= n - m - 1; i++)
//					{
//						s.insert(it, p2, '*');
//						it = it + p2;
//					}
//				}
//			}
//		}
//		it++;
//	}
//	cout << s << endl;
//	return 0;
//}
///*
//1 3 3
//aaaaaaaa-c-f-1-999 测试有误
//
//1 3 2
//aaaaaaaaaa-d-b-f-1-3
//*/





//int num[50];
//int main()
//{
//	string s;
//	int k;
//	cin >> s;
//	cin >> k;
//	int i;
//	for (i = 0; i < s.size(); i++)
//	{
//		arr[i] = s[i] - '0';
//	}
//	while (k)
//	{
//		for (i = 0; i < s.size(); i++)
//		{
//			if (arr[i] > 3)num[i] = arr[i];
//			else if (arr[i] == 3) { k--; num[i] = arr[i]; }
//			else
//			{
//				if (s.size() - i  == k)
//				{
//
//				}
//				else
//				{
//
//				}
//			}
//		}
//	}
//	return 0;
//}




//class stu
//{
//public:
//	string name;
//	float score;
//};
//bool cmp(stu s1, stu s2)
//{
//	return s1.score > s2.score;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	stu arr[110];
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		cin >> arr[i].name;
//		float x, y, z;
//		cin >> x >> y;
//		y = ceil(sqrt(y) * 10);
//		z = round(y*0.6 + x*0.4);
//		arr[i].score = z;
//	}
//	sort(arr, arr + n , cmp );
//	for (i = 0; i < n; i++)
//	{
//		cout << arr[i].name << " " << arr[i].score << endl;
//	}
//	return 0;
//}






//bool arr[1000100];
//int main()
//{
//	int n, m, k;
//	cin >> n >> m >> k;
//	while (m--)
//	{
//		int i;
//		cin >> i;
//		int x = i;
//		arr[i] = true;
//		i = (i + k) % n;
//		arr[i] = true;
//		while (x != i)
//		{
//			i = (i + k) % n;
//			arr[i] = true;
//		}
//	}
//	int i, num = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == false)num++;
//	}
//	cout << num << endl;
//	return 0;
//}

















//int arr[1000010];
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	int i, j, j1, j2, j3;
//	for (i = 0; i < n; i++)  cin >> arr[i];
//	int max = -1, max1 = -1, min = 10000000, min1 = 100000000;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] > max) { max = arr[i]; j = i; }
//		if (arr[i] < min) { min = arr[i]; j1 = i; }
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] > max1&&i != j) { max1 = arr[i]; j2 = i; }
//		if (arr[i] < min1&&i != j1) { min1 = arr[i]; j3 = i; }
//	}
//	cout << min << " " << max << endl;
//	for (i = 1; i <= n - m; i++)
//	{
//		if (arr[i - 1] == max)
//		{
//			max = max1;
//			max1 = -1;
//			j = j2;
//			for (int k = i; k < i + m; k++)
//			{
//				if(arr[k]>max1&&k!=j){ max1 = arr[k]; j2 = k; }
//			}
//			if (arr[i + m] > max) { max = arr[i + m]; max1 = max; }
//		}
//		else if (arr[i - 1] == min)
//		{
//			min = min1;
//			min1 = 10000000000;
//			j1 = j3;
//			for (int k = i; k < i + m; k++)
//			{
//				if (arr[k] < min1&&k != j2) { min1 = arr[k]; j3 = k; }
//			}
//		}
//		else
//		{
//
//		}
//	}
//	return 0;
//}






//int arr[5100];
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	if (n == 0)
//	{
//		cout << 0 << endl;
//		return 0;
//	}
//	int i, j;
//	int num = 0;
//	for (i = 1; i <= m; i++)cin >> arr[i];
//	int max = -1;
//	for (i = 1; i <= m; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//			j = i;
//		}
//	}
//	num += max;
//	int k = 1;
//	int left = j - 1, right = j + 1;
//	while (num < n)
//	{
//		if (arr[left] > arr[right])
//		{
//			num += arr[left];
//			left--;
//			k++;
//		}
//		else
//		{
//			num += arr[right];
//			right++;
//			k++;
//		}
//		if (arr[left] == 0 && arr[right] == 0 && num < n)
//		{
//			cout << 0 << endl;
//			return 0;
//		}
//	}
//	cout << k << endl;
//	return 0;
//}






//int arr[1000010];
//int dq1[1000010];//单调增队列
//int dq2[1000010];//单调减队列
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	int i;
//	dq2[0] = 1000000000;
//	for (i = 0; i < n; i++)cin >> arr[i];
//	int p1 = 0, p2 = 0, h1 = 0, h2 = 0;
//	for (i = 0; i < m; i++)
//	{
//		while (arr[i] > dq1[p1])
//		{
//			p1--;
//			if (p1 < 0)
//			{
//				p1 = -1;
//				break;
//			}
//		}
//		dq1[p1+1] = arr[i];
//		p1++;
//	}
//	for (i = 0; i < m; i++)
//	{
//		while (arr[i] < dq2[p2])
//		{
//			p2--;
//			if (p2 < 0)
//			{
//				p2 = -1;
//				break;
//			}
//		}
//		dq2[p2+1] = arr[i];
//		p2++;
//	}
//	cout << dq2[h2] << " " << dq1[h1] << endl;
//	for (i = m; i < n; i++)
//	{
//		if (dq1[h1] == arr[i - m])h1++;
//		if (dq2[h2] == arr[i - m])h2++;
//		while (arr[i] > dq1[p1])
//		{
//			p1--;
//			if (p1 < h1)
//			{
//				p1 = h1 - 1;
//				break;
//			}
//		}
//		dq1[p1 + 1] = arr[i];
//		p1++;
//		while (arr[i] < dq2[p2])
//		{
//			p2--;
//			if (p2 < h1)
//			{
//				p2 = h1 - 1;
//				break;
//			}
//		}
//		dq2[p2 + 1] = arr[i];
//		p2++;
//		cout << dq2[h2] << " " << dq1[h1] << endl;
//	}
//
//	/*for (i = 1; i <= n - m + 1; i++)
//	{
//		if (arr[i - 1] == dq1[h1])h1++;
//		if (arr[i - 1] == dq2[h2])h2++;
//		for (j = i; j < i + m; j++)
//		{
//			while (arr[j] > dq1[p1])
//			{
//				p1--;
//				if (p1 == 0)
//				{
//					p1 = 0;
//					break;
//				}
//			}
//			dq1[p1 + 1] = arr[j];
//			p1++;
//		}
//		for (j = i; j < i + m; j++)
//		{
//			while (arr[j] < dq2[p2])
//			{
//				p2--;
//				if (p2 == 0)
//				{
//					p2 = 0;
//					break;
//				}
//			}
//			dq2[p2 + 1] = arr[j];
//			p2++;
//		}
//		cout << dq2[h2] << " " << dq1[h1] << endl;
//	}*/
//	return 0;
//}

//洛谷p1160 
//const int maxN = (int)1e5 + 10;//1e5代表十的五次方
//#define iter list<int>::iterator
//iter arr[maxN];
//bool arr1[maxN];
//int main()
//{
//	int n;
//	cin >> n;
//	list<int>L;
//	int i;
//	L.push_back(1);
//	arr[1] = L.begin();
//	for (i = 2; i <= n; i++)
//	{
//		int k, p;
//		cin >> k >> p;
//		if (p == 0)
//		{
//			arr[i] = L.insert(arr[k], i);
//		}
//		else
//		{
//			iter prve = next(arr[k]);//重点！！！！！！！！！
//			arr[i] = L.insert(prve, i);
//		}
//	}
//	int m;
//	cin >> m;
//	while (m--)
//	{
//		int x;
//		cin >> x;
//		if (!arr1[x])
//		{
//			L.erase(arr[x]);
//			arr1[x] = true;
//		}
//	}
//	for (iter it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	return 0;
//}



//单调队列
//洛谷p1886
//int n, m;
//int q1[1000001], q2[1000001];
//int a[1000001];
//void min_deque()
//{
//	int h = 1, t = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		while (h <= t&&q1[h] + m <= i) h++;
//		while (h <= t&&a[i]<a[q1[t]]) t--;
//		q1[++t] = i;
//		if (i >= m) printf("%d ", a[q1[h]]);
//	}
//	cout << endl;
//
//}
//void max_deque()
//{
//	int h = 1, t = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		while (h <= t&&q2[h] + m <= i) h++;
//		while (h <= t&&a[i]>a[q2[t]]) t--;
//		q2[++t] = i;
//		if (i >= m) printf("%d ", a[q2[h]]);
//	}
//}
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
//	min_deque();
//	max_deque();
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e6 + 10;
//# define INF 0x3f3f3f3f
//int maxn = -INF, minn = INF;
//int n, k;
//struct node {//用结构体存储数值及其对应的下标 
//	long long v;//记录元素的值 
//	int idx;//记录下标，用于判断该元素是否还在窗口范围内 
//}a[N];
//long long lar[N], sma[N];
//int main()
//{
//	deque<node> q1;//STL双端队列实现单调队列 
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i].v;
//		a[i].idx = i;
//	}
//
//	for (int i = 1; i <= n; i++)//单调递增队列，求出每次滑动窗口的最小值 
//	{//当队列为单调递增队列时，队首元素即为最小值，注意要将不在窗口范围内的元素删掉 
//		if (q1.empty() || q1.back().v <= a[i].v)//当队列为空或加入的值大于等于队尾元素的值 
//			q1.push_back(a[i]);//从队尾加入元素 
//		else//加入元素小于队尾元素的值时 
//		{
//			while (!q1.empty() && q1.back().v>a[i].v)
//				q1.pop_back();//弹出队尾元素 
//			q1.push_back(a[i]);
//		}
//		while (q1.front().idx<i - k + 1)//判断队首元素是否还在窗口范围内 
//			q1.pop_front();//如果不在，就从队首弹出元素 
//		if (i >= k)		sma[i - k + 1] = q1.front().v;//存储滑动窗口内的最小值 
//	}
//	deque<node> q2;
//	for (int i = 1; i <= n; i++)//单调递减队列，求出每次滑动窗口的最大值 
//	{
//		if (q2.empty() || q2.back().v >= a[i].v)
//		{
//			q2.push_back(a[i]);
//		}
//		else
//		{
//			while (!q2.empty() && q2.back().v<a[i].v)
//			{
//				q2.pop_back();
//			}
//			q2.push_back(a[i]);
//		}
//		while (q2.front().idx<i - k + 1)
//			q2.pop_front();
//		if (i >= k)		lar[i - k + 1] = q2.front().v;
//	}
//	for (int i = 1; i <= n - k + 1; i++)
//		cout << sma[i] << " ";
//	cout << endl;
//	for (int i = 1; i <= n - k + 1; i++)
//		cout << lar[i] << " ";
//	return 0;
//}


//快速排序
/*当基准数选择最左边的数字时，那么就应该先从右边开始搜索；
当基准数选择最右边的数字时，那么就应该先从左边开始搜索。
不论是从小到大排序还是从大到小排序！*/
//int arr[100010];
//void quickly_sort(int left, int right)
//{
//	if (left >= right)return;
//	int l = left;
//	int r = right;
//	srand((unsigned int)time(NULL));
//	int ra = rand() % (right - left) + left;
//	int x = arr[ra];
//	while (l < r)
//	{
//		while ((arr[r] > x&&l < r)||r==ra)r--;
//		while ((arr[l] <= x&&l < r)||l==ra)l++;
//		if (l < r)
//		{
//			int tmp = arr[l];
//			arr[l] = arr[r];
//			arr[r] = tmp;
//		}
//	}
//	int tmp = arr[ra];
//	arr[ra] = arr[l];
//	arr[l] = tmp;
//	quickly_sort(left, l - 1);
//	quickly_sort(r + 1, right);
//}
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)cin >> arr[i];
//	quickly_sort(0, n - 1);
//	for (int i = 0; i < n; i++)cout << arr[i] << " ";
//	cout << endl;
//	return 0;
//}
//过不了 只要数据为有序的 算法复杂度变为O(n^2) 会超时

//int n, a[1000001];
//void qsort(int l, int r)//应用二分思想
//{
//	int mid = a[(l + r) / 2];//中间数
//	int i = l, j = r;
//	do {
//		while (a[i]<mid) i++;//查找左半部分比中间数大的数
//		while (a[j]>mid) j--;//查找右半部分比中间数小的数
//		if (i <= j)//如果有一组不满足排序条件（左小右大）的数
//		{
//			swap(a[i], a[j]);//交换
//			i++;
//			j--;
//		}
//	} while (i <= j);//这里注意要有=
//	if (l<j) qsort(l, j);//递归搜索左半部分
//	if (i<r) qsort(i, r);//递归搜索右半部分
//}
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//	qsort(1, n);
//	for (int i = 1; i <= n; i++) cout << a[i] << " ";
//	cout << endl;
//}

//这个还是比较好
//int arr[100010];
//void my_qsort(int left, int right)
//{
//	int l = left;
//	int r = right;
//	int m = arr[(l + r) / 2];
//	while (l <= r)
//	{
//		while (arr[l] < m)l++;
//		while (arr[r] > m)r--;
//		if (l <= r)
//		{
//			swap(arr[l], arr[r]);
//			l++;
//			r--;
//		}
//	}
//	if (left < r)my_qsort(left, r);
//	if (l < right)my_qsort(l, right);
//}
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)cin >> arr[i];
//	my_qsort(1, n);
//	for (int i = 1; i <= n; i++)cout << arr[i] << " ";
//	cout << endl;
//	return 0;
//}

//洛谷p1923
//int arr[5000010];
//int k;
//int read()//快读 加快读取速度
//{
//	char ch = getchar();
//	int c = 0, f = 1;
//	while (ch<'0' || ch>'9')
//	{
//		if (ch == '-')f = -1;
//		ch = getchar();
//	}
//	while (ch >= '0'&&ch <= '9')
//	{
//		c = c * 10 + (ch - '0');
//		ch = getchar();
//	}
//	return c*f;
//}
//int my_qsort(int left, int right)//将arr数组分割为以l(小L)为分界点的数组，l左边全部小于arr[l] l右边全部大于arr[l] 并返回l
//{
//	int l = left;
//	int r = right;
//	int x = arr[left];
//	while (l < r)
//	{
//		while (arr[r] > x&&r > l)r--;
//		while (arr[l] <= x&&l < r)l++;
//		if (l < r)
//		{
//			swap(arr[r], arr[l]);
//		}
//	}
//	swap(arr[left], arr[l]);
//	return l;
//}
//void my_find(int l, int r)
//{
//	int tmp = my_qsort(l,r);
//	if (tmp == k)cout << arr[k] << endl;//如果l恰好等于k 输出
//	else if (tmp > k)my_find(l, tmp - 1);//如果l大于k 则在l的左边找
//	else my_find(tmp + 1, r);//如果l小于k 则在l的右边找
//}
//int main()
//{
//	int n;
//	n = read();
//	k = read();
//	for (int i = 0; i < n; i++)arr[i] = read();
//	my_find(0, n - 1);//指定寻找范围
//	return 0;
//}

//洛谷P1781
//class pre
//{
//public:
//	string vote;
//	int index;
//};
//pre arr[22];
//bool cmp(pre a, pre b)
//{
//	if (a.vote.size() > b.vote.size())return true;
//	else if (a.vote.size() == b.vote.size())
//	{
//		for (int i = 0; i < a.vote.size(); i++)
//		{
//			if (a.vote[i] == b.vote[i]) { ; }
//			else
//			{
//				if (a.vote[i] > b.vote[i])return true;
//				else return false;
//			}
//		}
//	}
//	else return false;
//	return true;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		arr[i].index = i + 1;
//		cin >> arr[i].vote;
//	}
//	sort(arr, arr + n, cmp);
//	cout << arr[0].index << endl;
//	cout << arr[0].vote << endl;
//	return 0;
//}


//DFS
//int check(参数)
//{
//	if (满足条件)
//		return 1;
//	return 0;
//}
//
//void dfs(int step)
//{
//	判断边界
//	{
//		相应操作
//	}
//		尝试每一种可能
//	{
//		满足check条件
//		标记
//		继续下一步dfs(step + 1)
//		恢复初始状态（回溯的时候要用到）
//	}
//}

//示例1：全排列问题
//int n;
//char  a[15];
//char re[15];
//int vis[15];
////假设有n个字符要排列，把他们依次放到n个箱子中
////先要检查箱子是否为空，手中还有什么字符，把他们放进并标记。
////放完一次要恢复初始状态，当到n+1个箱子时，一次排列已经结束
//void dfs(int step)
//{
//	int i;
//	if (step == n + 1)//判断边界
//	{
//		for (i = 1; i <= n; i++)
//			printf("%c", re[i]);
//		printf("\n");
//		return;
//	}
//	for (i = 1; i <= n; i++)//遍历每一种情况
//	{
//		if (vis[i] == 0)//check满足0
//		{
//			re[step] = a[i];
//			vis[i] = 1;//标记
//			dfs(step + 1);//继续搜索
//			vis[i] = 0;//恢复初始状态
//		}
//	}
//	return;
//}
//
//int main(void)
//{
//	int T;
//	scanf("%d", &T);
//	getchar();
//	while (T--)
//	{
//		memset(a, 0, sizeof(a));
//		memset(vis, 0, sizeof(vis));//对存数据的数组分别初始化
//		scanf("%s", a + 1);
//		n = strlen(a + 1);
//		dfs(1);//从第一个箱子开始
//	}
//	return 0;
//}




//char s[20], s1[20];
//int n;
//int sc[20];
//void my_sort(int step)
//{
//	if (step == n)
//	{
//		cout << s1 << endl;
//		return;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (sc[i] == 0)
//		{
//			s1[step] = s[i];
//			sc[i] = 1;
//			my_sort(step + 1);
//			sc[i] = 0;
//		}
//	}
//	return;
//}
//int main()
//{
//	cin >> s;
//	n = strlen(s);
//	my_sort(0);
//	return 0;
//}







//int arr[21][3];
//int num = 0;
//int n;
//int sc[21];
//void my_sort(int step)
//{
//	if (step == n)
//	{
//		num++;
//		return;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if ((i == arr[step][0] || i == arr[step][1]) && sc[i] == 0)
//		{
//			sc[i] = 1;
//			my_sort(step + 1);
//			sc[i] = 0;
//		}
//	}
//	return;
//}
//int main()
//{
//	cin >> n;
//	if (n == 0)
//	{
//		cout << 0 << endl;
//		return 0;
//	}
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		cin >> arr[i][0] >> arr[i][1];
//	}
//	my_sort(0);
//	cout << num << endl;
//	return 0;
//}


//long long arr[2000010];
//bool cmp(int x, int y)
//{
//	return x > y;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	sort(arr, arr + n, cmp);
//	long long sum = 0;
//	for (i = 0; i < n; i += 2)
//	{
//		int m = i / 2 + 1;
//		sum += (arr[i] + arr[i + 1])*(2 * m);
//	}
//	cout << sum << endl;
//	return 0;
//}

//int arr[66];
//int arr1[66];
//int main()
//{
//	long long n;
//	long long m;
//	while (cin >> n >> m)
//	{
//		int i;
//		for (i = 0; i < 64; i++)
//		{
//			arr[i] = (n >> i) & 1;
//		}
//		int k = 0;
//		for (i = m - 1; i < 64; i++)
//		{
//			arr1[k++] = arr[i];
//		}
//		for (i = 0; i < m - 1; i++)
//		{
//			arr1[k++] = arr[i];
//		}
//		long long sum = 0;
//		for (i = 0; i < 63; i++)sum += arr1[i] * pow(2, i);
//		if (arr1[63] == 1)cout << "-" << sum << endl;
//		else cout << sum << endl;
//	}
//	return 0;
//}

//class stu
//{
//public:
//	string name;
//	int year;
//	int month;
//	int day;
//};
//stu arr[102];
//bool cmp(stu a, stu b)
//{
//	if (a.year > b.year)return false;
//	else if (a.year == b.year)
//	{
//		if (a.month > b.month)return false;
//		else if (a.month == b.month)
//		{
//			if (a.day > b.day)return false;
//			else return true;
//		}
//		else return true;
//	}
//	else return true;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		cin >> arr[i].name >> arr[i].year >> arr[i].month >> arr[i].day;
//	}
//	sort(arr, arr + n, cmp);
//	for (i = 0; i < n; i++)
//	{
//		cout << arr[i].name << endl;
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//using namespace std;
//class stu
//{
//public:
//	string name;
//	int year;
//	int month;
//	int day;
//};
//stu arr[102];
//bool cmp(stu a, stu b)
//{
//	if (a.year > b.year)return false;
//	else if (a.year == b.year)
//	{
//		if (a.month > b.month)return false;
//		else if (a.month == b.month)
//		{
//			if (a.day > b.day)return false;
//			else if (a.day == b.day)return false;
//			else return true;
//		}
//		else return true;
//	}
//	else return true;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		cin >> arr[i].name >> arr[i].year >> arr[i].month >> arr[i].day;
//	}
//	sort(arr, arr + n, cmp);
//	for (i = 0; i < n; i++)
//	{
//		cout << arr[i].name << endl;
//	}
//	return 0;
//}


//洛谷p2241 
//int arr[5010];
//int  arr1[5010];
//long long a = 0, b = 0, k = 0;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	int i;
//	for (i = 1; i <= n; i++) { arr[n - i + 1] = i; a += i; }
//	for (i = 1; i <= m; i++) { arr1[m - i + 1] = i; b += i; }
//	for (i = 1; i <= min(m, n); i++) { k += arr[i] * arr1[i]; }
//	cout << k << " " << a*b - k << endl;
//	return 0;
//}
//洛谷p1618
//int n;
//int arr[10000][11];
//int arr1[11];
//int kind = 0;
//void ways(int total, int box)
//{
//	if (box == 10)
//	{
//		if (total == n)
//		{
//			for (int j = 0; j < 10; j++)arr[kind][j] = arr1[j];
//			kind++;
//		}
//		return;
//	}
//	for (int i = 1; i <= 3; i++)
//	{
//		arr1[box] = i;
//		ways(total + i, box + 1);
//	}
//	return;
//}
//int main()
//{
//	cin >> n;
//	ways(0, 0);
//	cout << kind << endl;
//	for (int i = 0; i < kind; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	return 0;
//}

//洛谷p1618
//int arr[12];
//int flag = 0;
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	int i, j, k;
//	for (i = (123 / a + min(123 % a, 1))*a; i < 1000; i += a)
//	{
//		j = (i / a)*b;
//		k = (i / a)*c;
//		if (j >= 1000 || k >= 1000)break;
//		int x = 3, m = 0, i1 = i, j1 = j, k1 = k;
//		while (x--)
//		{
//			arr[m++] = i1 % 10;
//			arr[m++] = j1 % 10;
//			arr[m++] = k1 % 10;
//			i1 /= 10;
//			j1 /= 10;
//			k1 /= 10;
//		}
//		int sump = 0, summ = 1;
//		for (x = 0; x < 9; x++)
//		{
//			sump += arr[x];
//			summ *= arr[x];
//		}
//		if (sump == 45 && summ == 362880)
//		{
//			cout << i << " " << j << " " << k << endl;
//			flag = 1;
//		}
//	}
//	if (flag == 0)cout << "No!!!" << endl;
//	return 0;
//}


//洛谷p1036(运用了DFS深度优先遍历)
//int arr[22];
//int arr1[22];
//int sc[22];
//int num = 0;
//int n, k;
//void calnum(int step)
//{
//	if (step == k)
//	{
//		int x = 0;
//		for (int i = 0; i < k; i++)
//		{
//			x += arr1[i];
//		}
//		if (x < 2)return;
//		if (x == 2) { num++; return; }
//		int flag = 1;
//		for (int i = 2; i <= sqrt(x); i++)
//		{
//			if (x%i == 0)flag = 0;
//		}
//		if (flag == 1) { num++; return; }
//		return;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (sc[i] == 0)
//		{
//			arr1[step] = arr[i];
//			sc[i] = 1;
//			calnum(step + 1);
//			sc[i] = 0;
//		}
//	}
//	return;
//}
//int main()
//{
//	cin >> n >> k;
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	calnum(0);
//	int j = 1;
//	for (i = 1; i <= k; i++)
//	{
//		j *= i;
//	}
//	cout << num / j << endl;
//	return 0;
//}

//洛谷p1157
//int arr[23];
//int arr1[23];
//int sc[23];
//int n, r;
//void my_sort(int step)
//{
//	if (step == r + 1)
//	{
//		for (int i = 1; i <= r; i++)printf("%3d", arr1[i]);
//		cout << endl;
//		return;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (sc[i] == 0)
//		{
//			arr1[step] = arr[i];
//			if (arr1[step] < arr1[step - 1])continue;
//			sc[i] = 1;
//			my_sort(step + 1);
//			sc[i] = 0;
//		}
//	}
//	return;
//}
//int main()
//{
//	cin >> n >> r;
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		arr[i] = i;
//	}
//	my_sort(1);
//	return 0;
//}




//int arr1[5];
//int arr[22];
//int sum = 0;
//bool cmp(int x,int y)
//{
//	return x > y;
//}
//int main()
//{
//	int num = 0;
//	for (int i = 0; i < 4; i++)cin >> arr1[i];
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < arr1[i]; j++)cin >> arr[j];
//		sort(arr, arr + arr1[i], cmp);
//		while (arr[0])
//		{
//			for (int j = 0; j < arr1[i]; j += 2)
//			{
//				int x;
//				if (j == 0 && arr[j + 1] == 0)
//				{
//					x = arr[j];
//					arr[j] -= x;
//					sum += x;
//				}
//				else if(j != 0 && arr[j + 1] == 0)
//				{
//					;
//				}
//				else
//				{
//					x = min(arr[j], arr[j + 1]);
//					arr[j] -= x;
//					arr[j + 1] -= x;
//					sum += x;
//				}
//			}
//			sort(arr, arr + arr1[i], cmp);
//		}
//	}
//	cout << sum << endl;
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int a[5], i, j, k, sum, t, homework[21], dp[2501];
//int main() {
//	for (i = 1; i <= 4; i++)
//		cin >> a[i];
//	for (i = 1; i <= 4; i++) {
//		sum = 0;
//		for (j = 1; j <= a[i]; j++)
//		{
//			cin >> homework[j];//输入
//			sum += homework[j];
//		}//总时间累加
//		for (j = 1; j <= a[i]; j++)
//			for (k = sum / 2; k >= homework[j]; k--)//只要是总和的一半
//				dp[k] = max(dp[k], dp[k - homework[j]] + homework[j]);//01背包
//		t += sum - dp[sum / 2];//累加为另一个脑子
//		for (j = 1; j <= sum / 2; j++)
//			dp[j] = 0;//清零
//	}
//	cout << t;//输出
//	return 0;
//}

//洛谷p1255
//int arr[5010][1200];
//int n;
//int main()
//{
//	cin >> n;
//	if (n == 0) { cout << 0 << endl; return 0; }
//	arr[1][1] = 1;
//	arr[2][1] = 2;
//	for (int i = 3; i <= n; i++)
//	{
//		for (int j = 1; j <= 1200; j++)
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 2][j];
//		}
//		for (int j = 1; j <= 1200; j++)
//		{
//			while (arr[i][j] > 9)
//			{
//				arr[i][j + 1]++;
//				arr[i][j] -= 10;
//			}
//		}
//	}
//	int sc = 0;
//	for (int i = 1200; i >= 1; i--)
//	{
//		if (!sc&&arr[n][i] == 0)continue;
//		sc = 1; cout << arr[n][i];
//	}
//	cout << endl;
//	return 0;
//}



//#define MAX_N 20
//#define ll long long
//int n;
//ll f[MAX_N][MAX_N];
//ll dfs(int i, int j)
//{
//	if (f[i][j]) return f[i][j];
//	if (i == 0)return 1; //边界 
//	if (j>0) f[i][j] += dfs(i, j - 1);
//	f[i][j] += dfs(i - 1, j + 1);
//	return f[i][j];
//}
//int main()
//{
//	scanf("%d", &n);
//	printf("%lld\n", dfs(n, 0));
//	return 0;
//}













//递归转递推  递推做法 
//#include<cstdio>
//#define MAX_N 20
//#define ll long long
//using namespace std;
//int n;
//ll f[MAX_N][MAX_N];
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 0; i <= n; i++)
//	{
//		f[0][i] = 1;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = i; j <= n; j++)
//		{
//			if (i == j)f[i][j] = f[i - 1][j];
//			else f[i][j] = f[i][j - 1] + f[i - 1][j];
//		}
//	}
//	printf("%lld\n", f[n][n]);
//	return 0;
//}
//
//











//递推做法
//#define ll long long
//ll arr[20][20];
//int main()
//{
//	int n;
//	cin >> n;
//	int i, j;
//	for (i = 0; i <= n; i++)arr[0][i] = 1;
//	for (i = 1; i <= n; i++)
//	{
//		for(j=i;)
//	}
//	return 0;
//}


//class stu
//{
//public:
//	int num;
//	int index;
//};
//bool cmp(stu a, stu b)
//{
//	if (a.num > b.num)return false;
//	else if (a.num == b.num)
//	{
//		if (a.index > b.index)return false;
//		else return true;
//	}
//	else return true;
//}
//stu arr[100010];
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		cin >> arr[i].num;
//		arr[i].index = i;
//	}
//	sort(arr, arr + n, cmp);
//	while (k--)
//	{
//		int x;
//		cin >> x;
//		int l = 0, r = n;
//		if (x > arr[n - 1].num) { cout << "The sequence does not contain this number!" << endl; continue; }
//		if (x % 2 == 0)
//		{
//			while (l <= r)
//			{
//				int mid = (l + r) / 2;
//				int m = arr[mid].num;
//				if (m > x)
//				{
//					r = mid;
//				}
//				else if (m == x)
//				{
//					while (arr[mid].num == x)mid++;
//					cout << arr[mid - 1].index + 1 << endl;
//					break;
//				}
//				else
//				{
//					l = mid;
//				}
//			}
//			if (l > r)cout << "The sequence does not contain this number!" << endl;
//		}
//		else
//		{
//			while (l <= r)
//			{
//				int mid = (l + r) / 2;
//				int m = arr[mid].num;
//				if (m > x)
//				{
//					r = mid;
//				}
//				else if (m == x)
//				{
//					while (arr[mid].num == x)mid--;
//					cout << arr[mid + 1].index + 1 << endl;
//					break;
//				}
//				else
//				{
//					l = mid;
//				}
//			}
//			if (l > r)cout << "The sequence does not contain this number!" << endl;
//		}
//	}
//	return 0;
//}




//long long arr[100010];
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	int i, j;
//	int l, r, k;
//	for (i = 0; i < m; i++)
//	{
//		cin >> l >> r >> k;
//		for (j = l; j <= r; j++)
//		{
//			arr[j] += k;
//		}
//	}
//	for (i = 1; i <= n; i++)cout << arr[i] << " ";
//	cout << endl;
//	return 0;
//}



//int arr[100010];
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//	int i;
//	for (int i = 0; i < n; i++)cin >> arr[i];
//	while (k--)
//	{
//		int x;
//		cin >> x;
//		if (x % 2 == 0)
//		{
//			int flag = 0;
//			int j;
//			for (i = 0; i < n; i++)
//			{
//				if (arr[i] == x)
//				{
//					j = i;
//					flag = 1;
//				}
//			}
//			if (flag == 1)cout << j + 1 << endl;
//			else cout << "The sequence does not contain this number!" << endl;
//		}
//		else
//		{
//			for (i = 0; i < n; i++)
//			{
//				if (x == arr[i])
//				{
//					cout << i + 1 << endl;
//					break;
//				}
//			}
//			if (i == n)cout << "The sequence does not contain this number!" << endl;
//		}
//	}
//	return 0;
//}


//char a[22][22];
//char b[22][22];
//int main()
//{
//	memset(b, '!', sizeof(b));
//	string s = "kunjuju";
//	int n;
//	cin >> n;
//	int i, j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n; j++)cin >> a[i][j];
//	}
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n; j++)
//		{
//			if (a[i][j] == 'k')
//			{
//				int x = i, y = j;
//				for (; y < j + 7; y++)
//				{
//					if (a[x][y] != s[y - j])break;
//				}
//				if (y == j + 7)
//				{
//					for (y = j; y < j + 7; y++)b[x][y] = a[x][y];
//					continue;
//				}
//				x = i, y = j;
//				for (; x < i + 7; x++)
//				{
//					if (a[x][y] != s[x - i])break;
//				}
//				if (x == i + 7)
//				{
//					for (x = i; x < i + 7; x++)b[x][y] = a[x][y];
//					continue;
//				}
//				x = i, y = j;
//				for (; x < i + 7 && y < j + 7; x++, y++)
//				{
//					if (a[x][y] != s[x - i])break;
//				}
//				if (x == i + 7 && y == j + 7)
//				{
//					for (x = i, y = j; x < i + 7 && y < j + 7; x++, y++)b[x][y] = a[x][y];
//					continue;
//				}
//			}
//		}
//	}
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n; j++)cout << b[i][j];
//		cout << endl;
//	}
//	return 0;
//}


//洛谷p1464
//记忆化搜索  边搜索边记录 可节约时间
//#include <bits/stdc++.h>
//using namespace std;
//#define ll long long
//ll arr[25][25][25];
//ll w(ll a, ll b, ll c)
//{
//	if (a <= 0 || b <= 0 || c <= 0) return 1;
//	else if (arr[a][b][c] != 0) return arr[a][b][c];
//	else if (a>20 || b>20 || c>20) arr[a][b][c] = w(20, 20, 20);
//	else if (a<b&&b<c) arr[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
//	else arr[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
//	return arr[a][b][c];
//}
//int main()
//{
//	ll a, b, c;
//	while (cin>>a>>b>>c) 
//	{
//		if (a == -1 && b == -1 && c == -1) break;
//		cout << "w(" << a << ", " << b << ", " << c << ")" << " = ";
//		if (a>20) a = 21;
//		if (b>20) b = 21;
//		if (c>20) c = 21;
//		cout << w(a, b, c) << endl;
//	}
//	return 0;
//}


//洛谷p1090
//class Time
//{
//public:
//	int begin;
//	int end;
//};
//Time a[1000000];
//bool cmp(Time a, Time b)
//{
//	return a.begin < b.begin;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	int i;
//	for (i = 0; i < n; i++)cin >> a[i].begin >> a[i].end;
//	sort(a, a + n, cmp);
//	int num = 1;
//	for (i = 0; i < n - 1; i++)
//	{
//		if (a[i].end > a[i + 1].begin)
//		{
//			if (a[i].end < a[i + 1].end)
//			{
//				a[i + 1] = a[i];
//			}
//		}
//		else
//		{
//			num++;
//		}
//	}
//	cout << num << endl;
//	return 0;
//}


//洛谷p1090  洛谷上学到最多的一题了
//int a[10010];
//int main()
//{
//	priority_queue<int> a;//默认大顶堆 等同于 priority_queue<int, vector<int>, less<int> > a;
//	for (int i = 10; i > 0; i--)a.push(i);
//	priority_queue<int, vector<int>, greater<int> > c;//定义为小顶堆
//	priority_queue<string>b;
//	for (int i = 10; i > 0; i--)c.push(i);
//	while (!a.empty()) { cout << a.top() << " "; a.pop(); }
//	cout << endl;
//	while (!c.empty()) { cout << c.top() << " "; c.pop(); }
//	cout << endl;
//	b.push("abc");
//	b.push("def");
//	while (!b.empty()) { cout << b.top() << " "; b.pop(); }//输出结果：def abc
//	cout << endl;
//	return 0;
//}
//关于pair的比较  先比较第一个元素，第一个相等比较第二个

//int main()
//{
//	priority_queue<pair<int, int> > a;
//	pair<int, int> b(1, 2);
//	pair<int, int> c(1, 3);
//	pair<int, int> d(2, 5);
//	a.push(d);
//	a.push(c);
//	a.push(b);
//	while (!a.empty())
//	{
//		cout << a.top().first << ' ' << a.top().second << '\n';
//		a.pop();
//	}
//}



//template<typename item>
//class smallest_heap {
//private:
//	item heap[10001];
//	int len;
//public:
//	smallest_heap();
//	void push(item const &);
//	void pop();
//	item top();
//	int size();
//	bool empty();
//
//};
//
//template<typename item>
//smallest_heap<item>::smallest_heap() {
//	len = 0;
//	memset(heap, 0, sizeof(heap));
//}
//
//template<typename item>
//void smallest_heap<item>::push(item const &n) {
//	heap[++len] = n; //前置++ 从一开始
//	int son = len, father = son / 2;
//	while (heap[son]<heap[father] && father >= 1) {//保持小顶堆特征
//		swap(heap[son], heap[father]);
//		son = father, father = son / 2;
//	}
//}
//
//template<typename item>
//void smallest_heap<item>::pop() {
//	swap(heap[1], heap[len]);
//	heap[len--] = 0;
//	int father = 1, son = 2;
//	while (son <= len) {
//		if (son<len && heap[son]>heap[son + 1]) son++;
//		if (heap[father]>heap[son]) {
//			swap(heap[father], heap[son]);
//			father = son, son = father * 2;
//		}
//		else break;
//	}
//}
//
//template<typename item>
//item smallest_heap<item>::top() {
//	return heap[1];
//}
//
//template<typename item>
//int smallest_heap<item>::size() {
//	return len;
//}
//
//template<typename item>
//bool smallest_heap<item>::empty() {
//	return len;
//}
//
//
//smallest_heap<int> h;
//int n, ans;
//int main() {
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		int a;
//		cin >> a;
//		h.push(a);
//	}
//	while (h.size()>1) {
//		int x = h.top(); h.pop();
//		int y = h.top(); h.pop();
//		h.push(x + y);
//		ans += x + y;
//	}
//	cout << ans << endl;
//	return 0;
//}





//先用库函数priority_queue完成
//int main()
//{
//	int n;
//	cin >> n;
//	priority_queue<int, vector<int>, greater<int>>a;//建立一个小顶堆
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		int x;
//		cin >> x;
//		a.push(x);
//	}
//	long long sum = 0;
//	while (a.size() > 1)
//	{
//		int x = a.top(); a.pop();
//		int y = a.top(); a.pop();
//		sum += x + y;
//		a.push(x + y);
//	}
//	cout << sum << endl;
//	return 0;
//}


//模拟实现小顶堆  成功
//class my_smallqueue
//{
//private:
//	int a[10010];
//	int len;
//public:
//	my_smallqueue();
//	void push(int);
//	void pop();
//	int top();
//	int size();
//	bool empty();
//};
//my_smallqueue::my_smallqueue()
//{
//	memset(a, 0, sizeof(a));
//	len = 0;
//}
//void my_smallqueue::push(int m)
//{
//	a[++len] = m;
//	int son = len, father = son / 2;
//	while (father >= 1 && a[father]>a[son])
//	{
//		swap(a[father], a[son]);
//		son = father, father = son / 2;
//	}
//}
//void my_smallqueue::pop()
//{
//	swap(a[1], a[len--]);
//	int father = 1, son = father * 2;
//	while (son <= len)
//	{
//		if (son<len && a[son] > a[son + 1])son++;//一个父亲节点最多只有两个子节点 要找到最小的那个节点来和父亲节点交换
//		if (a[father] > a[son])
//		{
//			swap(a[father], a[son]);//保持小顶堆特征
//			father = son, son = father * 2;
//		}
//		else break;
//	}
//
//}
//int my_smallqueue::size()
//{
//	return len;
//}
//int my_smallqueue::top()
//{
//	return a[1];
//}
//bool my_smallqueue::empty()
//{
//	if (len)return false;
//	return true;
//}
//int main()
//{
//	int n;
//	my_smallqueue a;
//	cin >> n;
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		int x;
//		cin >> x;
//		a.push(x);
//	}
//	long long sum = 0;
//	while (a.size()>1)
//	{
//		int x = a.top(); a.pop();
//		int y = a.top(); a.pop();
//		a.push(x + y);
//		sum += x + y;
//	}
//	cout << sum << endl;
//	return 0;
//}


//洛谷p2249
//#define _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//int a[1000010];
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)cin >> a[i];
//	while (m--)
//	{
//		int x;
//		cin >> x;
//		int left = 0, right = n - 1, mid = (left + right) / 2;
//		while (left < right)
//		{
//			if (a[mid] > x)right = mid - 1;
//			else if (a[mid] == x)break;
//			else left = mid + 1; mid = (left + right) / 2;
//		}
//		if (left < right)
//		{
//			while (a[mid] == x&&mid >= 0)mid--; cout << mid + 2 << " ";
//		}
//		else
//		{
//			if (a[left] == x) { while (a[left] == x&&left >= 0)left--; cout << left + 2 << " "; }
//			else cout << -1 << " ";
//		}
//	}
//	cout << endl;
//	return 0;
//}

//lower_bound 和upper_bound
//int main()
//{
//	a[0] = 0;
//	for (int i= 1; i < 10; i++)a[i] = 1;
//	a[10] = 2;//数组必须有序
//	int x = lower_bound(a, a + 11, 1) - a;//返回第一个不小于x的下标
//	cout << x << endl;
//	x = upper_bound(a, a + 11, 1) - a;//返回第一个大于x的下标
//	cout << x << endl;//1  2
//	auto m = equal_range(a, a + 11, 1);
//	x = m.second - m.first;
//	cout << x << endl;//9
//	return 0;
//}
