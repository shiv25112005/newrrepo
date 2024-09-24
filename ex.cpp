#include<iostream>
#include<vector>

using namespace std;

/*int main(){
   int a=5;
   int b=4;
   int c;
    a>b ? c=a:c=b;
    cout<<c<<endl;
    return 0;
}*/





/*int main(){
    int a=2;
    int b=a++;
    cout<<b<<endl;
    b=++a;
    cout<<a;
    return 0;
}*/


/*int main(){
    int a= 1;
    int b= 1;
    int c= a || b--;
    int d= a--  && --b;
    cout<<a<<b<<c<<d<<endl;
    return 0;
    
}*/



//if statment
/*int main(){
    int num1,num2 ;
    cin>> num1 >> num2; 
    if (num2 != 0);{
        cout<< num1 / num2 ;
    }
    return 0 ;

}*/

// if else 

/*int main(){
    int s  ;
    cin>>s;
    if(s>80){
        cout<<"pass with a grade";
    }
    else if(s>60){
        cout<<"pass with b grade";
    }
    else if(s>40){
        cout<<"pass with c grade";

    }
    else{
        cout<<"fail";
    }
}*/ 

/*int main(){
    int cost_price ,selling_price;
    cin>>cost_price;
    cin>>selling_price;
    cout<<"cost price="<<cost_price<<endl;
    cout<<"selling price="<<selling_price<<endl;
    if(selling_price>cost_price){
        int profit=selling_price - cost_price;
        cout<<"profit:   "<<profit;
    }
    else{
        int loss = cost_price - selling_price;
        cout<<"loss:  "<<loss;

    }
    return 0;
}*/



//maximum of 3

/*int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;


    if(n1>n2 and n1>n3){
        cout<<"n1 is greatest";
    }
    else if(n2>n3 and n2> n1){
        cout<<"n2 is greatest";
    }
    else if(n3>n2 and n3>n1){
        cout<<"n3 is greatest";

    }
    else{
        cout<<"error";
    }
    return 0 ;
}*/




//nasted if and else
/*int main(){
    int a;
    cin>>a;
    if(a>80){
        if(a>90){
            cout<<"great";

        }
        else{
            cout<<"good";
        }

    }
    else{
       cout<<"only pass";}

    return 0 ;

    
}*/



//switch case 
/*int main(){  


    char alphabet;
    cout<<"enter alphabe here:";
    cin>>alphabet;

    switch (alphabet){
        case 'a':
        cout<<"it is vovel"<<endl;
        break;
        case 'e':
        cout<<"it is vovel"<<endl;
        break;
        case 'i':
        cout<<"it is vovel"<<endl;
        break;
        case 'o':
        cout<<"it is vovel"<<endl;
        break;
        case'u':
        cout<<"it is vovel"<<endl;
        break;
        default:
        cout<<"it is consunant"<<endl;

    
    }
}*/

//simle calcie

/*int main(){
    int a,b;
    char calci;
    cout<<"enter 1st no here:"<<endl;
    cin>>a;
    cout<<"enter 2nd no here"<<endl;
    cin>>b;
    cin>>calci;
   // cout<<1.add<<endl;

    switch (calci){
        case '1':
        cout<<a<<"+"<<b<<"="<<a+b<<endl;
        break;
        case '2':
        cout<<a<<"-"<<b<<"="<<a-b<<endl;
        break;
        case '3':
        cout<<a<<"*"<<b<<"="<<a*b<<endl;
        break;
        default:
        cout<<a<<"/"<<b<<"="<<a/b<<endl;
        
    }


}*/



//ternary operator
/* int main(){
    int marks;
    cin>>marks;
    marks>33 ? cout<<"pass" : cout<<"fail";
    return 0 ;

 }*/








//types of loops :
//1.while loop
//2.for loop 
//do-while loop

/*1.while loop
while(condition){
code
}*/



