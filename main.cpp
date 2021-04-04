/*
Ahmed Arafat
Business Information System
ahmedmoyousry.bis@gmail.com
6-2020
Piece Of Cake
*/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
typedef std::pair<int, int> pii;
typedef std::pair<ll, ll> pll;
typedef std::pair<std::string, std::string> pss;
typedef std::vector<int> vi;
typedef std::vector<vi> vvi;
typedef std::vector<pii> vii;
typedef std::vector<ll> vl;
typedef std::vector<vl> vvl;
typedef std::map<ll,ll> mpll;
double EPS = 1e-9;
int INF = 1000000005;
long long INFF = 1000000000000000005LL;
double PI = acos(-1);
int dirx[8] = { -1, 0, 0, 1, -1, -1, 1, 1 };
int diry[8] = { 0, 1, -1, 0, -1, 1, -1, 1 };

#ifdef TESTING
#define DEBUG fprintf(stderr, "====TESTING====\n")
#define VALUE(x) cerr << "The value of " << #x << " is " << x << endl
#define debug(...) fprintf(stderr, __VA_ARGS__)
#else
#define DEBUG
#define VALUE(x)
#define debug(...)
#endif

#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define FORSQ(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a))
#define FORC(a, b, c) for (char(a) = (b); (a) <= (c); ++(a))
#define FOREACH(a, b) for (auto&(a) : (b))
#define REP(i, n) FOR(i, 0, n)
#define REPN(i, n) FORN(i, 1, n)
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define SQR(x) ((LL)(x) * (x))
#define RESET(a, b) memset(a, b, sizeof(a))
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define ALL(v) v.begin(), v.end()
#define ALLA(arr, sz) arr, arr + sz
#define SIZE(v) (int)v.size()
#define SORT(v) sort(ALL(v))
#define REVERSE(v) reverse(ALL(v))
#define SORTA(arr, sz) sort(ALLA(arr, sz))
#define REVERSEA(arr, sz) reverse(ALLA(arr, sz))
#define PERMUTE next_permutation
#define TC(t) while (t--)
#define HANDLE_WRONG_INPUT          while(std::cin.fail()){std::cin.clear();std::cin.ignore();}
#define debug                       printf("I am here\n");
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)
#define md                  10000007
#define pb                  push_back
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define pn                  printf("\n")
#define debug               printf("I am here\n")
#define ps                  printf(" ")
/******************************Code Starts Here*********************************************/
class Client{
private:
std::string name;
ll age;
std::string phone;
std::string address;
bool is_married;

public:

void Setter(std::string n,ll ag,std::string ph,std::string add,bool is){
name=n;
age=ag;
phone=ph;
address=add;
is_married=is;
}
void report(){
std::cout<<"Name of client is : "<<name<<std::endl;
std::cout<<"Age of client is : "<<age<<std::endl;
std::cout<<"phone number of client is : "<<phone<<std::endl;
std::cout<<"address of client is : "<<address<<std::endl;
if(is_married)
std::cout<<"The client is married :)"<<std::endl;
else
std::cout<<"The client is not married yet :("<<std::endl;
}

bool is_client_exist(std::string n){
if(name==n)
    return 1;
else
    return 0;
}

std::string Client_name_getter(){
return name;
}

};

