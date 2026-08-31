/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode * c = head ,* t = head;
        vector<int> v ,a ,b;
        while(c){
            v.push_back(c->val) ;
            c=c->next ;
        }
        for(int i =1;i<v.size()-1;i++){
            if(((v[i-1]<v[i])&&(v[i]>v[i+1]))||((v[i-1]>v[i])&&(v[i]<v[i+1]))){
                a.push_back(i) ;
            }
        }
        int n = a.size() ;
        int x =  1e5 ;
        if(n==0||n==1){ return {-1,-1} ;}
       for(int i =n-1;i>0;i--){
           x = min(x,a[i]-a[i-1]) ;
           
       }
         return {x,(a[n-1]-a[0])} ;
    }
};