/*int main() {
    int n;
    cin>>n;
    int i = 1; // Initialize the counter variable

    while (i <= n) { // Condition for the loop to run
        cout<<i<<endl;// Print the current value of i
        i++; // Increment the counter
    }

    return 0; // Return 0 to indicate that the program ended successfully
}*/



/*int main(){
    int n ;
    cin>>n;
    int factorial = 1;
    int i=1;
    while(i <= n){
    factorial *= i;
    i++;
    }
    cout<<factorial;
    return 0;
}*/


/*int main(){
    int n;
    cin>>n;
    int sum=0;
    int i=1;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<sum<<endl;
    return 0 ;
}
*/

//2.for loop

/*int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i<<endl;
    }
    return 0;
}
*/


//omitting part of for loop
/*int main(){
    int n;
    cin>>n;
    int i=1;//this is omitting
    for(;i<=n;i++){
        cout<<i<<endl;
    }
    return 0;
} */


/*int main(){
    int n ;
    cin>>n;
    while( n % 5 == 0){
        if(n % 7 == 0){
            cout<<"it is divisible by 5 and 7 both";
            break;
        }
        else{
            cout<<"it is only divisible by 5";
            break;
        }
    }
}*/


//print the first multipal of 5 anwhich is also multipal of  7
/*int main(){
    int i=5;
    while(true){
        if(i % 7 == 0){
            cout<<i<<endl;
            break;
        }
        i+=5;
    }

}*/



//3.do while loop 

/*int main(){
    int n;
    cin>>n;
    int sum=0 ;
    do{
        int num;
        cin>>num;
        sum+=num;
        n-- ;

    }while(n>0);

    cout<<sum<<endl;

}*/


//continue variable 

//print all value b/w 1 to 50 except for the multiples of 3

/*int main(){
    for(int i=1 ; i<=50 ; i++){
        if(i%3 == 0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0 ;
}
*/

/*int main(){
    int n;
    cin>>n;
    int i=1;
    while(i <= n){
        if(i % 3 == 0){
            i++;
            continue;
        }
        cout<<i<<endl;
        i++;
    }
    return 0 ;
} 
*/

// int main(){
//     int n,m;
//     cin>>n;
//     cin>>m;
//     for(int i=1;i<=n;i++){
//         for(int j=1; j<=m ;j++){
//             cout<<"*";

//         }
//         cout<<endl;

//     }

// }



//int main(){
//     int x=10;
//     int n,m;
//     cin>>n>>m;
//     int array[n][m];
//     for(int i=0;i<n;i++){
//             cin>>array[i]
//     }
// }

// int main(){
//     int n,m;
//     cin>>n>>m;
//     for(int i=1;i<=n;i++){
//         for(int j=1; j<=m ;j++){
//             if(i==1 || i==n || j==1 || j==m ){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }

//         }
//         cout<<endl;

//     }
//     return 0;
    
//  }




//
// int main(){
//     int n;
//     cin>>n;

//     for(int i=1 ; i<=n ; i++){
//         for(int j=1 ;j<=i;j++){
//             cout<<"*";
             
        
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;

//     for(int i=1 ; i<=n ; i++){
//         for(int j=1 ;j<=n-i;j++){
//             cout<<"*";
             
        
//         }
//         cout<<endl;
//     }
//     return 0;
//     }



/*int main(){
    int n;
    cin>>n;

    for(int i=1 ;i<=n; i++){
        for(int j=1 ; j<= n-i ;j++){
            cout<<" ";

        }
        for(int j=1;j<=(2*i-1); j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
*/


// int main(){
//     int n;
//     cin>>n;
//     for(int i=1 ; i<=n ; i++){
//         for(int j=1 ; j<= n-i ; j++){
//             cout<<" ";
//         }
//         for(int j=1 ;j<=i ;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0 ;
// }



