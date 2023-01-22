// adding library files
  #include <iostream> 
#include <exception> 
#include <fstream>
#include <chrono>
#include <ctime>  
using namespace std;
using namespace chrono;
//creating a array for balance of the users
int balance[1000000] = { 200,235244,2353,6511346,13464,14543,3575,41165,14675,1565,12345 };
//create additional variable 
int m1;
string name1;
   
string billnumber;
    int A=11;
 	string B;
//creating array for user id
    string  username[1000000] = { "umer123","umer55","zeeshan34","hello22","omer67","umer15","umer25","munir","munir55","akram55","john55" };
//creating array for PIN of the users
string PIN[1000000] = {"0203","2324","2453","6546","3664","7543","3575","6865","5675","4565","2345" };


int n,l;
//creating array for names of the users
string name[1000000]={"umer","malik","zeeshan ahmad","bill gates","elon musk","john","masif","sahil","simmon","bilal","jeff beroz"};
string user,pin;
  string n5;
  string ni;
int h=0;
int income,tax;
//funtion for deposit money in bank account

void money(){
     cout<<"\n how much money you want to send"<<endl;
 
    cin>>m1;
 if(m1<balance[n]){
    cout<<"............................................"<<endl;
    cout<< "\n "<<m1<<" has been sended to "<<name[h]<<" "<<endl;
      balance[n]=balance[n]-m1;
    balance[h]=balance[h]+m1;
      }
    else
    {cout<<"\n you don't have enough balance in your account"<<endl;}
 
    
}

void deposit(){
  cout<<"how much money you want to deposit : ";
  
  cin>>m1;
  balance[n]=balance[n]+m1;
  cout<<"............................................"<<endl;
  cout<<"\n "<<m1<<" has sucessfully deposit to your account"<<endl;
}
void send(){
  //function for sending money to other user
  
  cout<<"\nPlease enter the  name of the account holder : ";

cin>>name1;
  cout<<"............................................"<<endl;
cout<<"\n Please enter the user id  : ";
  string user1;
  
  cin>>user1;

 while(true)
   {
    if(user1==username[h])
      
    {
      if(name1==name[h]){
      cout<<"\n\nACCOUNT DETAILS MATCHED"<<endl;
      money();
         h=0;
      break;
    }
      else{
         cout<<"INVALID ACCOUNT DETAILS"<<endl;
      }
      }
     h++;
     
   if(h==1000000){
     cout<<"INVALID ACCOUNT DETAILS"<<endl;
      h=0;
      break;
   }
  }
 
  }
  
 void check()
{
  //funtoion for checking balance
  
    cout<<"\n YOUR CURRENT BALANCE IS "<<balance[n]<<"  "<<endl;
  }
