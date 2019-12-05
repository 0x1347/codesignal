std::vector<int> sortByHeight(std::vector<int> a) {
    std::vector <int> b;
    for (int i = 0; i < a.size();i++){
        if (a[i] != -1)
        {
            b.push_back(a[i]);
        }
    }
    std::sort (b.begin(), b.end() );
    int j = 0;
    for (int i =0; i < a.size();i++){
        if (a[i] != -1)
        {
            a[i] = b[j];
            j++;
        }
    }
return a;
}
