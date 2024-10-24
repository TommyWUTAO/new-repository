class Helper {
public:
    static double euclideanDistance(std::pair<int, int> item1, std::pair<int, int> item2) {
        int dx = item1.first - item2.first;
        int dy = item1.second - item2.second;
        return std::sqrt(dx * dx + dy * dy);
    }
};