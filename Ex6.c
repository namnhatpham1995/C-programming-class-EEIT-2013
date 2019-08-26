#include <stdio.h>

/* ID : www.itperday.com
*  LANG : C++
*/
string convert(int x)
{
       string rs = "";
       int k = x;
       int s = 1000,t;
       do{
        t = k - k%s;
        k = k - t;
        
        s = s/10;   
        if(1 <= t <= 10)
        {
           if(t == 1) rs += "I";
           if(t == 2) rs += "II";
           if(t == 3) rs += "III";
           if(t == 4) rs += "IV";
           if(t == 5) rs += "V";
           if(t == 6) rs += "VI";
           if(t == 7) rs += "VII";
           if(t == 8) rs += "VIII";
           if(t == 9) rs += "IX";
           if(t == 10) rs += "X";
        }
        if(10 < t <= 100)
        {
           
           if(t == 20) rs += "XX";
           if(t == 30) rs += "XXX";
           if(t == 40) rs += "XL";
           if(t == 50) rs += "L";
           if(t == 60) rs += "LX";
           if(t == 70) rs += "LXX";
           if(t == 80) rs += "LXXX";
           if(t == 90) rs += "XC";
           if(t == 100) rs += "C";
        }
        if(100 < t <= 1000)
        {
           if(t == 200) rs += "CC";
           if(t == 300) rs += "CCC";
           if(t == 400) rs += "CD";
           if(t == 500) rs += "D";
           if(t == 600) rs += "DC";
           if(t == 700) rs += "DCC";
           if(t == 800) rs += "DCCC";
           if(t == 900) rs += "CM";
           if(t == 1000) rs += "M";
        }
        if(1000 < t <= 5000)
        {
           if(t == 2000) rs += "MM";
           if(t == 3000) rs += "MMM";
           if(t == 4000) rs += "MMMM";
        }
        
       }while(k > 0);
       return rs;
}