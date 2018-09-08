//Theophilus Ojukwu II
//Operating System
//Program 1

#include <iostream>
#include <cstdlib>
using namespace std;

void FCFS(int []);
void RR(int []);
void SPN(int []);
void SRT(int []);
void smallestServiceTime(int []);

int main()
{
    int process[20]; //20 processes
    //int * fin;

    cout << "Service/execution times: " << endl;
    //This loop randomizes executions time for each process
    for(int i = 0; i < 20; i++)
    {
        process[i] = rand() % 10 + 1;
        cout << process[i] << " ";
    }
    cout << endl;
    FCFS(process);
    SPN(process);


    return 0;
}
/**************************************************************************************
Function: FCFS

    This function is it calculate the Turnaround time and the Relative Turnaround time
    using the FCFS method.
***************************************************************************************/
void FCFS(int p[])
{
    int finish[20];     //finish time array
    int arrTR[20];      //Turnaround time array
    double arrRt[20];   //Relative Tr array
    double avgTR = 0.0, avgRt = 0.0;

    cout << "Finish time of the processes: " << endl;

    //finish time
    finish[0] = p[0];       //finish time for process 0 is the same
    cout << finish[0] << " ";
    //calculates finish time
    for(int i = 1; i < 20; i++)
    {
        finish[i] = finish[i-1] + p[i]; //finish time = submation of service time
        cout << finish[i] << " ";
    }

    //this loop calculates turnaround time and Relative Turnaround time.
    for(int j = 0; j < 20; j++)
    {
        arrTR[j] = finish[j] - j; //Turnaround time = finish - process
        arrRt[j] = (double)arrTR[j] / (double)p[j]; //Relative Turnaround time = Turnaround time / service time
        // adds the Turnaround time and Relative Tr to take the average
        avgRt += arrRt[j]; //Relative Tr
        avgTR += arrTR[j]; //Turnaround time
    }

    /*cout << endl << endl << "Turnaround Times = finish - process" << endl;
    for(int z = 0; z < 20; z++)
        cout << arrTR[z] << " ";

    cout << endl << endl << "Relative Turnaround time = Tr / service" << endl;
    for(int q = 0; q < 20; q++)
        cout << arrRt[q] << " ";
    */
    avgRt = avgRt /20;  // calculates the average Relative Turnaround time
    avgTR = avgTR/20;   // calculates the average turnaround time
    cout << endl;
    // put both averages in array to be returned
    cout << "Avg Turnaround Time: " << avgTR << endl;
    cout << "Avg Relative Tr: " << avgRt << endl << endl;

}

/*************************************************************************
Function: SPN (Shortest Process Next)

    This function calculates Turnaround time and Relative Turnaround time
    using the SPN method
*************************************************************************/

void SPN(int p[])
{
    //sort the procsess least to greatest service time
    cout << endl << endl << "Sorted array: " << endl;
    for(int z = 0; z < 20; z++)
        cout << p[z] << " ";
    int finish[20];     //finish time array
    int arrTR[20];      //Turnaround time array
    bool check[20];
    double arrRt[20];   //Relative Tr array
    double avgTR = 0.0, avgRt = 0.0;
    for(int i = 0; i < 20; i++)
    {
        finish[0] = p[0];
        for(int j = 0; j < finish[i]/2; j++)
        {
            // the goal is to find the smallest service time within the time of arrival available
        }
    }


}
//void smallestServiceTime(int p[])

/**************************************************************************
Function: RR (Round Robin)

    This function calculates Turnaround time and Relative Turnaround time
    using the Round Robin method
**************************************************************************/
void RR(int p[])
{
    //Lets do it
}
