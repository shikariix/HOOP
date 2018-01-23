#pragma once
#include <vector>
#include <mutex>

template<typename T>
class concurrent_vector {
public:

	concurrent_vector () {}

	void push_back(T t) {
		mutex.lock ();
		vec.push_back (t);
		mutex.unlock ();
	}

	void pop_back () {
		mutex.lock ();
		vec.pop_back ();
		mutex.unlock ();
	}

	int size ()	{
		return vec.size ();
	}

private:
	std::mutex mutex;

	std::vector<T> vec;
};
