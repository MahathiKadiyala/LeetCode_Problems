class Solution {
public:
    bool canAliceWin(int n) {
        int x=10;
        int turn=1;
        while(n>=x) {
            n-=x;
            x--;
            turn++;
        }
        return turn%2==0;
    }
};