class Bank_Account {

private :
std::string name_ba;
std::string Password;
ll account_number;
std::string issued_data;
ld balance;
std::vector<char> transact;
std::vector<ld> transact_value;
static std::vector<ll> transfered_to;
static std::vector<ld> transfered_value;
static std::vector<ll> transfered_from;
static ll no_of_objects;
public :


public:
void Setter(std::string n,std::string pass,ll acc_num,std::string current_date){
name_ba=n;
Password=pass;
account_number=acc_num;
issued_data=current_date;
balance=0;
no_of_objects++;
    }

bool is_client_exist(std::string n,std::string pass){
if(name_ba==n&&Password==pass)
    return 1;
else
    return 0;
}

void modefiy_client_name(std::string n,std::string pass){
name_ba=n;
Password=pass;
}

std::string Client_name_getter(){
return name_ba;
}
ll Client_acc_no_getter(){
return account_number;

}
void deposit_balance(ld b){
balance+=b;

}

void deposit(){
     printf("Please enter value you want to deposit : ");
        ld deposit_value;
       std::cin>>deposit_value;
         while(true){
            if(deposit_value==0){
                std::cout<<"You can't deposit a ZERO value "<<std::endl<<std::endl;
                 std::cout<<"please enter another value : ";
                 std::cin>>deposit_value;
                 continue;
            }
           else if(deposit_value<0){
                std::cout<<"You can't deposit a Negative value "<<std::endl<<std::endl;
                 std::cout<<"please enter another value : ";
                 std::cin>>deposit_value;
                 continue;
            }
            else{
                balance+=deposit_value;
                transaction_report("deposit",deposit_value);
std::cout<<"The transaction is completed successfully, your balance now is : "<<balance<<std::endl;
break;
            }
         }
}

void withdraw(){
     printf("Please enter value you want to withdraw : ");
    ld b;
    std::cin>>b;
    while(true){
        if(balance==0){
             std::cout<<"You can't withdraw as your balance is Zero .. please try again"<<std::endl<<std::endl;
             break;
        }
             else if(b==0){
                std::cout<<"You can't withdraw a ZERO value "<<std::endl<<std::endl;
                 printf("please enter another value : ");
                 std::cin>>b;
                 continue;
            }
           else if(b<0){
                std::cout<<"You can't withdraw a Negative value "<<std::endl<<std::endl;
                  printf("please enter another value : ");
                 std::cin>>b;
                 continue;
            }
    else if(b>balance){
        std::cout<<"You can't withdraw this value as your balance is : "<<balance<<std::endl;
         printf("please enter another value : ");
        std::cin>>b;
        continue;
    }
     else{
balance-=b;
transaction_report("withdraw",b);
std::cout<<"The transaction is completed successfully, your balance now is : "<<balance<<std::endl;
break;
     }
}
}

ld transfer(ld b,ll other,ll no){
    // cout<<"Please enter value you want to transfer then enter number of bank account you want to transfer money to :";
    while(true){
             if(balance==0){
             std::cout<<"You can't transfer money as your balance is Zero .. please try again"<<std::endl<<std::endl;
             break;
        }
             else if(b==0){
                std::cout<<"You can't transfer a ZERO value "<<std::endl<<std::endl;
                 printf("please enter another value : ");
                 std::cin>>b;
                 continue;
            }
           else if(b<0){
                std::cout<<"You can't transfer a Negative value "<<std::endl<<std::endl;
                printf("please enter another value : ");
                 std::cin>>b;
                 continue;
            }
    else if(b>balance){
        std::cout<<"You can't transfer this value as your balance is : "<<balance<<std::endl;
        printf("please enter another value : ");
        std::cin>>b;
        continue;
    }
     else if(no_of_objects==1){
        std::cout<<"Sorry you can't transfer the money as there is only one account in the system"<<std::endl<<std::endl;
        break;
     }
      else if(other==Client_acc_no_getter()){
           std::cout<<"You can't transfer money to yourself please enter number of bank account again"<<std::endl<<std::endl;
         std::cin>>other;
        continue;

      }
    else if(other>no_of_objects||other==0||other<0){

        std::cout<<"The No. of this account doesn't exist please enter number of bank account again"<<std::endl<<std::endl;
        std::cin>>other;
        continue;
    }
     else{
balance-=b;
transaction_report("transfer",b);
transfered_to.push_back(other);
transfered_from.push_back(account_number);
transfered_value.push_back(b);
std::cout<<"The transaction is completed successfully, your balance now is : "<<balance<<std::endl;
break;
     }
}
return b;
}

void report(){
std::cout<<"Account number of client is: "<<account_number<<std::endl;
std::cout<<"issued data of client's bank account is: "<<issued_data<<std::endl;
std::cout<<"Balance in client's bank account is: "<<balance<<std::endl;
}

void change_no_of_objects(){
no_of_objects--;
}

void transaction_report(std::string trans,ld amount){
if(trans=="deposit"){
transact.push_back('d');
transact_value.push_back(amount);
}
else if(trans=="withdraw"){
    transact.push_back('w');
    transact_value.push_back(amount);
}
else if(trans=="transfer"){
    transact.push_back('t');
    transact_value.push_back(amount);
}
}


void veiw_transaction_report(){
ll j,k;
for( j=0,k=0;j<transact.size();j++){

    if(transact[j]=='d'){
        std::cout<<"#"<<j+1<<" The client has deposited: "<<transact_value[j]<<std::endl<<std::endl;
    }
    else if(transact[j]=='w'){
        std::cout<<"#"<<j+1<<" The client has withdrawn: "<<transact_value[j]<<std::endl<<std::endl;
    }
     else if(transact[j]=='t'){
        std::cout<<"#"<<j+1<<" The client has transfered: "<<transact_value[j]<<" to client No. "<<transfered_to[k]<<std::endl<<std::endl;
        k++;
     }

     }
   for(ll w=0;w<transfered_to.size();w++){
    if(account_number==transfered_to[w]){
    std::cout<<"#"<<j+1<<" The client No. "<<transfered_from[w]<<" transfered to him/her: "<<transfered_value[w]<<std::endl<<std::endl;
    j++;
    }
   }

if(!transact.empty()||!transfered_to.empty())
std::cout<<"His/Her balance now is: "<<balance<<std::endl<<std::endl;
}
};
std::vector<ll> Bank_Account::transfered_to;
std::vector<ld> Bank_Account::transfered_value;
std::vector<ll> Bank_Account::transfered_from;
ll Bank_Account::no_of_objects=0;


