#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

bool globale = true;

class Problem
{
	mutex m;
public:

	void pool()
	{
		thread t1(&Problem::Solution, this, 1, 1);
		thread t2(&Problem::Solution, this, 0, 0);

		t1.join();
		t2.join();

	}

	void Solution(bool function, bool  enable)
	{
		for (int i = 1; i <= 20; )
		{
			lock_guard<mutex> lock(m);
			if (globale == enable)
			{
				if (i % 2 == function)
					cout << i << endl;
				i++;
				globale = !globale;
			}
		}
	}
};

int main()
{
	Problem p;

	p.pool();
}