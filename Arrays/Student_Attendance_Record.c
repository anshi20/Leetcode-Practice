/*
You are given a string s representing an attendance record for a student where each character signifies whether the student was absent, late, or present on that day. The record only contains the following three characters:
    'A': Absent.
    'L': Late.
    'P': Present.
The student is eligible for an attendance award if they meet both of the following criteria:
    The student was absent ('A') for strictly fewer than 2 days total.
    The student was never late ('L') for 3 or more consecutive days.
Return true if the student is eligible for an attendance award, or false otherwise.
*/

bool checkRecord(char * s){
   int i,a=0,l=0;
   for(i=0;*(s+i)!='\0';i++)
   {
       if(*(s+i)=='A')
       {
           a++;
       }
       if(*(s+i)=='L')
       {   // l++;
           if(*(s+i+1)=='L')
           {     //l++;
               if(*(s+i+2)=='L')
               {
                    l++;
               }
           }
       }
   }
   if(a<2&&l<1)
        return true;
   else
        return false;
}
