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
int N;
int Y, M;
int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int in;
		scanf("%d", &in);
		Y += ((in / 30) + 1) * 10;
		M += ((in / 60) + 1) * 15;
	}
	if (Y < M)
		printf("Y %d\n", Y);
	else if (M < Y)
		printf("M %d\n", M);
	else
		printf("Y M %d\n", Y, M);
	return 0;
}