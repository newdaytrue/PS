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
set<string> s;
int main() {
	int N;
	scanf("%d", &N);
	char ans;
	int len;
	for (int i = 0; i < N; i++) {
		string in;
		cin >> in;
		s.insert(in);
		reverse(all(in));
		if (s.find(in) != s.end()) {
			ans = in[in.size() / 2];
			len = in.size();
		}
	}
	printf("%d %c\n", len, ans);
	return 0;
}