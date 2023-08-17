#include <iostream>
#include <vector>
#include <algorithm>

struct Response
{
    int words;
    int quality;
    int index;
};

bool compareQuality(const Response &a, const Response &b)
{
    return a.quality > b.quality;
}

int main()
{
    int t;
    std::cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int n;
        std::cin >> n;
        std::vector<Response> responses(n);
        for (int i = 0; i < n; ++i)
        {
            std::cin >> responses[i].words >> responses[i].quality;
            responses[i].index = i + 1;
        }

        std::sort(responses.begin(), responses.end(), compareQuality);
        for (int i = 0; i < n; ++i)
        {
            if(responses[i].words <= 10)
            {
                std::cout << responses[i].index << '\n';
                break;
            }
        }
    }
    return 0;
}
