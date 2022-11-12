class Solution
{
public:
    bool checkIfPangram(string sentence)
    {
        set<int> s;
        for (auto &a : sentence) // insert all in set
            s.insert(a);
        return s.size() == 26; // set gives unique result
    }
};