/*int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n ; i++){
        for(int j=i ;j<=n;j++){
            cout<<j;
        }
        for(int j=1 ;j<=i-1;j++){
            cout<<j;
        }
        cout<<endl;

    }
    return 0;


}*/

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n ; i++){
//         for(int j=1 ;j<=n;j++){
//             if(i == 1 || i == n || j == 1 || j == n){
//                 cout<<j;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;

//     }
//     return 0 ;
//}


// int main(){
//     int n;
//     cin>>n ;

//     for(int i=1 ; i<=n ; i++){
//         for(int j=1 ; j<= n;j++){
//             if((i+j)%2 == 0 ){
//                 cout<<"2";
//             }
//                 else{
//                     cout<<"1";
//                 }
            
//         }
//         cout<<endl;
//     }
//     return 0 ;


// }


// int main(){
//     int n;
//     cin>>n;

//     for(int i=1 ; i<=n ; i++){
//         for(int j=1 ; j<=i ; j++ ){
//             cout<<j;
//         }
//         cout<<endl;
             
        
//         }
//         cout<<endl;
//     return 0 ; 
// }

 
// int main(){
//     int n;
//     cin>>n;

//     for(int i=1 ; i<=n ; i++){
//         for(int j=1 ; j<= n-i ; j++ ){
//             cout<<" ";
//         }
//         for(int j=1 ; j<= 2*i-1 ;j++){
//             cout<<j;
//         }
//         cout<<endl;
//         }
        
//     return 0 ; 
// }



// int main(){
//     int n;
//     cin>>n;

//     for(int i=1 ; i<=n ; i++){
//         for(int j=1 ; j<= n-i ; j++ ){
//             cout<<" ";
//         }
//         for(int j=1 ; j<=i ;j++){
//             cout<<j;
            
//         }
//         for(int j=(i-1);j>=1;j--){
//             cout<<j;
//         }
//         cout<<endl;
//         }
        
//     return 0 ; 
// }






 //count no of digits for a given numbers

//   int main(){
//     int n;
//     cin>>n;

//     int digits=0 ;
//     while(n>0){
//         digits++;
//         n=n/10;

//     }
//     cout<<digits<<endl;
//     return 0 ;

//   }


 //find the sum  of digits in a given number n

/*int main(){
    int n;
    cin>>n;


    int sum=0;
    while(n>0){
        int lastdigit= n%10;
        sum+=lastdigit;
        n=n/10;
    }
    cout<<sum<<endl;
    return 0 ;
}

*/

//reverse of given no 
/*int main(){
    int n;
    cin>>n;
    int lastdigit;
    while(n>0){
        lastdigit=n%10;
        n=n/10;
        cout<<lastdigit;
    }
    return 0 ;
}

*/




//find the sum of following series
//s=1-2+3-4+5-6.....n

/*int main(){
    int n;
    cin>>n;
    int result=0;
    for(int i=0 ; i<=n ;i++){
        if(i % 2 == 0){
            result-=i;


        }
        else{
            result+=i;
        }
    }
    cout<<result<<endl;
    return 0 ;
}*/


/*int main(){
    int n ;
    cin>>n;
    int factorial=1;
    for(int i=1; i<=n ;i++){
        factorial*=i;
    }
    cout<<factorial;
    return 0 ;
}*/

// int main(){
//     int a,b;
//     cin>>a;
//     cin>>b;
//     int result=1;
//     for(int i=1 ; i<=b ;i++){
//         result*=a;
        
//     }
//     cout<<result;
//     return 0;}






// int main(){
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//     for(int j=0;j<=n-i;j++){
//         cout<<" ";
//         }
//     for(int j=0;j<i*2-1;j++){
//         cout<<(char)('A'+j);
//     }


// cout<<endl;
//     }
    
//     for(int k=1;k<=n-1;k++){
//         for(int j=0;j<=k;j++){ 
//             cout<<" ";
//         }
//         for(int j=0; j<=(n-k)*2-2;j++){
//             cout<<(char)('A'+j);
            
//         }
//         cout<<endl;
//     }
//     }





// int main(){
//     int n;
//     cin>>n;
//     if(n%2==0){
//         cout<<"not possible";
//     }
//     else{
//         for(int i=0; i<n;i++){
//             for(int j=0 ; j<n ;j++){
//                 if(i == n/2){
//                     cout<<"*";
//                 }
//                 else if(j == n/2){
//                     cout<<"*";
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             }
//         cout<<endl;
//          }


