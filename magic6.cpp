#include <fstream>
using namespace std;
int ap[10], lg;
int main()
{
	ifstream f("magic6.in");
	int n;
	f >> n;
	char s[n+1];
	while (n > 0)
	{
		char c;
		f >> c;
		if (c >= 'a' && c <= 'z')
			s[lg++] = c-'a'+'A';
		else
			ap[c-'0']++;
		n--;
	}
	f.close();
	s[lg] = 0;
	ofstream g("magic6.out");
	g << s << '\n';
	for (int i = 1; i <= 9; i++)
		if (ap[i])
		{
			g << i;
			if (ap[0])
			{
				g << 0;
				ap[0] = 0;
			}
		}
	g.close();
	return 0;
}

