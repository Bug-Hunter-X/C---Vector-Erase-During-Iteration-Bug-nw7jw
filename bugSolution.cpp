std::vector<int> vec = {1, 2, 3, 4, 5};

// Method 1: Using std::remove and erase
vec.erase(std::remove(vec.begin(), vec.end(), 3), vec.end());

// Method 2: Using a reverse iterator
for (auto it = vec.rbegin(); it != vec.rend(); ++it) {
    if (*it == 3) {
        vec.erase((it + 1).base()); // Use (it + 1).base() to get the iterator position correctly
        break; //Exit loop after erasing to avoid invalidating iterators
    }
}

// Method 3: Create a new vector
std::vector<int> vec2;
for(int x : vec){
  if(x != 3){
    vec2.push_back(x);
  }
}
vec = vec2; // Assign new vector to original vector