//     }
//     return 0 ;
// }


//code for binary to decimal form
// int main(){
//     int n;
//     cin>>n;
//     int ans=0;
//     int power=1;
//     while(n>0){
//         int last_digit= n % 10;
//         ans = ans + last_digit *power;
//         power*=2;
//         n/=10;


//     }
//     cout<<ans;
// }



//table
/*int main(){
    int n;
    cin>>n ;

    int result=1;
    int x;
    for(int i=1 ;i<=10;i++){

        result=n*i;
        cout<<result<<endl;

        
    }
   
}*/

//decimal to binary
// int main(){
//     int n;
//     cin>>n;
//     int remainder;
//     int ans=0;
//     int power=1;
    
//     while(n>0){
//         remainder=n%2;
//         ans+= remainder*power;
//         power*=10;
//         n/=2;
//     }
//     cout<<ans;
//     return 0 ;
//} 
   

//standred ,library

/*#include<cmath>
using namespace std;
int main(){
    cout<<pow(2,3)<<endl;
    cout<<sqrt(16)<<endl;
    return 0;

} */

/*int add(int a,int b){
    int result = a+b;
    return result;

}

void fun(string name){
    cout<<"you are "<<name<<endl;
}
int main(){
    fun("shiv");
    int ans = add(3,5);
    cout<<ans;
    return 0 ;
}*/



//funcyion prototype
//if we want to def a fun after function call,we need to use function

/*int add(int ,int);
void fun(string);


int main(){
    fun("shiv");
    int ans = add(3,5);
    cout<<ans;
    return 0 ;
}
void fun(string name){
    cout<<"you are "<<name<<endl;}
    int add(int a,int b){
    int result = a+b;
    return result;

}
*/


//Q,write a function to print square of first 5 number



//Q.given redius of circle .write function to print the area and circumfereence of circle
// #include<math.h>
// float area_of_circle(int r){
//     return 3.14*pow(r,2);
// }
// float circumference(int r){
//     return 2*3.14*r;
// }
// int main(){
//     int r=4;
//     cout<<area_of_circle(r)<<endl;
//     cout<<circumference(r);
// }


//given the age of person write a functiobn to check if person is eligibal to vote or not

// void vote(int age){
//     if(age>=18){
//         cout<<"yes";
//     }
//     else{
//         cout<<"not";
//     }
// }
// int main(){
//     cout<<"eligibal or not"<<endl;
//     vote(19);
//     vote(17);
// }



// given two numder a and b write a program to print odd no bw them


// int odd(int a,int b){
//     for(int i=a+1; i<b;i++){
        
//         if(i%2 !=0){
//             cout<<i<<endl;
//         }
//     }

// }
// int main(){
//     int a,b;
//     cin>>a;
//     cin>>b;
//     odd(a,b);

// }

