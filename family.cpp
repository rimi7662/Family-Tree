#include <bits/stdc++.h>
using namespace std;
struct Family
{
    string name;
    int age;
    string date_of_birth;
    string father_name;
    int child ;
    char child_name[100][100];
};
Family family[1000];
int i,j,k,l=1,flag =0;
char  s[1000],p[10000];
int main()
{
    cout<<"Enter the root name of this family:"<<endl;
    cout<<"name :";
    cin>>family[0].name;
    cout<<"age :";
    cin>>family[0].age;
    cout<<"date of birth :";
    cin>>family[0].date_of_birth;
    cout<<"no. of child:";
    cin>>family[0].child;
    for(i=0;i<family[0].child;i++)
    {
           cout<<family[0].name<<"'s child name :" ;
         cin>>family[0].child_name[i];
    }
    l=1;
    while(1)
    {
        cout<<"do you wan to add more?if yes press 1 and no press 2"<<endl;
        cin>>k;
        if(k==1)
        {
             cout<<"name :";
            cin>>family[l].name;
            cout<<"age :";
            cin>>family[l].age;
            cout<<"date of birth :";
            cin>>family[l].date_of_birth;
            cout<<"no. of child:";
            cin>>family[l].child;
            for(i=0;i<family[l].child;i++)
            {
                 cout<<family[l].name<<"'s child name :" ;
                cin>>family[l].child_name[i];
            }
        }
        else break;

        l=l+1;
    }
    while(1)
    {
        flag =0;
        cout<<"do you wan to see the information of this family tree?if yes press 1 and no press 2"<<endl;
        cin>>k;
        if(k==1)
        {
            cout<<"Please enter the name :";
                cin>>s;
                for(i=0;i<=l-1;i++)
                {
                    if(s==family[i].name)
                    {
                        cout<<"name :"<<family[i].name<<endl;
                        cout<<"age :"<<family[i].age<<endl;
                        cout<<"date of birth :"<<family[i].date_of_birth<<endl;
                        cout<<"no. of child:"<<family[i].child<<endl;
                        for(j=0;j<family[i].child;j++)
                            {
                                cout<<family[i].name<<"'s child name :"<<family[i].child_name[j]<<endl;
                            }
                    }
                }

        }
        else break ;

    }
    return 0;
}
