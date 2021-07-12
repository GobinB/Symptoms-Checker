/*
Symptoms Checker

- Gobin Bastola 
*/

#include <stdio.h> 
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <cmath>

//Utilizing OOP concept 
using namespace std;
// First class to establish the symptoms 
class symptomsChecker 
{
	public:
	int fever, cough, shortnessB, runnyNose, headache, sneezing, fatigue;
	
};
//Second Class
class checker2: public symptomsChecker
{
public:
		checker2()
		 {	// random 
		 	fever=rand()%2;
            cough=rand()%2;
            shortnessB=rand()%2;
            runnyNose=rand()%2;
            headache=rand()%2;
            sneezing=rand()%2;
            fatigue=rand()%2;
    
		}
};		
// assigning all variables 
int main() {
	int fever, cough, shortnessB, runnyNose, headache, sneezing, fatigue;
	int covid19 = 0, Flu = 0, cold = 0, other = 0, symptoms1 = 0;
	float flu1;
	float covid1;
	float cold1;
	float other1;
	
	time_t s;
	srand(time(&s));
	
	// Symptoms display chart
	
            cout << "Welcome To Symptoms Checker!"<<endl;
        cout <<  "Guide:     Common       Sometimes/Rarely       No"<<endl;
 	    cout <<"=====================================================\n";
        cout << "Symptoms                 Covid-19    Cold    Flu"<<endl;
        cout <<"=====================================================\n";
        cout << "Fever                   |  *       | +      | *"<<endl;
        cout << "Cough                   |  *       | +      | *"<<endl;
        cout << "shortness of Breath     |  *       | -      | -"<<endl;
        cout << "runnyNose               |  +       | *      | +" <<endl;
        cout << "Headaches               |  +       | +      | *"<<endl;
        cout << "Sneezing                |  -       | *      | -"<<endl;
        cout << "Fatigue                 |  +       | +      | *"<<endl<<endl;
        

    cout << "\nPlease enter the number of patients: ";
        cin >> symptoms1;
        // Logics below - 
    cout << "Thank you...";

        for(int i=0; i <symptoms1; i++)
        {
            
           if(fever==1 && cough==1 && shortnessB==1 && runnyNose==1 && headache==0 && sneezing==0 &&
               fatigue==0)
              	covid19++;
           else if(fever==1 && cough==1 && shortnessB==0 && runnyNose==0 && headache==1 && sneezing==1
               && fatigue==1)
            	cold++;
           else if(fever==1 && cough==1 && shortnessB==0 && runnyNose==1 && headache==1 && sneezing==0
               && fatigue==1)
              	Flu++;
           else
                other++;
                
        }

	
	
	covid1 = (float) covid19 / (float) symptoms1 * 100;
	cold1 = (float) cold / (float) symptoms1 * 100;
	flu1 = (float) Flu / (float) symptoms1 * 100;
	other1 = (float) other / (float) symptoms1 * 100;
	
	// The actual number of patient with symptoms. 
	cout << "\n# Patients with Covid-19 symptoms: " << covid1 << endl;
	cout << "# Patients with cold symptoms: " << cold1 << endl;
	cout << "# Patients with flu symptoms: " << flu1 << endl;
	cout << "# Patients with other illness symptoms: " << other1 << endl;
	
	// percentage of patients with symptoms.
    cout <<"=====================================================\n";	
    cout<<"covid19 "<<(float)covid19*100/symptoms1<<"%"<< endl;
    cout<<"Cold     "<<(float)cold*100/symptoms1<<"%"<<endl;
    cout<<"Flu      "<<(float)Flu*100/symptoms1<<"%"<<endl;
    cout<<"Others   "<<(float)other*100/symptoms1<<"%"<<endl;
    cout <<"=====================================================\n";
  

return 0;


}

   
   
   
