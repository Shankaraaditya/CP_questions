#include <iostream>
#include <bits/stdc++.h>



using namespace std;


bool in_array(string value, string *array)
{
    int size = (*array).size();
    for (int i = 0; i < size; i++)
    {
        if (value == array[i])
        {
            return 1;
        }
    }

    return 0;
}

int main(){
    int t;
    int flag=0;
    cin>>t;
    
    int n;
    do
    
    {
        int score_a=0;
        int score_b=0;
        int score_c=0;
    
        cin>>n;
        string a[n];
        string b[n];
        string c[n];

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>c[i];
        }


        //  for (int i = 0; i < n; i++)
        // {
        //   cout<<a[i]<<" ";
        // }

        for (int i = 0; i < n; i++)
        {
            // flag = flag + + ;
            if ( in_array(a[i],b)==1 &&  in_array(a[i],c) ==1 )
            {
                flag=flag+0;
            }
            else if (in_array(a[i],b)==1 &&  in_array(a[i],c) ==0  ||
                     in_array(a[i],b)==0 &&  in_array(a[i],c) ==1  )
            {
                flag=flag+1;
            }
            else if (in_array(a[i],b)==0 &&  in_array(a[i],c) ==0 )
            {
                flag=flag+3;
            }
       
         
        }  
        score_a = flag;
        flag = 0;


        for (int i = 0; i < n; i++)
        {
            // flag = flag + + ;
            if ( in_array(b[i],a)==1 &&  in_array(b[i],c) ==1 )
            {
                flag=flag+0;
            }
            else if (in_array(b[i],a)==1 &&  in_array(b[i],c) ==0  ||
                     in_array(b[i],a)==0 &&  in_array(b[i],c) ==1  )
            {
                flag=flag+1;
            }
            else if(in_array(b[i],a)==0 &&  in_array(b[i],c) ==0 )
            {
                flag=flag+3;
            }
       
         
        }  
        score_b = flag;
        flag = 0;


        for (int i = 0; i < n; i++)
        {
            // flag = flag + + ;
            if ( in_array(c[i],b)==1 &&  in_array(c[i],a) ==1 )
            {
                flag=flag+0;
            }
            else if (in_array(c[i],b)==1 &&  in_array(c[i],a) ==0  ||
                     in_array(c[i],b)==0 &&  in_array(c[i],a) ==1  )
            {
                flag=flag+1;
            }
            else if(in_array(c[i],b)==0 &&  in_array(c[i],a) ==0 )
            {
                flag=flag+3;
            }
       
        
        }  
        score_c = flag;
        flag = 0;
        
        




        cout<<score_a<<" "<<score_a<<" "<<score_c<<endl;
        



  


        t--;
    } while (t>0);
    
    return 0;
}