// bool isodd(int num){
//     if(num %2 ==0){
//         return false;
//     }
//     else{
//         return true;
//     }
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     for(int i=a+1;i<b;i++){
//         if(isodd(i)){
//             cout<<i<<endl;
//         }
        
        
//     }
// }

//function to check whether num is prime or not

// bool isprime(int num){
//     for(int i=2;i<num;i++){
//         if(num%i ==0){
//             return false;
//         }
//         else{
//             return true;
//         }     if(num%i ==0){
//             return false;
//         }
//         else{
//             return true;
//         }
//     }
// }

// int main(){
//     int num;
//     cin>>num;
//     if(isprime(num)){
//         cout<<num<<" is prime number";
//     }
//     else{
//         cout<<num<<"is not prime";
//     }
// }

//ion to print prime num between two nums
// bool isprime(int num){
//     for(int i=2;i<num;i++){
//         if(num%i == 0)
//             return false;
        
        
            
//     }
//     return true;
// }
// int main(){
//     int a,b;
//     cout<<"enter small num here";
//     cin>>a;
//     cout<<"enter large num here";
//     cin>>b;

//     for(int num=a;num<=b;num++){
//         if(isprime(num)){
//             cout<<num<<endl;
//         }
//     }
// }





//scope in variable
//1.global scope 
//2.local scope
//  a.function scope
//  b.block scope

//formal parameter and actual parameter
// int add(int a,int b){//here a and b are formal parameter

//     int result=a+b;
//     cout<<result;

// }
// int main(){
//     add(2,5);//2,5 are actual parameter
// }



// void swap(int &x,int y){
//     int temp=x;
//     x=y;
//     y=temp;
    
// }
// int main(){
//     int x=9;
//     int c=1;
//     int &y = x;
//     swap(x,c);
//     cout<<x<<c;

// }
 

//*ARRAY*

// int main(){
//     int array[]={1,2,3,4,5,6,7,8,9};
//     cout<<sizeof(array)<<endl;//size of array-36
//     cout<<sizeof(array)/sizeof(array[0]);//length of array-9

// }

// int main(){
//     int array[5]={1,2,3,4,5};
//     cout<<array[0]<<endl;//1
//     cout<<array[1]<<endl;//2
// }

//to print element of array using loop
//for loop
//int main(){
//     int array[]={1,2,3,4,5,6};
//     int s=sizeof(array)/sizeof(array[0]);
//     for(int i=0;i<s;i++){
//         cout<<array[i]<<endl;
//     }
// }



//for each loop
// int main(){
//     int array[]={1,2,3,4,5,6};
//     int s=sizeof(array)/sizeof(array[0]);
//     for(int element:array){
//         cout<<element<<endl;
//     }
// }

// int main(){
//     int array[]={1,2,3,4,5,6};
//     int s=sizeof(array)/sizeof(array[0]);
//     int i=0;
//     int size=sizeof(array)/sizeof(array[0]);
//     while (i<size)
//     {
//         cout<<array[i]<<endl;
//         i++;
//     }
    
// }


// int main(){
//     char vovels[5][3];
//     for(int i=0;i<5;i++){
//         for(int j=0;j<3;j++){
//             cin>>vovels[i][j];}
//     }
//     for(int i=0;i<5;i++){
//         for(int j=0;j<3;j++){
//             cout<<vovels[i][j]<<" ";

//         }
//         cout<<endl;
//         }
// }

// int main(){
//     int array[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
//     cout<<array[2][3];
// }


//multiplication of matrices
//write a program to display multiplication of two matrices entered by user

// int main(){
//     int n,m;
//     cin>>n>>m;
//     int a[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>a[i][j];
//         }
//     }
//     int p,q;
//     cin>>p>>q;
//     int b[p][q];
//     for(int i=0;i<p;i++){
//         for(int j=0;j<q;j++){
//             cin>>b[i][j];
//         }
//     }
//     if(m!=p){
//         cout<<"multiplication og given matrixvis not possible";  
//     }
//     int c[n][q];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<q;j++){
//             int value=0;
//             for(int k=0;k<m;k++){
//                 value += a[i][k]* b[k][j];
//             }
//             c[i][j]=value;
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<q;j++){
//             cout<<c[i][j]<<" ";
//         }
//         cout<<endl;}
// }

// int main(){
//     int n,m;
//     cin>>n>>m;
//     int a[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>a[i][j];
//         }
//     }
//     int transpose[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             transpose[i][j]=a[j][i];
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<transpose[i][j]<<" ";
//         }cout<<endl;
//     }
//     return 0;
// }

//vector/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//pascal traingle

// vector<vector<int>>pascaltriangle(int n){
//     vector<vector<int>>pascal(n);
//     for(int i=0;i<n;i++){
//         pascal[i].resize(i+1);
//         pascal[i][0]=pascal[i][i]=1;
//         for(int j=1;j<i;j++){
//             pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];
//             }
//         }
       
       
    
//      return pascal;

// }
// int main(){
//     int n;
//     cin>>n;
//     vector<vector<int>>ans;
//     ans = pascaltriangle(n);
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<n-i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<" ";

//         }cout<<endl;
//     }
// }



//another method


// int main(){
//     int n;
//     cin>>n;
//     vector<vector<int>>pascal(n);
//     for(int i=0;i<n;i++){
//         pascal[i].resize(i+1);
//         pascal[i][0]=pascal[i][i]=1;
//         for(int j=1;j<i;j++){
//             pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];
//             }
//         }
       
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<pascal[i][j]<<" ";

//         }cout<<endl;
//     }
// }   

 //problem :find the which hhave max no of ones 
// int maxones(vector<vector<int>>&v){
//     int maxones=-1;
//     int maxrow=-1;
//     int column=v[0].size();
//     for(int i=0;i<v.size();i++){
//         for(int j=0;j<v[i].size();j++){
//             if(v[i][j]==1){
//                 int noofones=column - j;
//                 if(noofones>maxones){
//                     maxones=noofones;
//                     maxrow=i;
//                 }break;
//             }

//         }
//         }
//         return maxrow  ;
// }

// int main(){
//     int n,m;
//     cin>>n>>m;

//     vector<vector<int>>vec(n,vector<int>(m));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>vec[i][j];
//         }
//     }
//     cout<<"the row which contain max ones is: "<<maxones(vec);
//  }


//transpose of matrix
// int main(){
//     int r,c;
//     cin>>r>>c;
//     int array[r][c];
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cin>>array[i][j];        }
//     }
//     int array2[c][r];
    

