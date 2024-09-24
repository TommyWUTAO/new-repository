#include <iostream>
#include <string>
#include <curl/curl.h>

// 回调函数，用于处理API的返回数据
size_t WriteCallback(void* contents, size_t size, size_t nmemb, std::string* s) {
    size_t totalSize = size * nmemb;
    s->append((char*)contents, totalSize);
    return totalSize;
}

int main() {
    CURL* curl;
    CURLcode res;
    std::string readBuffer;

    // 初始化 CURL
    curl = curl_easy_init();
    if (curl) {
        // 设置请求的 URL
        curl_easy_setopt(curl, CURLOPT_URL, "https://api.openai.com/v1/completions");

        // 正确使用原始字符串
        std::string data = R"(
        {
            "model": "text-davinci-003",
            "prompt": "请写一篇关于环境保护的文章。",
            "max_tokens": 150
        }
        )";  // 确保字符串正确闭合

        // 声明和初始化 headers
        struct curl_slist* headers = NULL;
        headers = curl_slist_append(headers, "Content-Type: application/json");
        headers = curl_slist_append(headers, "Authorization: Bearer sk-...vAYA");  // 替换为实际的 API 密钥

        // 设置 HTTP 请求头
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data.c_str());

        // 设置回调函数，用于处理返回的数据
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);

        // 执行请求
        res = curl_easy_perform(curl);

        // 检查请求是否成功
        if (res != CURLE_OK) {
            std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << std::endl;
        } else {
            // 打印API的返回数据
            std::cout << "Response: " << readBuffer << std::endl;
        }

        // 清理资源
        curl_easy_cleanup(curl);
        curl_slist_free_all(headers); // 释放 HTTP 头列表
    }

    return 0;
}