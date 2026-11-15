#include <iostream>
#include <vector>
#include <string>
#include<algorithm>
using namespace std;

int main() {

	vector <string> tasks;
cout<<"Welcome to Task List Tool!\n\n";
cout << "Menu Options: \n";
cout << "1. Add Task\n";
cout << "2. View Tasks\n";
cout << "3. Remove Task\n";
cout << "4. Quit\n\n";
cout <<"Task list system initialized and ready!\n";

int option;

while(true)
{
cout<<"Choose an option: ";
cin>>option;
cin.ignore();

if(option==1)//للاختيار الاول 
{

//int n;//اضافة عدد العناصر
//in>>n;

cin.ignore();//تحرير الذاكره او المحرر
	
	//	for (int i = 0; i < n; i++)
	//	{

			string task; //اضافة العناصر
			getline(cin, task); 
			tasks.push_back(task);
            for(int i=0;i<tasks.size();i++)
            {
cout<<"Task \""<< task<<"\" added successfully!\n";
            }
	//	}
        //cin.ignore();

cout<<"Total tasks: "<<tasks.size()<<endl;
}
       
       
      else if(option==3) 
       {
        

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
			cout <<i+1<< ". " << tasks.at(i) <<endl; }
}

        }
}  



else if(option==2){
    if (tasks.empty()){
        {
           cout<<"No tasks available.\n";
        }
     	for (int i = 0; i < tasks.size(); i++)
		{
			cout <<i+1<< ". " << tasks[i]<<endl;
        }
  //  cout<<"Total tasks: "<<tasks.size()<<endl;

}
    
} 
    
		
		//cout<<"...\n";
       
		else if(option==4)
{
    cout<<"Thank you for using Task List Tool!";
    break;
}		
else{  
    cout<<"Invalid choice. Please try again.";
}
        }
      
      
      return 0;
        }