//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             array2[j][i]=array[i][j];
            
//         }
//     }
    
//     for(int i=0;i<c;i++){
//         for(int j=0;j<r;j++){
//             cout<<array2[i][j]<<" ";

            
//         }cout<<endl;
//     }
    

// }


//given is a matrix rotetate it with 90degree in clockwise direction
//[1,2,3]
//[4,5,6]
//[7,8,9]
// int main(){
//     int r,c;
//     cin>>r>>c;
//     int array[r][c];
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cin>>array[i][j];        }
//     }
//     int array2[c][r];

//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             array2[j][i]=array[i][j];
            
//         }
//     }
    
//     for(int i=0;i<c;i++){
//         for(int j=r-1;j>=0;j--){
//             cout<<array2[i][j]<<" ";

            
//         }cout<<endl;
//     }
    

// }

//or

//with vector above q ans
// void rotate(vector<vector<int>>&v){
//     vector<vector<int>>z(v.size(),vector<int>(v.size()));
//     for(int i=0;i<v.size();i++){
//         for(int j=0;j<v.size();j++){
//             z[j][i]=v[i][j];
//         }

//     }
//     for(int i=0;i<v[0].size();i++){
//         for(int j=v.size()-1;j>=0;j--){
//             cout<<z[i][j]<<" ";

//         }cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<vector<int>>vec(n,vector<int>(n));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++)
//         {
//             cin>>vec[i][j];
//         }
//     }

//     rotate(vec);
// }


//or
//with out using any extra space

//   


//problem:spiral matrix
//diven an matrix ,return all element in spiral oeder 
// 
// void spiral(vector<vector<int>>&matrix){
//     int left=0;
//     int right=matrix[0].size()-1;
//     int top=0;
//     int down=matrix.size()-1;
//     int dirn=0;

