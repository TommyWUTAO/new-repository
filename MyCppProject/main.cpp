#include "crow.h"  // 包含 Crow 库
#include <map>
#include <string>
#include <vector>

// 商品数据
std::map<int, std::pair<std::string, double>> products = {
    {1, {"iPhone", 999.99}},
    {2, {"MacBook Pro", 1999.99}},
    {3, {"AirPods", 199.99}},
};

// 订单数据
std::vector<std::string> orders;

// 渲染主页
std::string renderHomePage() {
    std::string html = R"(
    <html>
    <head>
        <link rel="stylesheet" href="/static/style.css">
        <title>Online Store</title>
    </head>
    <body>
        <h1>Welcome to Our Store</h1>
        <ul>)";
    for (const auto& [id, product] : products) {
        html += "<li>" + product.first + " - $" + std::to_string(product.second) +
                " <a href='/buy?id=" + std::to_string(id) + "'>Buy</a></li>";
    }
    html += "</ul></body></html>";
    return html;
}

int main() {
    crow::SimpleApp app;  // 创建 Crow 应用

    // 路由：主页
    CROW_ROUTE(app, "/")([]() {
        return renderHomePage();
    });

    // 路由：处理购买请求
    CROW_ROUTE(app, "/buy").methods("GET"_method)([](const crow::request& req) {
        auto id = req.url_params.get("id");
        if (!id) {
            return crow::response(400, "Missing product ID");
        }

        int product_id = std::stoi(id);
        if (products.find(product_id) == products.end()) {
            return crow::response(404, "Product not found");
        }

        // 添加订单
        orders.push_back("Ordered: " + products[product_id].first);
        return crow::response(200, "Order placed for: " + products[product_id].first);
    });

    // 路由：查看订单
    CROW_ROUTE(app, "/orders")([]() {
        std::string html = "<h1>Orders</h1><ul>";
        for (const auto& order : orders) {
            html += "<li>" + order + "</li>";
        }
        html += "</ul>";
        return html;
    });

    // 启动服务器
    app.port(18080).multithreaded().run();

    return 0;
}