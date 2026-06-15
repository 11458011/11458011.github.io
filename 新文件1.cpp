#include <iostream>
#include <queue>
#include <string>

int main() {
    // 創建一個儲存字串的佇列
    std::queue<std::string> message_queue;

    // 1. 入隊 (Push): 將元素加入隊尾
    message_queue.push("訊息 A"); // 隊尾
    message_queue.push("訊息 B"); 
    message_queue.push("訊息 C"); // 新的隊尾

    std::cout << "佇列大小: " << message_queue.size() << std::endl; // 輸出: 3
    std::cout << "隊首元素: " << message_queue.front() << std::endl; // 輸出: 訊息 A
    std::cout << "隊尾元素: " << message_queue.back() << std::endl;  // 輸出: 訊息 C

    // 2. 出隊 (Pop): 移除隊首元素 (FIFO)
    std::cout << "\n開始出隊..." << std::endl;
    while (!message_queue.empty()) {
        std::cout << "取出元素: " << message_queue.front() << std::endl;
        message_queue.pop(); // 移除隊首元素

        // 佇列現在的隊首會變成下一個元素
    }
    
    std::cout << "佇列大小: " << message_queue.size() << std::endl; // 輸出: 0

    return 0;
}
