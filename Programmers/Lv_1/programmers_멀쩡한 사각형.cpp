using namespace std;

long long gcd(long long  a, long long  b) {

	if (a < b) {
		long long temp = a;
		a = b;
		b = temp;
	}
	if (b == 0)
		return a;
	else
		return gcd(b, a%b);
}

long long solution(int w, int h) {
	long long answer;
	long long W = (long long)w;
	long long H = (long long)h;

	answer = W * H - (W + H - gcd(W, H));
	return answer;
}