std::string name_of_client,phone_of_client,address_of_client,client_name,passwd,Cur_Da;
ll age_of_client,user_or_client, No_of_clients,nooo,i;
bool is_client_married,is_exist;
std::vector <Client> clients_list;
Client C;
std::vector<Bank_Account> bankacc_list;
Bank_Account BA;
///MAIN()
int main()
{
     std::ios_base::sync_with_stdio(false);
       std::cin.tie(NULL);
    std::cout << "\t\t\t\t\t\t\t\t ********************************\n" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t Welcome To Bank Account Project\n" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t ********************************\n" << std::endl;
    while(true){
   std:: cout <<"Please if you're a Developer enter (1) OR (2) if you're a Client and want to open your back account OR (3) To END PROGRAM"<<std::endl<<std::endl;
std::cin>>user_or_client;
std::cout<<std::endl;
//HANDLE_WRONG_INPUT;
if(user_or_client == 1){
        ll user_options;
 std::cout <<"Please enter : \n(1) if you want to input a client details \n(2) if you want to modify a client details \n(3) to display full report"<<std::endl<<std::endl;
std::cin>>user_options;
std::cout<<std::endl;
if(user_options == 1){
        std::cout<<"Please enter number of client(s) you want to store :"<<std::endl<<std::endl;
std::cin>>No_of_clients;
std::cout<<std::endl;
        std::cout <<"Please enter :\n1)Name (then press enter button)\n2)Password (then press enter button)\n3)Age\n4)Phone\n5)Address\n6)if client is married (enter 1 if the client is married and 0 if not)\nRespectively"<<std::endl<<std::endl;
for( i=0 ; i< No_of_clients ; i++){
         getline(std::cin,name_of_client);
         getline(std::cin,name_of_client);
         getline(std::cin,passwd);

         std::cin>>age_of_client>>phone_of_client>>address_of_client>>is_client_married;
std::cout<<std::endl;
HANDLE_WRONG_INPUT;
    C.Setter(name_of_client,age_of_client,phone_of_client,address_of_client,is_client_married);
  clients_list.push_back(C);
      time_t tt;
    struct tm *ti;
    time(&tt);
    ti=localtime(&tt);
    Cur_Da=asctime(ti);
  BA.Setter(name_of_client,passwd,i+1,Cur_Da);
bankacc_list.push_back(BA);
   std::cout<<"Client's data have been successfully recorded"<<std::endl<<std::endl;
   if(i != No_of_clients-1)
   std::cout<<"You have to enter "<<i+1<<" more client(s)"<<std::endl<<std::endl;
 else
   std::cout<<"Done :)"<<std::endl<<std::endl;
}
continue;
}
if(user_options == 2){
    std::cout<<"Please enter No. Of Client You want to modify "<<std::endl<<std::endl;
    std::cin>>No_of_clients;
    if(No_of_clients > clients_list.size() || No_of_clients < 0){
        std::cout<<"This No. does not exist .. please try again"<<std::endl<<std::endl;
    }
else {
    std::cout<<"Please enter again :\n1)Name (then press enter button)\n2)Password (then press enter button)\n3)Age\n4)Phone\n5)Address\n6)if client is married (enter 1 if the client is married and 0 if not)\nRespectively"<<std::endl<<std::endl;
   getline(std::cin,name_of_client);
         getline(std::cin,name_of_client);
          getline(std::cin,passwd);
         std::cin>>age_of_client>>phone_of_client>>address_of_client>>is_client_married;

    clients_list.at(No_of_clients-1).Setter(name_of_client,age_of_client,phone_of_client,address_of_client,is_client_married);
    bankacc_list.at(No_of_clients-1).modefiy_client_name(name_of_client,passwd);
     //obj[product_number-1].report();
     std::cout<<"\n\nClient No. "<<No_of_clients<<" have been successfully modified"<<std::endl<<std::endl;
}
}
if(user_options == 3){
        if(clients_list.empty())
            std::cout<<"No clients have been recorded\n"<<std::endl;
        else
        {
              for(i = 0 ; i < clients_list.size() ; i++){
                     std::cout<<"Client #"<<i+1<<std::endl;
                  clients_list[i].report();
                  bankacc_list[i].report();
                  bankacc_list[i].veiw_transaction_report();
              std::cout<<std::endl<<std::endl;
              }
        }
        continue;
    }
}
    else if(user_or_client == 2){
            if((ll)bankacc_list.size() == 0)
            {
                std::cout<<"No one Is Registered In System\n\n";
                continue;
            }
       std::cout<<"Please enter your name : "<<std::endl;
    getline(std::cin,name_of_client);
    getline(std::cin,name_of_client);
//cin>>name_of_client;
std::cout<<std::endl;
  std::cout<<"Please enter your password : "<<std::endl;
   getline(std::cin,passwd);
std::cout<<std::endl;
for(ll i=0;i<clients_list.size();i++){
    if(bankacc_list[i].is_client_exist(name_of_client,passwd)){
            nooo=i;
        is_exist=true;
break;
    }
    else
        is_exist=false;
}
if(is_exist){
    std::cout<<"Welcome Back : "<<bankacc_list[nooo].Client_name_getter()<<std::endl<<std::endl;
    std::cout<<"Please enter :\n1)if you want to deposit money\n2)if you want to withdraw money\n3)if you want to transfer money to another account\n4)if you want to close your account permanently "<<std::endl<<std::endl;
    ll client_option;
        std::cin>>client_option;
    if(client_option == 1){
        bankacc_list[nooo].deposit();
    }
    else if(client_option==2){
        bankacc_list[nooo].withdraw();
    }
     else if(client_option == 3){
             if((ll)bankacc_list.size() == 1)
            {
                std::cout<<"You're The Only One Who Is Registered In System\n\n";
                continue;
            }
             printf("Please enter value you want to transfer then enter number of bank account you want to transfer money to : ");
    ld b;
    int other;
    std::cin>>b>>other;
    HERE:
    if(other == bankacc_list[nooo].Client_acc_no_getter()){
        std::cout<<"You can't transfer money to yourself please enter number of bank account again"<<std::endl<<std::endl;
        std::cin>>other;
        goto HERE;
    }
    else{
//deposit_for_transfer(bankacc_list[other-1],b);
          b = bankacc_list[nooo].transfer(b,other,nooo);
             bankacc_list[other-1].deposit_balance(b);
//             cout<<"THIS "<<bankacc_list[nooo].Client_acc_no_getter();
    }
     }
     else if(client_option==4){
        std::cout<<"Are you sure that you want to close your account permanently ??"<<std::endl;
        std::cout<<"[Y/N]"<<std::endl;
        char close;
        std::cin>>close;
        if(close=='Y'){
           ll size=clients_list.size();
for(ll i=0;i<size;i++){
     if(bankacc_list[i].is_client_exist(name_of_client,passwd)){
        bankacc_list.erase(bankacc_list.begin()+i);
        bankacc_list[0].change_no_of_objects();
     }
         if(clients_list[i].is_client_exist(name_of_client)){
clients_list.erase(clients_list.begin()+i);
         }

}
std::cout<<"Your account has been removed successfully"<<std::endl<<std::endl;
        }
            else if(close=='N'){
                continue;
            }
        else{
             std::cout<<"Error .. please make sure that you have entered whether (Y) or (N)"<<std::endl<<std::endl;
            continue;
        }
    }
}

else{
    std::cout<<"Sorry .. The User Name or Password is incorrect .. please try again"<<std::endl<<std::endl;
continue;
}
        }
     else if(user_or_client==3){
             std::cout<<"Are you really want to Exit Program "<<std::endl;
     std::cout<<"[Y/N]"<<std::endl<<std::endl;
     char c;
     std::cin>>c;
     std::cout<<std::endl;
     if(c=='Y'){
        std::cout<<"Thanks For Using Our Program (^_^) "<<std::endl;
         break;
     }
         else if(c=='N')
            continue;
     }
    else{
        std::cout<<"Error .. please make sure that you have entered 1 , 2 or 3 :)"<<std::endl<<std::endl;

    }
}

    }
/*
INPUTS:

Name
Password
Age Phone Address Married

Ahmed Arafat
pass1234
20 0112345678 Cairo 0
Yousef Mohamed
pass1234
20 0112345678 Cairo 1

*/