void bill()
{
  //function for paying bill
  cout<<"Please choose one of the following option"<<endl;
          cout << "\t\t  _____________________________________________\n"
        "\t\t |                   1.water                   | \n"
        "\t\t |                   2. electricity            | \n"
        "\t\t |                   3. internet service       | \n" 
        "\t\t |                   4.GAS                    | \n" 
        "\t\t |_____________________________________________| \n\n\n"
        "\n";

  int opt;
  cout<<"\n\nwhich option would you like to use today : ";
  cin>>opt;
  
   string name4;
 
  string m;
  switch (opt) {
    
  case 1:
    cout<<"\n \n Please enter your name : ";
    cin>>name4;
    cout<<"\n \n Please enter your bill number : ";
    cin>>billnumber;
    cout<<"\n\n";
    cout<<"\n\nplease enter the amount you want to pay : ";
    cin>>m1;

      if(balance[n]>m1)
      {      balance[n]=balance[n]-m1;
        cout<<"\n\n"<<m1<<" has sucessfully paid"<<endl;
        }
      
      else{
        cout<<"\n YOU DO NOT HAVE sufficient BALANCE IN YOUR ACCOUNT";
         B="1";
        m1=0;
        }
      
  
    
    
      
  
    
      
      
    break;
    
  case 2:
    cout<<"\n \n Please enter your name : ";
    cin>>name4;
    cout<<"\n \n Please enter your bill number : ";
    cin>>billnumber;
    cout<<"please enter the amount you want to pay : ";
    cin>>m1;
cout<<"\n to confirm press 0 "<<endl;
    cout<<"\n to decline press 1 "<<endl;
  

    cin>>B;
    if(B=="0")
    {
      if(balance[n]>m1)
      {      balance[n]=balance[n]-m1;
        cout<<" "<<m1<<" has successfully paid"<<endl;
        }
      
      else{
        cout<<"\n YOU DO NOT HAVE sufficient BALANCE IN YOUR ACCOUNT";
         B="1";
        m1=0;
        }
      }
    else if(B=="1")
    {
      cout<<"\n YOU CANCELLED THE REQUEST FOR PAYING bill"<<endl;
    }
    
    else{
      cout<<"\n you enter an incorrect command"<<endl;
      
  }
    
      
      
  
    break;
  case 3:cout<<"\n \n Please enter your name : ";
    cin>>name4;
    cout<<"\n \n Please enter your bill number : ";
    cin>>billnumber;
    cout<<"please enter the amount you want to pay : ";
    cin>>m1;
cout<<"\n to confirm press 0 "<<endl;
    cout<<"\n to decline press 1 "<<endl;
  

    cin>>B;
    if(B=="0")
    {
      if(balance[n]>m1)
      {      balance[n]=balance[n]-m1;
        cout<<" "<<m1<<" has sucessfully paid"<<endl;
        }
      
      else{
        cout<<"\n YOU DO NOT HAVE sufficient BALANCE IN YOUR ACCOUNT";
         B="1";
        m1=0;
        }
      }
    else if(B=="1")
    {
      cout<<"\n YOU CANCELLED THE REQUEST FOR PAYING bill"<<endl;
      m1=0;
    }
    
    else{
      cout<<"\n you enter an incorrect command"<<endl;
      
  }
    
      
      
    break;
  case 4:cout<<"\n \n Please enter your name : ";
    cin>>name4;
    cout<<"\n \n Please enter your bill number : ";
    cin>>billnumber;
    cout<<"please enter the amount you want to pay : ";
    cin>>m1;
cout<<"\n to confirm press 0 "<<endl;
    cout<<"\n to decline press 1 "<<endl;
  

    cin>>m;
    if(B=="0")
    {
      if(balance[n]>m1)
      {      balance[n]=balance[n]-m1;
        cout<<" "<<m1<<" has sucessfully paid"<<endl;
        }
      
      else{
        cout<<"\n YOU DO NOT HAVE sufficient BALANCE IN YOUR ACCOUNT";
        m1=0;
         B="1";
        }
      }
    else if(B=="1")
    {
      cout<<"\n YOU CANCELLED THE REQUEST FOR PAYING bill"<<endl;
      m1=0;
    }
    
    else{
      cout<<"\n you enter an incorrect command"<<endl;
      
  }
    
      
      
    break;
  default: printf("\n you enter an incorrect command");
}
}
void account()
  {
    //function used to create a new account
    while(true){
      
    
  
      A++;
    cout<<"\n \n WELCOME TO MALIK ATM SERVICES"<<endl;
  cout<<"\n\n TO CREATE A NEW ACCOUNT WE NEED SOME OF YOUR DETAILS"<<endl;
    cout<<"\n\nPLease enter your name to continue : ";
    
    cin>>name[A];
    cout<<"\n\nPLease enter your Post code to continue : ";
    string a9;
    cin>>a9;
    cout<<"\n\n PROVIDE PROOF OF ADDRESS"<<endl;
  cout<<"\n\n Chosse one of the following option to show the proof of address"<<endl;
      cout<<"\n\n 1. BRP CARD"<<endl;
      cout<<"\n\n 2. UK DRIVING LICENSE"<<endl;
      cout<<"\n\n 3. PASSPORT"<<endl;
      cout<<"\n \n IF YOU HAVE ANY OF THE ABOVE PRESS '1' OTHER WISE PRESS '0' "<<endl;
    string a00;
    cin>>a00;
    if(a00=="0")
    {
      cout<<"\n\n You have to visit to the branch to show your identity"<<endl;
    
      cout<<"\n\nBYE BYE"<<endl;
      cout<<"\n\n SEE YOU LATER "<<endl;
      break;
      
    }
      while(true)
        {
          cout<<"\n\n 1. BRP CARD"<<endl;
      cout<<"\n\n 2. UK DRIVING LICENSE"<<endl;
      cout<<"\n\n 3. PASSPORT"<<endl;
      cout<<"\n\n Chosse one of the  option to show the proof of address : ";
      string q,m;
      cin>>q;
          
      if(q=="1")
      {
        cout<<"\n\n Please enter the BRP NUMBER TO CONTINUE : ";
        cin>>m;
        if (m.length()==8){
        cout<<"\nAccepted"<<endl;
          break;
          
          }
        else
        {
          cout<<"\n number must be of 8 digits"<<endl;
        }
        
        
        }
      else if(q=="2")
        {
              cout<<"\n\n Please enter the license NUMBER TO CONTINUE  "<<endl;
          cin>>m;
           if (m.length()==8){
        cout<<"\nAccepted"<<endl;
          break;
          
          }
        else
        {
          cout<<"\n number must be of 8 digits"<<endl;
        }
        }
        else if(q=="3")
        {
              cout<<"\n\n Please enter the passport NUMBER TO CONTINUE  "<<endl;
          
          cin>>m;
           if (m.length()==8){
        cout<<"\nAccepted"<<endl;
          break;
          
          }
        else
        {
         cout<<"\n number must be of 8 digits"<<endl;
        }
        }
        
        else
        {
         cout<<"\n you enter an incorrect command"<<endl;
          }
          }
      if(A<999999)
      {
      cout<<"\n\n Please Create a username to continue : ";
      cin>>username[A];
        for(int y=0;y<19;y++)
          {
       if(y==!A){
            if(username[A]==username[y])
            {
              cout<<"\n\nUSERNAME ALREADY EXIST"<<endl;
              cout<<"\n\n Please Create a username to continue : ";
      cin>>username[A];
            }
         }
          }
      cout<<"\n\n Please Create a PIN to continue : ";
      cin>>PIN[A];
      
      cout<<"\n \n YOUR SUCESSFULLY OPENED A ACCOUNT ON MALIK BANK "<<endl;
      cout<<"\n\n Now go to log in and use your account "<<endl;
        break;
      }
    else
      {
        cout<<"\n\n YOUR INFORMATION HAS BEEN RECIVED "<<endl;
        cout<<"\n\nYOUR Account will be verified in upto 60 mins"<<endl;
        break;
      }
    }
    }
