/////////////////////////////////////////////////////
#ifdef _DEBUG
#include "bits_stdc++.h"
#else
#include "bits/stdc++.h"
#endif
using namespace std;
typedef pair<int, int> pii;
typedef vector<vector<pii > > Edge;
typedef unsigned long long llu;
typedef long long ll;
typedef priority_queue<pii > Pq;
typedef vector<int>::iterator It;
#define INF 0x3f3f3f3f
#define UINF 0xffffffffu
#define LINF 0x3f3f3f3f3f3f3f3fll
#define MOD 1000000007
#define EOD 1e-9
#define all(x) x.begin(),x.end()
const double PI = acos(0.0)*2.0;
/////////////////////////////////////////////////////
int main() {
	int arr[3];
	arr[0] = 1;
	arr[1] = 0;
	arr[2] = 0;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'A')
			swap(arr[0], arr[1]);
		else if (s[i] == 'B')
			swap(arr[1], arr[2]);
		else
			swap(arr[0], arr[2]);
	}
	for (int i = 0; i < 3; i++)
		if (arr[i] == 1)
			printf("%d\n", i + 1);
	return 0;
}