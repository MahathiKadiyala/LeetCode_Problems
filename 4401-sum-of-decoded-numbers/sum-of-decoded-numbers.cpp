class Solution {
public:
        int modu=1e9+7;
        long long mod_pow(long long x,long long y){
             long long res = 1;
        while (y>0) {
            if (y%2==1) {
                res=(res*x)%modu;
            }
            x =(x*x)%modu;
            y/=2;
        }

        return res;
        }
      int sumDecoded(vector<long long>& nums){
          long long sum=0;
          for(long long n:nums){
              int w=n%10;
              long long d=n/10;
              string s=to_string(d);
              long long x=stoll(s.substr(0,w));
              long long y=stoll(s.substr(w));
              long long ans=mod_pow(x,y);
              sum=(sum+ans)%modu;
          }
      return sum;
      }
};
//  long long ans=1;
//               long long b=x;
//               int ex=y;
//               while(ex>0){
//                   if(ex%2==1) ans=(ans*b)%modu;
//                   ex/=2;
//                   b=(b*b)%modu;
//               }
//               sum=(sum+ans)