void pay(){
  //function used for paying income tax

  cout<<"\n\n Please enter your name : ";
  cin>>n5;
  cout<<"\n\n Please enter your national isurance number : ";
  cin>>billnumber;
 cout<<"\n\n PLEASE ENTER YOUR ANNUAL SALARY"<<endl;
  cin>>income;
  if(income<12570)
  {
    cout<<"\n you do not have to pay tax"<<endl;
  }
  else if(income>12570&&income<=50270)
    /*if the annual salery is greater than 12570 and less than 50270 then he have to pay 20 percent tax*/
  {
    tax=(income*20)/100;
    cout<<" \n you have to pay "<<tax<<" as a income tax\n" ;
    cout<<"\n to confirm press 0 "<<endl;
    cout<<"\n to decline press 1 "<<endl;
    

    cin>>B;
    if(B=="0")
    {
      if(balance[n]>tax)
      {      balance[n]=balance[n]-tax;
        cout<<" "<<tax<<" has sucessfully paid"<<endl;
        }
      
      else{
        cout<<"\n YOU DO NOT HAVE sufficient BALANCE IN YOUR ACCOUNT";
        B="1";
        m1=0;
        }
      }
    else if(B=="1")
    {
      cout<<"\n YOU CANCELLED THE REQUEST FOR PAYING INCOME TAX"<<endl;
    }
      
    else{
      cout<<"\n you enter an incorrect command"<<endl;
      
  }
    }
  else if(income>=50271&&income<=150000)
    /*if the annual salery is greater than 50271 and less than 150000 then he have to pay 40 percent tax*/
  {
    tax=(income*40)/100;
    
    cout<<" \n you have to pay "<<tax<<" as a income tax\n" ;
    cout<<"\n to confirm press 0 "<<endl;
    cout<<"\n to decline press 1 "<<endl;

    cin>>B;
    if(B=="0")
    {
      if(balance[n]>tax)
      {      balance[n]=balance[n]-tax;
        cout<<" "<<tax<<" has sucessfully paid"<<endl;
        
        }
      else{
        cout<<"\n YOU DO NOT HAVE sufficient BALANCE IN YOUR ACCOUNT";
        m1=0;
        B="1";
        }
      }
    else if(B=="1")
    {
      cout<<"\n YOU CANCELLED THE REQUEST FOR PAYING INCOME TAX"<<endl;
    }
    else{
      cout<<"\n you enter an incorrect command"<<endl;
      
  }
    }
  
  else if(income>150001)
    /*if the annual salery is greater than 150001  then he have to pay 45 percent tax*/
    {  tax=(income*45)/100;
  
    cout<<" \n you have to pay "<<tax<<" as a income tax\n" ;
    cout<<"\n to confirm press 0 "<<endl;
    cout<<"\n to decline press 1 "<<endl;

    cin>>B;
    if(B=="0")
    {
      if(balance[n]>tax)
      {      balance[n]=balance[n]-tax;
        cout<<" "<<tax<<" has sucessfully paid"<<endl;
        }
      else{
        cout<<"\n YOU DO NOT HAVE sufficient BALANCE IN YOUR ACCOUNT";
        m1=0;
        B="1";
        }
      }
    else if(B=="1")
    {
      cout<<"\n YOU CANCELLED THE REQUEST FOR PAYING INCOME TAX"<<endl;
    }
    else{
      cout<<"\n you enter an incorrect command"<<endl;
      

      }
    }
    else {
       cout<<"\n you enter an incorrect command"<<endl;
      
    }
        
  }
