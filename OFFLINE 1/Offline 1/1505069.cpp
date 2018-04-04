#include<bits/stdc++.h>
using namespace std;

#define fread freopen("input.txt", "r", stdin)
#define fwrite	freopen("output.txt","w",stdout)

#define db(x) cout<<#x<<" -> "<<x<<endl;

class SymbolInfo
{
    string name,type;
    SymbolInfo * next;
public:
    SymbolInfo()
    {
        next=0;

    }

    SymbolInfo(string sym_name,string sym_type)
    {
        this->name=sym_name;
        this->type=sym_type;
        next=0;
    }

    string get_name()
    {
        return name;
    }

    string get_type()
    {
        return type;
    }

    SymbolInfo *get_next()
    {
        return next;
    }


    string set_name(string new_name)
    {
        this->name=new_name;
        return name;
    }

    string set_type(string new_type)
    {
        this->type=new_type;
        return type;
    }

    SymbolInfo *set_next(SymbolInfo * new_next)
    {
        next=new_next;
        return next;
    }
};

class ScopeTable
{
    int uniqueid,num;
    int pcon;
    SymbolInfo **symbol;
    ScopeTable *parentScope;
public:

    ScopeTable()
    {
        parentScope=0;
    }
    ScopeTable(int id,int n,ScopeTable *prev)
    {
        this->uniqueid=id;
        this->num=n;
        this->parentScope=prev;
        pcon=1;
        symbol=new SymbolInfo*[n];
        for(int i=0; i<n; i++)
        {
            symbol[i]=0;
        }

    }
    int Hash(string s)
    {
        unsigned long long  h = 5381;
        int len = s.length();

        for (int i = 0; i < len; i++)
            h += ((h * 33) + (unsigned long long )s[i]);

        return (h%this->num);
    }

    SymbolInfo *lookup(string target)
    {
        int hashv=Hash(target);
        SymbolInfo *temp=symbol[hashv];
        int pos=0;
        while(temp!=0)
        {
            if(temp->get_name()==target)
            {

                if(pcon)
                {
                    cout<<"Found in ScopeTable# "<<uniqueid<<" at position "<<hashv<<", "<<pos<<endl;

                }
                return temp;
            }
            temp=temp->get_next();
            pos++;

        }

        if(pcon)
        {
            cout<<target<<" not found"<<endl;
        }
        return temp;




    }
    bool Insert(string name,string type)
    {
        pcon=0;
        SymbolInfo *temp=lookup(name);
        if(temp!=0)
        {
            cout<<"<"<<name<<","<<type<<"> already exists in current ScopeTable"<<endl;
            return false;
        }

        int hashv=Hash(name);
        temp=symbol[hashv];
        SymbolInfo *new_symbol=new SymbolInfo(name,type);
        if(temp==0)
        {
            symbol[hashv]=new_symbol;
            cout<<"Inserted in ScopeTable# "<<uniqueid<<" at position "<<hashv<<", 0"<<endl;
            return true;
        }
        int pos=0;
        while(temp->get_next()!=0)
        {
            temp=temp->get_next();
            pos++;

        }
        temp->set_next(new_symbol);
        cout<<"Inserted in ScopeTable# "<<uniqueid<<" at position "<<hashv<<", "<<pos+1<<endl;
        return true;



    }
    bool Delete(string name)
    {
        pcon=1;
        if(lookup(name)==0)
        {
            return false;
        }
        pcon=0;
        int hashv=Hash(name);
        SymbolInfo *temp=symbol[hashv];
        if(temp->get_name()==name)
        {
            symbol[hashv]=temp->get_next();
            cout<<" Deleted entry at "<<hashv<<", 0 from current ScopeTable"<<endl;
            return true;

        }
        SymbolInfo *prev=0;
        SymbolInfo *next=0;
        next=temp;
        int pos=0;
        while(next->get_name()!=name)
        {
            prev=next;
            next=next->get_next();
            pos++;
        }
        prev->set_next(next->get_next());
        cout<<" Deleted entry at "<<hashv<<", "<<pos<<" from current ScopeTable"<<endl;




    }
    void printScopeTable()
    {
        cout<<" ScopeTable #"<<uniqueid<<endl;
        SymbolInfo *temp;

        for (int i = 0; i < num; i++)
        {
            cout <<" "<< i << " --> ";

            temp = symbol[i];
            while (temp)
            {
                cout << "<" << temp->get_name() << " : " << temp->get_type()<< ">  ";
                temp = temp->get_next();
            }

            cout<<endl;
        }
        cout<<endl;
    }

    void set_pcon(int x)
    {
        pcon=x;

    }
    int get_id()
    {
        return uniqueid;
    }
    ScopeTable *get_parent()
    {
        return parentScope;
    }
    ~ScopeTable()
    {
        for(int i=0; i<num; i++)
        {
            delete (symbol[i]);
        }
        delete(parentScope);
    }
};

class SymbolTable
{
    int n,current_id;
    stack<ScopeTable*>Scopes;
    ScopeTable * current;
public:
    SymbolTable()
    {
        current_id=0;
        current=0;
    }
    SymbolTable(int num)
    {
        this->n=num;
        this->current_id=0;
        current=0;
    }
    void Enter_Scope()
    {

        current_id++;
        ScopeTable *new_table;
        if(!Scopes.empty())
        {
            new_table=new ScopeTable(current_id,n,Scopes.top());
            cout<<" New ScopeTable with id "<<current_id<<" created"<<endl;
        }
        else
        {
            new_table=new ScopeTable(current_id,n,0);

        }
        Scopes.push(new_table);
        current=new_table;
    }
    void Exit_Scope()
    {
        if(current_id==0)
        {
            cout<<"No scope table found"<<endl;
            return;
        }
        cout<<"ScopeTable with id "<<current_id<<" removed"<<endl;
        current=Scopes.top()->get_parent();

        current_id--;
        Scopes.pop();
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
    bool Delete(string name)
    {
        if(current!=0)
        {
            return current->Delete(name);

        }
        else
        {
            cout<<"No scope table found"<<endl;
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
        cout<<"Not found"<<endl;
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


int main()
{
    fread;
    fwrite;

    int n;
    cin>>n;
    SymbolTable s(n);

    string com;

    while(cin>>com)
    {
        cout<<com<<" ";
        if(com=="I")
        {
            string sym_name,sym_type;
            cin>>sym_name>>sym_type;
            cout<<sym_name<<" "<<sym_type<<endl<<endl<<" ";
            s.Insert(sym_name,sym_type);
        }
        else if(com=="L")
        {
            string tar;
            cin>>tar;
            cout<<tar<<endl<<endl<<" ";

            s.lookup(tar);
        }
        else if(com=="D")
        {
            string tar;
            cin>>tar;
            cout<<tar<<endl<<endl<<" ";

            s.Delete(tar);
        }
        else if(com=="P")
        {
            string tar;
            cin>>tar;
            cout<<tar<<endl<<endl;

            if(tar=="A")
            {
                s.printall();
            }
            else
                s.printcurrent();
        }
        else if(com=="S")
        {
            cout<<endl<<endl<<" ";

            s.Enter_Scope();

        }
        else
        {
            cout<<endl<<endl<<" ";

            s.Exit_Scope();

        }
        cout<<endl;

    }

}
