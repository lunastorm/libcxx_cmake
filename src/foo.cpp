#include <iostream>
#include <chrono>
#include <vector>
#include <thread>
#include <mutex>

long currentTimeMillis() {
    using namespace std::chrono;
    return duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
}

int main(int argc, char* argv[]) {
    std::vector<std::thread> threads;
    std::mutex mtx;
    for(int i=0; i<10; ++i) {
        threads.push_back(std::thread([&mtx]{
            mtx.lock();
            std::cerr << "thread " << std::this_thread::get_id()
                << ": " << currentTimeMillis() << std::endl;
            mtx.unlock();
        }));
    }
    for(auto& th : threads) {
        th.join();
    }
    return 0;
}