//     while(top<=down && right>=left){
//         if(dirn==0){
//             for(int i=left;i<=right;i++){
//                 cout<<matrix[top][i];
//             }
//             top++;
//         }
    
//     else if(dirn==1){
//         for(int i=top;i<=down;i++){
//             cout<<matrix[i][right];
//         }
//         right--;

//     }
//     else if(dirn==2){
//         for(int i=right;i>=left;i--){
//             cout<<matrix[down][i];
//         }
//         down--;
//     }
//     else{
//         for(int i=down;i>=top;i--){
//             cout<<matrix[i][left];
//         }
//         left++;
//     }dirn=(dirn+1)%4;
//     }
   
// }


// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<vector<int>>matrix(n,vector<int>(m));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>matrix[i][j];
//         }
//     }
//     spiral(matrix);
// }



//given a matrix a of dimension n*m and 2 coordinates (l1,r1)and (l2,r2).
//return the sum of rectangle from (l1,r1)to(l2,r2)
// 1 2 3 
// 4 5 6 
// 7 8 9



// int sumofelement(vector<vector<int>>&vec,int l1,int r1,int l2,int r2){
//     int sum=0;
//     for(int i=l1;i<=l2;i++){
//         for(int j=r1;j<=r2;j++)
//         {
//             sum += vec[i][j];
//         }
//     }
//     cout<<sum;


// }
// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<vector<int>>matrix(n,vector<int>(m));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++)
//         {
//             cin>>matrix[i][j];
//         }
//     }
//     int l1,r1,l2,r2;
//     cin>>l1>>r1>>l2>>r2;
//     sumofelement(matrix,l1,r1,l2,r2);

// }

//pre sum method
// int presum(vector<vector<int>>&v,int l1,int l2,int r1,int r2){
//      int sum=0;
//      for(int i=0;i<v.size();i++){
//         for(int j=0;j<v[0].size();j++){
//             v[i][j]+=v[i][j-1];
//         }  
//      }
//      for(int i=0;i<v.size();i++){
//         for(int j=0;j<v[0].size();j++){
//             cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
//     for(int i=l1;i<=l2;i++){
//             if(r1!=0){
//                 sum+=v[i][r2]-v[i][r1-1];
//             }
//             else{
//                 sum+=v[i][r2];
//             }
        

//     }
//     cout<<"sum="<<sum;

// }
 

// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<vector<int>>vec(n,vector<int>(m));
//     for (int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>vec[i][j];
//         }
//     }
//     int l1,r1,l2,r2;
//     cin>>l1>>r1>>l2>>r2;
//     presum(vec,l1,l2,r1,r2);

// }




//TIME COMPLEXITY

// int main(){
//     int x,y;
//     cin>>x>>y;
//     int a=x;
//     int n=y-x+1;
//     int sum=(n*(2*a+(n-1)))/2;
//     cout<<sum;
// }int main(){
//     int x,y;
//     cin>>x>>y;
//     int a=x;
//     int n=y-x+1;
//     int sum=(n*(2*a+(n-1)))/2;
//     cout<<sum;
// }


//space comlexity

// int main(){
//     int n;
//     cin>>n;
//     int array[n+1];
//     array[0]=0;
//     array[1]=1;
//     for(int i=2;i<n+1;i++){
//         array[i]=array[i-1]+array[i-2];
//     }
//     cout<<array[n]<<endl;
// }

//as we increase n the array size increase so space comlexity is O(n)
//and n time for loop repeate therefore time comlexity is O(n)


// int main(){
//     int n;
//     cin>>n;
//     int a=0;
//     int b=1;
//     int c=1;
//     for(int i=2;i<n+1;i++){
//         c=a+b;
//         a=b;
//         b=c;

//     }
//     cout<<c<<endl;
// }

//its not a array so as we increse n the space is not increse so the space complexity is O(0) i.e. constant.
//the for loop repeat for n time so the time complexity is O(n).