void abroad(){
  //function fir sending money internationaly 
  cout<< " \n \n Please Choose One oF the Following Option"<<endl;
cout<< " \n\n 1 : VISA Card"<<endl;
  cout<< " \n\n 2 : master Card"<<endl;
  cout<<"\n\n"<<endl;
 int kk;
  cin>>kk;
  cout<<"\n\n"<<endl;
  if(kk==1 || kk==2){
    cout<<"\n\nPlease Enter the name of the account Holder : ";
    string n4,s4,e4,l4;
     
    cin>>name1;
    cout<<"\n\nPlease Enter the account number of the account Holder : ";
    cin>>l4;
    cout<<"\n\nPlease Enter the sort code of the account Holder : ";
    cin>>s4;
    cout<<"\n\nPlease Enter the expiry  date of the account Holder in the format dd/mm/yyyy : ";
    cin>>e4;
    cout<<"\n\nPlease Enter the amount  you want to send  : ";
    cin>>m1;
          if(balance[n]>m1)
      {      balance[n]=balance[n]-m1;
        cout<<"\n\n "<<m1<<" has sucessfully send to "<<n4<<" "<<endl;
        }
      else{
        cout<<"\n YOU DO NOT HAVE sufficient BALANCE IN YOUR ACCOUNT";
        m1=0;
        B="1";
        }
      }
        
}


  void top()

{
  //function for top up mobile 
  string n6;
 int oppp ;
  string ammmm;
  int a1;
  cout<<"\n \n PLEASE ENTER YOUR NAME : ";
  cin>>ammmm;
    cout<<"\n \n Please choose one of the following option"<<endl;
          cout << "\t\t  _____________________________________________\n"
        "\t\t |                    1.EE                      | \n"
        "\t\t |                   2. 3                      | \n"
        "\t\t |                   3. GIFF GAFF              | \n" 
        "\t\t |                   4. LYSA                   | \n" 
        "\t\t |                   5. VODA PHONE             | \n"
        "\t\t |                   6. BT                     | \n" 
        "\t\t |                   7. SKY                    | \n" 
        "\t\t |                   8. VIRGIN MEDIA           | \n" 
        "\t\t |                   9. NOW                    | \n" 
        "\t\t |                   10. PLUS NET              | \n" 
        "\t\t |                   11.  TALK TALK                  | \n" 
       " \t\t |                   12.  OTHERS                       | \n" 
        "\t\t |_____________________________________________| \n\n\n"
        "\n";
cout<<"\n \nPlease choose one of the following option : ";

  
  cin>>oppp;
if(oppp <13){
  cout<<"\n \n PLEASE ENTER YOUR MOBILE NUMBER : ";
  cin>>billnumber;
  cout<<"\n \n Please enter the ammount you want to deposit : ";
  cin>>m1;
  cout<<"\n to confirm press 0 "<<endl;
    cout<<"\n to decline press 1 "<<endl;

    cin>>B;
    if(B=="0")
    {
      if(balance[n]>a1)
      {      balance[n]=balance[n]-a1;
        cout<<" "<<a1<<" has sucessfully paid"<<endl;
        }
      else{
        cout<<"\n YOU DO NOT HAVE sufficient BALANCE IN YOUR ACCOUNT";
        m1=0;
         B="1";
        }
      }
    else if(B=="1")
    {
      cout<<"\n YOU CANCELLED THE REQUEST FOR PAYING INCOME TAX"<<endl;
    }
    else{
      cout<<"\n you enter an incorrect command"<<endl;
      

      }
  }
      else{
      cout<<"\n you enter an incorrect command"<<endl;
      

      }
    }
    
