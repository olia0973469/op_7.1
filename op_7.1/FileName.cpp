#include <iostream> 
#include <algorithm> 
#include <vector>
#include <ctime>
#include <numeric>
using namespace std;
int RandomNumber() { return (std::rand() % 100); }
void print(vector<int> a)
{
	for (int i : a)
		cout << i << " ";
	cout << endl;
}

bool IsOdd(int i) { return ((i % 2) == 1); }

int main()
{
	srand(unsigned(time(0)));
	int n;
	cout << "n = ? "; cin >> n;
	vector<int> v(n);
	generate(v.begin(), v.end(), RandomNumber);
	print(v);
	cout << count_if(v.begin(), v.end(), IsOdd);
	return 0;
}
