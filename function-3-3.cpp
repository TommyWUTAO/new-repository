double weighted_average(int array[], int n) {
    if (n < 1) {
        return 0; // 如果数组大小小于1，返回0
    }

    double total_weighted_sum = 0; // 用于存储加权总和

    // 使用动态数组来跟踪唯一元素及其计数
    int* unique_elements = new int[n];
    int* counts = new int[n];
    int unique_count = 0;

    // 统计每个元素的出现次数
    for (int i = 0; i < n; ++i) {
        bool found = false;
        for (int j = 0; j < unique_count; ++j) {
            if (array[i] == unique_elements[j]) {
                counts[j]++;
                found = true;
                break;
            }
        }
        if (!found) {
            unique_elements[unique_count] = array[i];
            counts[unique_count] = 1;
            unique_count++;
        }
    }

    // 计算加权总和
    for (int i = 0; i < unique_count; ++i) {
        total_weighted_sum += unique_elements[i] * counts[i];
    }

    // 清理动态分配的内存
    delete[] unique_elements;
    delete[] counts;

    // 返回加权平均数
    return total_weighted_sum / n;
}