void feedback()
{
  //function for getting feeback frm the user
  string F;
  ofstream MyFile;
  
  MyFile.open("feedback.txt");
  cout<<"\n\n Please give us your feedback : ";
  cout<<"\n\nPlease don't use any space while giving feedback"<<endl;
 cin>>F;
  
MyFile<<F;
  MyFile<<"\n\n";
   MyFile.close();
}

void change()
{
  //function for changing PIN 
  cout<<"\n\n Please Enter YOUR NEW PIN : ";
  cin>>PIN[n];
  cout<<"\n \nYOUR PIN HAS BEEN CHANGED SUCESSFULLY"<<endl;

  }
void userr()
{
  cout<<"\n\n Please Enter YOUR NEW username : ";
  cin>>username[n];
  cout<<"\n \nYOUR username HAS BEEN CHANGED SUCESSFULLY"<<endl;
}
void withdraw()
{
  cout<<"\n\nPlease enter the Amount you want to withdraw : ";


  cin>>m1;
        if(balance[n]>m1)
      {      balance[n]=balance[n]-m1;
        cout<<"\n\n "<<m1<<" has sucessfully withdraw by using ATM"<<endl;
        }
      else{
        m1=0;
        cout<<"\n\n YOU DO NOT HAVE sufficient BALANCE IN YOUR ACCOUNT";
        }
}
void options()
{

  //function use to show and run options
while(true){
    
      
    
         cout << "\t\t  _____________________________________________\n"
        "\t\t | 1. CHECK BALANCE               2.SEND MONEY | \n"
        "\t\t |                                             | \n"
        "\t\t |3. DEPOSIT  CASH            4.PAY YOUR BILL  | \n"
        "\t\t |                                             | \n"
        "\t\t |5. PAY INCOME TAX            6.TOP UP MOBILE | \n"
        "\t\t |                                             | \n"
        "\t\t |7. Withdraw money        8.SEND MONEY ABROAD |\n"
        "\t\t |                                             | \n"
        "\t\t | 9.RETURN CARD               10.CHANGE PIN   | \n"
        "\t\t |                                             | \n"
        "\t\t | 11.CREATE A NEW ACCOUNT   12.change username| \n"
        "\t\t |_____________________________________________| \n\n\n"
        "\n";




    
  cout<<"\n which service would you like to use today : ";
  string s;
  cin>>s;
  if(s=="1"){
    check();
    cout<<"............................................"<<endl;
  }
  else if(s=="2"){
    send();
    cout<<"............................................"<<endl;
  }
  else if(s=="3"){
    cout<<"\n\n"<<endl;
    deposit();
    cout<<"............................................"<<endl;
    }
    else if(s=="4")
    {
      bill();
    }
    else if(s=="5"){
     pay();  
       }  
    else if(s=="6"){
     top();  
       }  
  else if(s=="7")
  {
    withdraw();
    }
         else if(s=="8")
  {
    abroad();
    }
  else if(s=="9")
  {
    break;
  }
  else if(s=="10")
  {
    change();
    
  }
  else if(s=="11")
    
  {
   
    
    account();
  }
 else if(s=="12")
 {
    userr();
 } 
else
 {
cout<<"\n you enter an incorrect command"<<endl;
   break;
 }   cout<<"............................................"<<endl;
  //Ask the user for receipt
  cout<<"DO YOU WANT TO  PRINT A receipt"<<endl;
  cout<<"\n PRESS any key FOR 'NO' AND '0' FOR 'YES'"<<endl;
  string g;
  cin>>g;
  if(g=="0")
  {
    if(s=="1")
    {
      ofstream MyFile;

  MyFile.open("receipt.txt");
      MyFile<<"\n\n "<<endl;
      MyFile<<"\n\nMALIK ATM SERVICES "<<endl;
       MyFile<<"\n\n ATM NO.4567 "<<endl;
auto start = system_clock::now();
    // Some computation here
    auto end = system_clock::now();

    duration<double> elapsed_seconds = end-start;
 time_t end_time = system_clock::to_time_t(end);

    MyFile<<"\n\n "  << ctime(&end_time)
               << "\n";
       MyFile<<" OXFORED STREET LONDON "<<endl;
            MyFile<<"\n\nACCOUNT HOLDER NAME : "<<name[n]<<"\n\n  "<<endl;

      MyFile<<"\n\nYOUR CURRENT BALANCE IS ""£"<<balance[n]<<"."<<endl;
    }
    else if(s=="2")
    {
      ofstream MyFile;

  MyFile.open("receipt.txt");
      MyFile<<"\n\n "<<endl;
      MyFile<<"\n\nMALIK ATM SERVICES "<<endl;
       MyFile<<"\n\n ATM NO.4567 "<<endl;
auto start = system_clock::now();
    // Some computation here
    auto end = system_clock::now();

    duration<double> elapsed_seconds = end-start;
 time_t end_time = system_clock::to_time_t(end);

    MyFile<<"\n\n "  << ctime(&end_time)
               << "\n";
       MyFile<<" OXFORED STREET LONDON "<<endl;
            MyFile<<"\n\nACCOUNT HOLDER NAME : "<<name[n]<<"\n\n  "<<endl;

      MyFile<<"\n\n""£"<<m1<<" has been sended to "<<name1 <<" "<<endl;
    }
    else if(s=="3")
    {
      ofstream MyFile;

  MyFile.open("receipt.txt");
      MyFile<<"\n\n "<<endl;
      MyFile<<"\n\nMALIK ATM SERVICES "<<endl;
       MyFile<<"\n\n ATM NO.4567 "<<endl;
auto start = system_clock::now();
    // Some computation here
    auto end = system_clock::now();

    duration<double> elapsed_seconds = end-start;
 time_t end_time = system_clock::to_time_t(end);

    MyFile<<"\n\n "  << ctime(&end_time)
               << "\n";
       MyFile<<" OXFORED STREET LONDON "<<endl;
            MyFile<<"\n\nACCOUNT HOLDER NAME : "<<name[n]<<"\n\n  "<<endl;

      MyFile<<"\n\n""£"<<m1<<" has been deposited to   "<<name[n] <<" account "<<endl;
    }
    else if(s=="4")
    {
      ofstream MyFile;

  MyFile.open("receipt.txt");
      MyFile<<"\n\n "<<endl;
      MyFile<<"\n\nMALIK ATM SERVICES "<<endl;
       MyFile<<"\n\n ATM NO.4567 "<<endl;
auto start = system_clock::now();
    // Some computation here
    auto end = system_clock::now();

    duration<double> elapsed_seconds = end-start;
 time_t end_time = system_clock::to_time_t(end);

    MyFile<<"\n\n "  << ctime(&end_time)
               << "\n";
       MyFile<<" OXFORED STREET LONDON "<<endl;
      MyFile<<"\n\nACCOUNT HOLDER NAME : "<<name[n]<<"\n\n  "<<endl;

if(B=="0"){
      MyFile<<"\n\n""£"<<m1<<" has been paid  against bill no :  "<<billnumber <<" "<<endl;
    }
      }
    else if(s=="5")
    {
      ofstream MyFile;

  MyFile.open("receipt.txt");
      MyFile<<"\n\n "<<endl;
      MyFile<<"\n\nMALIK ATM SERVICES "<<endl;
       MyFile<<"\n\n ATM NO.4567 "<<endl;
auto start = system_clock::now();
    // Some computation here
    auto end = system_clock::now();

    duration<double> elapsed_seconds = end-start;
 time_t end_time = system_clock::to_time_t(end);

    MyFile<<"\n\n "  << ctime(&end_time)
               << "\n";
       MyFile<<" OXFORED STREET LONDON "<<endl;
            MyFile<<"\n\nACCOUNT HOLDER NAME : "<<name[n]<<"\n\n  "<<endl;
      
if(B=="0"){
      MyFile<<"\n\n""£"<<tax<<" has been paid  against national insurance  no :  "<<billnumber <<" "<<endl;
    }
      }
    else if(s=="6")
    {
      ofstream MyFile;

  MyFile.open("receipt.txt");
      MyFile<<"\n\n "<<endl;
      MyFile<<"\n\nMALIK ATM SERVICES "<<endl;
       MyFile<<"\n\n ATM NO.4567 "<<endl;
auto start = system_clock::now();
    // Some computation here
    auto end = system_clock::now();

    duration<double> elapsed_seconds = end-start;
 time_t end_time = system_clock::to_time_t(end);

    MyFile<<"\n\n "  << ctime(&end_time)
               << "\n";
       MyFile<<" OXFORED STREET LONDON "<<endl;
            MyFile<<"\n\nACCOUNT HOLDER NAME : "<<name[n]<<"\n\n  "<<endl;
      if(B=="0"){

      MyFile<<"\n\n""""£<<m1<<"" has been paid  against mobile number  no :  "<<billnumber <<" "<<endl;
    }
     
      }    
      
     else if(s=="8")
    {
      ofstream MyFile;

  MyFile.open("receipt.txt");
      MyFile<<"\n\n "<<endl;
      MyFile<<"\n\nMALIK ATM SERVICES "<<endl;
       MyFile<<"\n\n ATM NO.4567 "<<endl;
auto start = system_clock::now();
    // Some computation here
    auto end = system_clock::now();

    duration<double> elapsed_seconds = end-start;
 time_t end_time = system_clock::to_time_t(end);

    MyFile<<"\n\n "  << ctime(&end_time)
               << "\n";
       MyFile<<" OXFORED STREET LONDON "<<endl;
            MyFile<<"\n\nACCOUNT HOLDER NAME : "<<name[n]<<"\n\n  "<<endl;

      MyFile<<"\n\n""£"<<m1<<" has been sended to "<<name1 <<" "<<endl;
    }
    
    else if(s=="10")
    {
      ofstream MyFile;

  MyFile.open("receipt.txt");
      MyFile<<"\n\n "<<endl;
      MyFile<<"\n\nMALIK ATM SERVICES "<<endl;
       MyFile<<"\n\n ATM NO.4567 "<<endl;
auto start = system_clock::now();
    // Some computation here
    auto end = system_clock::now();

    duration<double> elapsed_seconds = end-start;
 time_t end_time = system_clock::to_time_t(end);

    MyFile<<"\n\n "  << ctime(&end_time)
               << "\n";
       MyFile<<" OXFORED STREET LONDON "<<endl;
            MyFile<<"\n\nACCOUNT HOLDER NAME : "<<name[n]<<"\n\n  "<<endl;

      MyFile<<"YOUR PIN HAS BEEN CHANGED SUCESSFULLY"<<endl;

    }
    else if(s=="12")
    {
      ofstream MyFile;

  MyFile.open("receipt.txt");
      MyFile<<"\n\n "<<endl;
      MyFile<<"\n\nMALIK ATM SERVICES "<<endl;
       MyFile<<"\n\n ATM NO.4567 "<<endl;
auto start = system_clock::now();
    // Some computation here
    auto end = system_clock::now();

    duration<double> elapsed_seconds = end-start;
 time_t end_time = system_clock::to_time_t(end);

    MyFile<<"\n\n "  << ctime(&end_time)
               << "\n";
       MyFile<<" OXFORED STREET LONDON "<<endl;
            MyFile<<"\n\nACCOUNT HOLDER NAME : "<<name[n]<<"\n\n  "<<endl;

      MyFile<<"YOUR USERNAME HAS BEEN CHANGED SUCESSFULLY"<<endl;
      }
  else if(s=="11")
    {
      ofstream MyFile;

  MyFile.open("receipt.txt");
      MyFile<<"\n\n "<<endl;
      MyFile<<"\n\nMALIK ATM SERVICES "<<endl;
       MyFile<<"\n\n ATM NO.4567 "<<endl;
auto start = system_clock::now();
    // Some computation here
    auto end = system_clock::now();

    duration<double> elapsed_seconds = end-start;
 time_t end_time = system_clock::to_time_t(end);

    MyFile<<"\n\n "  << ctime(&end_time)
               << "\n";
       MyFile<<" OXFORED STREET LONDON "<<endl;
            MyFile<<"\n\nACCOUNT HOLDER NAME : "<<name[n]<<"\n\n  "<<endl;

      MyFile<<"ATTEMPT TO OPEN A NEW ACCOUNT"<<endl;
    }
    else if(s=="9")
    {
      ofstream MyFile;

  MyFile.open("receipt.txt");
      MyFile<<"\n\n "<<endl;
      MyFile<<"\n\nMALIK ATM SERVICES "<<endl;
       MyFile<<"\n\n ATM NO.4567 "<<endl;
auto start = system_clock::now();
    // Some computation here
    auto end = system_clock::now();

    duration<double> elapsed_seconds = end-start;
 time_t end_time = system_clock::to_time_t(end);

    MyFile<<"\n\n "  << ctime(&end_time)
               << "\n";
       MyFile<<" OXFORED STREET LONDON "<<endl;
      MyFile<<"\n\nACCOUNT HOLDER NAME : "<<name[n]<<"\n\n  "<<endl;

    }
    else if(s=="7")
      {
      ofstream MyFile;

  MyFile.open("receipt.txt");
      MyFile<<"\n\n "<<endl;
      MyFile<<"\n\nMALIK ATM SERVICES "<<endl;
       MyFile<<"\n\n ATM NO.4567 "<<endl;
auto start = system_clock::now();
    // Some computation here
    auto end = system_clock::now();

    duration<double> elapsed_seconds = end-start;
 time_t end_time = system_clock::to_time_t(end);

    MyFile<<"\n\n "  << ctime(&end_time)
               << "\n";
       MyFile<<" OXFORED STREET LONDON "<<endl;
              MyFile<<"\n\nACCOUNT HOLDER NAME : "<<name[n]<<"\n\n  "<<endl;
MyFile<<"\n\n"<<m1<<" has been withdraw by using MALIK ATM service"<<endl;
        MyFile<<"YOUR REMAING BALANCE IS ""£"<<balance[n]<<" "<<endl;

    }
}
    cout<<"\n Whould you want to do another transection"<<endl;
  cout<<"..........................................."<<endl;
    cout<<"\n PRESS any key FOR 'YES' AND '0' FOR 'NO' and '2' for feedback"<<endl;
    string b;
    cin>>b;
  cout<<"............................................"<<endl;
    if (b=="0")
    {
            cout<<"\n\nBYE BYE"<<endl;
      cout<<"\n\n SEE YOU LATER "<<endl;
      cout<<"\n\n"<<endl;
      break;
    }
  if(b=="2")
  {
    feedback();
    cout<<"\n\n your feed back has been saved sucessfullly"<<endl;
  }
  }

  }
  
void authentication() {

    //function to run all function togeather

    for (int a = 5; a != 0; a--) {

        if (user == username[n]) {
            cout << "\n Please enter your PIN to continue: ";
            cin >> pin;
            if (pin == PIN[n]) {
              
                cout << "\n Wellcome back "<<name[n]<<" "<< endl;
              options();
                break;
            }
            else
            {
                cout << "\n wrong pin try agaian" << endl;
                cout << "\n we have " << a-1 <<  " attempts left" << endl;
            }
        }
        
      }
  
  }
 

int main()
{
 
  while(true){
    

    int reciever;

    int amount;

    string x;
//interface of the atm
    cout << endl << endl << "\t\t======================================================" << endl;
cout << "\n\t\t\t      Welcome to MALIK ATM service " << endl;
cout << "\t\t======================================================" << endl << endl << endl;
      cout << endl << endl << "\t\t======================================================" << endl;
cout << "\n\t\t\t       ONE ATM : WHOLE BANK " << endl;
cout << "\t\t======================================================" << endl << endl << endl;
cout<<"\n\nPLEASE CHOOSE ONE OF THE OPTION BELOW"<<endl;
    cout<<"\n 1. sign up"<<endl;
    cout<<"\n 2. log in"<<endl;
    cout<<"\n which service would you like to use today : ";
    string ot;
    cin>> ot;
    if(ot=="1")
    {
      //function for create a new acoount
       account();
    }
    else if (ot=="2"){
     
    cout << "\n Please enter your username to continue: ";
      //getting user id from the user
    cin >> user;
      //verifing user id
      int a =0;
while(true)
  {
     
    if(user==username[a]){
      n=a;
      
      break;
    }
    a++;

    if(a==1000000)
    {
      cout<<"wrong user id"<<endl;
      break;
    }
  }
     
 
       
  
    
    authentication();
      
     
   
      }
    else{
       cout<<"\n you enter an incorrect command"<<endl;
    }

    }
  
}
  
