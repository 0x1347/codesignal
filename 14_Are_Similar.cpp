bool areSimilar(std::vector<int> a, std::vector<int> b) {
    if (a == b)
        return true;
    std::iter_swap(
        std::mismatch(a.begin(), a.end(), b.begin(), b.end()).first,
        std::mismatch(a.rbegin(), a.rend(), b.rbegin(), b.rend()).first
    );
    return a == b;
}
