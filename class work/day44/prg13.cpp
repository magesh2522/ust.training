#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

char flag = 0;
	mutex m;
	
	void solution(int N, string word, char enable, char functionality)
	{
		

		for (int i = 1; i < N; )
		{

			lock_guard<mutex> lock(m);
			if (flag == enable)
			{


				if (word == "none")
				{
					if (((i % 3) != 0) && ((i % 5) != 0))
						cout << i << endl;
				}
				else if (word == "fizz")
				{
					if (((i % 3) == 0) && ((i % 5) != 0))
						cout << word << endl;
				}
				else if (word == "buzz")
				{
					if (((i % 3) != 0) && ((i % 5) == 0))
						cout << word << endl;
				}
				else if (word == "fizzbuzz")
				{
					if (((i % 3) == 0) && ((i % 5) == 0))
						cout << word << endl;
				}




				flag = ++flag % 4;
				i++;
			}
		}











	}


int main()
{
	int n;
	cin >> n;
	
		thread t1(solution,n, "fizz", 0, 3);
		thread t2(solution, n, "buzz", 1, 5);
		thread t3(solution, n, "fizzbuzz", 2, 15);
		thread t4(solution,  n, "none", 3, 1);
		t1.join();
		t2.join();
		t3.join();
		t4.join();
	
}