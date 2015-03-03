//
//  taskStorage.h
//  taskStorage
//
//  Created by Han on 28/02/15.
//  Copyright (c) 2015年 Name: Han Qinfei. All rights reserved.
//

#ifndef taskStorage_taskStorage_h
#define taskStorage_taskStorage_h

using namespace std;

class TaskStorage {
private:
  vector <Task> _listOfTasks;
  int _numOfTask;
  void sortStorage();
  
public:
  TaskStorage();
  
  void setOwner(string owner);
  
  void addTempTask(string activity, string time, string Date);
  bool addConflictedTask();
  
  void deleteTask(int numOfTask);
  
  int getTaskIndex(); //Need to pass in task
  
  
  vector <int> getDatesWithTask():
  
  void readFile();
  void saveFile();
};


#endif
