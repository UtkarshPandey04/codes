class Solution {
public:
    int days[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int toDays(string &s){
        int m=(s[0]-'0')*10+(s[1]-'0');
        int n=(s[3]-'0')*10+(s[4]-'0');
        int res=n;
        for(int i=0;i<m-1;i++) res+=days[i];
        return res;

    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int aStart=toDays(arriveAlice), aEnd=toDays(leaveAlice);
        int bStart=toDays(arriveBob), bEnd=toDays(leaveBob);
        int start=max(aStart,bStart);
        int end=min(aEnd,bEnd);
        return start<=end ? end-start+1:0;
    }
};