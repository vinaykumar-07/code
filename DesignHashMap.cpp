class MyHashMap
{
public:
    vector<pair<int, int>> res;
    MyHashMap()
    {
    }

    void put(int key, int value)
    {
        bool ram = false;
        for (int i = 0; i < res.size(); i++)
        {
            if (res[i].first == key)
            {
                ram = true;
                res[i].second = value;
                break;
            }
        }
        if (ram == false)
        {
            res.push_back(make_pair(key, value));
        }
    }

    int get(int key)
    {
        for (int i = 0; i < res.size(); i++)
        {
            if (res[i].first == key and res[i].second != -1)
            {
                return res[i].second;
            }
        }
        return -1;
    }

    void remove(int key)
    {
        for (int i = 0; i < res.size(); i++)
        {
            if (res[i].first == key)
            {
                res[i].second = -1;
            }
        }
    }
};