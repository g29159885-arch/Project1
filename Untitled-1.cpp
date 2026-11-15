#include <iostream>
#include <vector>
#include <string>
#include<algorithm>
using namespace std;

int main() {

 wille(true){
	vector <string> tasks;
cout<<"Welcome to Task List Tool!\n\n";
cout << "Menu Options: \n";
cout << "1. Add Task\n";
cout << "2. View Tasks\n";
cout << "3. Quit\n\n";
cout <<"Task list system initialized and ready!\n";

int n;//اضافة عدد العناصر
cin>>n;

cin.ignore();//تحرير الذاكره او المحرر
	
		for (int i = 0; i < n; i++)
		{

			string n; //اضافة العناصر
			getline(cin, n); 
			tasks.push_back(n);


		}
        //cin.ignore();
       
       
       
       
       
        int taskNumber;
        cin>>taskNumber;//اضافة الفهرس المراد حذفة
        if(taskNumber < 1 || taskNumber>tasks.size()){
        cout<<"Error: Invalid task number. Please enter a number between 1 and "<<tasks.size()<<".\n";
        }
        else
        {cout<<"Task \""<<tasks[taskNumber-1] <<"\" removed successfully!\n"; 
tasks.erase(tasks.begin()+(taskNumber-1));
        
        

    
    
    
    
    
    if ( tasks.empty()) //التحقق اذا كان فارغ
		cout << "No tasks remaining.\n";
       else{
	    cout << "Remaining Tasks:\n";
       
    
    
    	for (int i = 0; i < tasks.size(); i++)
		{
			cout <<i+1<< ". " << tasks[i]<<endl;
        }
		
		//cout<<"...\n";
       }
		cout<<"Total tasks: "<<tasks.size()<<endl;
		
        }
 }