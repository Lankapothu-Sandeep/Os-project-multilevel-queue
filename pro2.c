#include<stdio.h>
int main()
{
int Arrival_Time[10],Burst_TIme[10],arr[10],End_Time,i,Smallest;
int left=0,n,TIme,wt=0,TT=0;
printf("PLEASE ENTER THE NO OF PROCESSES :");
scanf("%d",&n);
for(i=0;i<n;i++)
{	
printf("ENTER THE ARRIVAL TIME OF PROCESS P%d : ",i+1);
scanf("%d",&Arrival_Time[i]);
printf("ENTER THE BURST TIME OF PROCESS P%d : ",i+1);
scanf("%d",&Burst_TIme[i]);
arr[i]=Burst_TIme[i];
}
printf("\n\nPROCESS\t|TURNAROUND TIME| WAITING TIME\n\n");
arr[9]=9999;
for(TIme=0;left!=n;TIme++)
{
Smallest=9;
for(i=0;i<n;i++)
{
if(Arrival_Time[i]<=TIme && arr[i]<arr[Smallest] && arr[i]>0)
{
Smallest=i;
}}
        
arr[Smallest]--;
if(arr[Smallest]==0)
{
left++;
End_Time=TIme+1;
printf("\nP[%d]\t|\t%d\t|\t%d",Smallest+1,End_Time-Arrival_Time[Smallest],End_Time-Burst_TIme[Smallest]-Arrival_Time[Smallest]);
wt+=End_Time-Burst_TIme[Smallest]-Arrival_Time[Smallest];
TT+=End_Time-Arrival_Time[Smallest];
}
}
printf("\n\nAverage waiting TIme = %f\n",wt*1.0/n);
printf("Average Turnaround TIme = %f",TT*1.0/5);
return (0);
}  

