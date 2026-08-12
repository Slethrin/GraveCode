public class Solution {
    public int MaxSubarrayLength(int[] v, int k)
{
    Dictionary<int, int> m = new Dictionary<int, int>();

    int n = v.Length;
    int i = 0, j = 0;
    int ans = 0;

    while (i <= j && j < n)
    {
        if (!m.ContainsKey(v[j]))
            m[v[j]] = 0;

        m[v[j]]++;

        if (m[v[j]] > k)
        {
            while (i <= j && m[v[j]] > k)
            {
                m[v[i]]--;

                if (m[v[i]] == 0)
                    m.Remove(v[i]);

                i++;
            }
        }

        ans = Math.Max(ans, j - i + 1);
        j++;
    }

    return ans;
}
}