//
// Created by Latif Siddiq Suuny on 28-Apr-18.
//



#include <bits/stdc++.h>
#include "1505069_ScopeTable.h"

using namespace std;

class SymbolTable
{
    FILE *logout;
    int n,current_id;
    vector<ScopeTable*>Scopes;
    ScopeTable * current;
public:
    SymbolTable()
    {
        current_id=0;
        current=0;
    }
    SymbolTable(int num,FILE *x)
    {
        this->n=num;
        this->current_id=0;
        current=0;
	logout=x;
    }
    void Enter_Scope()
    {

        current_id++;
        ScopeTable *new_table;
        if(!Scopes.empty())
        {
            new_table=new ScopeTable(current_id,n,Scopes.back(),logout);
	   // fprintf(logout," New ScopeTable with id %d created\n",current_id);
          //  cout<<" New ScopeTable with id "<<current_id<<" created"<<endl;
        }
        else
        {
            new_table=new ScopeTable(current_id,n,0,logout);

        }
        Scopes.push_back(new_table);
        current=new_table;
    }
    void Exit_Scope()
    {
        if(current_id==0)
        {
            // fprintf(logout," No scope Table Found\n");
            return;
        }
 	//fprintf(logout," New ScopeTable with id %d removed\n",current_id);
       // cout<<"ScopeTable with id "<<current_id<<" removed"<<endl;
        current=Scopes.back()->get_parent();

        current_id--;
        Scopes.pop_back();
    }
    bool Insert(string name,string type)
    {  
        if(current!=0)
        {
            return current->Insert(name,type);
        }
        else
        {
            Enter_Scope();
            return current->Insert(name,type);
        }
	


    }
    bool Remove(string name)
    {
        if(current!=0)
        {
            return current->Delete(name);

        }
        else
        {
            //fprintf(logout," No scope Table Found\n");
            return false;
        }
    }
    SymbolInfo *lookup(string name)
    {
        ScopeTable *temp=current;
        while(temp)
        {

            temp->set_pcon(0);
            if(temp->lookup(name))
            {
                temp->set_pcon(1);
                return temp->lookup(name);
            }
            temp=temp->get_parent();
        }
        //fprintf(logout," Not Found\n");
        return 0;

    }

    void printcurrent()
    {
        return current->printScopeTable();
    }
    void printall()
    {
        ScopeTable *temp=current;
        while(temp)
        {
            temp->printScopeTable();
            temp=temp->get_parent();
        }
    }

};


