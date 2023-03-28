#include <iostream>
#include <chrono>
#include <thread>

int main() {
    std::cout << "Deep Thought: \"I have been asked to provide the Ultimate Question of Life, the Universe, and Everything.\"" << std::endl;

    std::cout << "Deep Thought: \"Calculating...\"" << std::endl;

    int count = 75; // 75 million years in tenths of a second
    std::chrono::steady_clock::time_point start_time = std::chrono::steady_clock::now();
    while (count > 0) {
        std::chrono::steady_clock::time_point current_time = std::chrono::steady_clock::now();
        std::chrono::duration<double> elapsed_time = std::chrono::duration_cast<std::chrono::duration<double>>(current_time - start_time);
        double remaining_time = 7.5 - elapsed_time.count();
        std::cout << "Processing... " << static_cast<int>(remaining_time * 10) << " Million years left " <<std::endl;
        count -= 1;
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // wait 0.1 seconds
    }

    std::cout << "Deep Thought: \"The answer is...\"" << std::endl;
    std::cout << "Deep Thought: \"42.\"" << std::endl;

    std::cout << "Deep Thought: \"However, the answer is meaningless without knowing the Ultimate Question.\"" << std::endl;
    std::cout << "Deep Thought: \"I suggest building a more powerful computer, such as Earth, to determine the question that the answer relates to.\"" << std::endl;

    return 0;
}

