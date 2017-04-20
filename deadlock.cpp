#include <thread>
#include <iostream>
#include <mutex>
#include <unistd.h>
using namespace std;

int shared_data = 0;
mutex *locks = NULL;
int thread_size;

void thread_function (int id){

	if (id%2)
	{
		for(int i = 0; i < thread_size; i++){
			locks[i].lock();
		}
	}
	else
	{	
		for (int i = thread_size - 1; i>=0; i--){
			locks[i].lock();		
		} 
	}
	
	shared_data = id;
	cout << "Thread " << id << " set shared value to " << shared_data << endl;

	if (id%2)
	{
		for (int i = thread_size - 1; i>= 0; i--){
			locks[i].unlock();		
		}
	}
	else{
		for (int i = 0; i < thread_size - 1; i++){
			locks[i].unlock();		
		}
	}

}

int main(int argc, char **argv){
	
	if (argc < 2 ){
		cout << "Usage: " << argv[0] << " <number> " << endl;
		return 0;
	}

	thread_size = atoi(argv[1]);
	thread* threads = new thread[thread_size];
	locks = new mutex[thread_size];
	
	for (int i = 0; i < thread_size; i++){
		threads[i] = thread(thread_function, i);
	}

	for (int i = 0; i < thread_size; i++){
		threads[i].join();
	}

	delete[] locks;
	delete[] threads;

	return 0;
}
