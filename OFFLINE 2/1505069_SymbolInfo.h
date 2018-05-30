//
// Created by Latif Siddiq Suuny on 28-Apr-18.
//



#include <bits/stdc++.h>
using namespace std;

class SymbolInfo
        {
        string name,type;
        SymbolInfo * next;
        public:
        SymbolInfo()
        {
            this->next=0;

        }

        SymbolInfo(string sym_name,string sym_type)
        {
            this->name=sym_name;
            this->type=sym_type;
            this->next=0;
        }

        string get_name()
        {
            return this->name;
        }

        string get_type()
        {
            return this->type;
        }

        SymbolInfo *get_next()
        {
            return this->next;
        }


        string set_name(string new_name)
        {
            this->name=new_name;
            return this->name;
        }

        string set_type(string new_type)
        {
            this->type=new_type;
            return this->type;
        }

        SymbolInfo *set_next(SymbolInfo * new_next)
        {
            this->next=new_next;
            return this->next;
        }
        };
