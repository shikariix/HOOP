#include <queue>
#include <thread>
#include <iostream>
#include <condition_variable>
#include <mutex>

int c = 0;
bool done = false;
std::queue<int> goods;

std::condition_variable flag;
std::mutex mutex;

void producer () {
	for (int i = 0; i < 500; ++i) {
		goods.push (i);
		c++;
	}

	flag.notify_one ();
	done = true;
	std::cout << "Producer is done" << std::endl;
}

void consumer () {

	std::unique_lock<std::mutex> lock (mutex);
	while (!done) {
		std::cout << "Waiting for producer" << std::endl;
		flag.wait (lock);
	}
	while (!goods.empty ()) {
		goods.pop ();
		c--;
	}
}

int main () {
	std::thread producerThread (producer);
	std::thread consumerThread (consumer);

	producerThread.join ();
	consumerThread.join ();
	std::cout << "Net: " << c << std::endl;

	//Ik kreeg sowieso al 0 als result, waardoor ik niet goed weet of ik nou echt de oplossing heb of niet
	//Hoe dan ook compilet het!!

	char c;
	std::cin >> c;

	return 0;
}