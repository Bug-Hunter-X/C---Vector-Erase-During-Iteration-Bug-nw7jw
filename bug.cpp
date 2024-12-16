std::vector<int> vec = {1, 2, 3, 4, 5};

for (int i = 0; i < vec.size(); ++i) {
    if (vec[i] == 3) {
        vec.erase(vec.begin() + i);
    }
}