/*
Given two integer arrays startTime and endTime and given an integer queryTime.

The ith student started doing their homework at the time startTime[i] and finished it at time endTime[i].

Return the number of students doing their homework at time queryTime. 
More formally, return the number of students where queryTime lays in the interval [startTime[i], endTime[i]] inclusive.

*/


int busyStudent(int startTime[], int startTimeSize, int endTime[], int endTimeSize, int queryTime){
     int i,count=0;
     for(i=0;i<startTimeSize;i++)
     {
             if((startTime[i]<=queryTime)&&(queryTime<=endTime[i]))
             {
                 count++;
             }
             else
                 continue;
     }
     return count;
}
