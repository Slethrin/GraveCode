public class Solution {
    public string GenerateTag(string caption)
{
    List<string> words = caption
        .Split(' ', StringSplitOptions.RemoveEmptyEntries)
        .ToList();
    if(words.Count==0){
        return "#";
    }
    StringBuilder res = new StringBuilder();

    for (int i = 0; i < words.Count; i++)
    {
        if (words[i].Length == 0)
            continue;

        if (i == 0)
        {
            res.Append('#');
            res.Append(char.ToLower(words[i][0]));
            if (words[i].Length > 1)
                res.Append(words[i].Substring(1).ToLower());
        }
        else
        {
            res.Append(char.ToUpper(words[i][0]));
            if (words[i].Length > 1)
                res.Append(words[i].Substring(1).ToLower());
        }
    }

    string text = res.ToString();
    return text.Length <= 100 ? text : text.Substring(0, 100);
}
}