#include<sys/types.h>
#include<sys/socket.h>
#include<iostream>
#include <bits/stdc++.h>
#include<stdio.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<sys/un.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include <fstream>
#include <string>
#include <pthread.h>
#include <map>
#include <iterator>
#include <vector>
#include <set>

using namespace std;
int trackerPort;
string trackerIP;
string seederList;
struct thread_u {
	char u_name[255], u_pwd[255];
};





map<string, string> users; 
map<string, string> group_users;
map <string, vector<string> > pending_req;
//priority_queue<pair<string, string> > pending; 
map <string,set<string> > accepted_req;
void add_group(struct thread_u * thr_ar) {
	//struct thread_u * thr_ar = ((struct thread_u*)thread_aa);
	char g1_na[255];
        char g2_wd[255];
        //cout << "PKB: " << thr_ar->u_name << "\n";

       strcpy( g1_na, thr_ar->u_name );
      strcpy( g2_wd, thr_ar->u_pwd );
        
           map<string, string >::iterator it; 
         // cout<<users[g1_na];

it = group_users.find(g1_na); 
      
    if(it != group_users.end()) {
        cout << "The group that you have entered is already present!!!! . PLease type a new group !!"<<endl ; 
   }
else{
      group_users[g1_na]=g2_wd;

//pending_req.insert(pair<string,vector<string> >(g1_na, vector<string>()));
accepted_req[g1_na].insert(g2_wd);
   cout<<"Owner of the group "<<g1_na<<" is :"<<group_users[g1_na]<<endl;
   cout<<"Group has been created successfully!!!!!!!!"<<endl;
   //cout<<group_users[g1_na]<<"is :"<<g2_wd<<endl;
/*for(it = users.begin(); it != users.end(); ++it)
{
    std::cout << it->first<<" ";
}*/
}

}

void join_group(struct thread_u * thr_ar) {
	//struct thread_u * thr_ar = ((struct thread_u*)thread_aa);
	char g1_na[255];
        char g2_wd[255];
        //cout << "PKB: " << thr_ar->u_name << "\n";
map<string, string>::iterator it1;
       strcpy( g1_na, thr_ar->u_name );
      strcpy( g2_wd, thr_ar->u_pwd );
     //cout<<g1_na<<" "<<g2_wd<<endl;
it1 = group_users.find(g1_na); 
      
    if(it1 == group_users.end()) {
        cout << "The group that you have entered is not present"<<endl ; 
   }
else{
      

int ss=accepted_req[g1_na].size();
cout<<ss;
if(ss>=1){

pending_req[g1_na].push_back(g2_wd);
//cout<<"Pending is : "<<pending_req[g1_na].back()<<endl;
cout<<"Since group is full, so you are in waiting list!!!!!!"<<endl;
}
else{

accepted_req[g1_na].insert(g2_wd);
cout<<"You are now member of the group : "<<g1_na<<endl;

}
}

}


void leave_group(struct thread_u * thr_ar) {
	//struct thread_u * thr_ar = ((struct thread_u*)thread_aa);
	char g1_na[255];
        char g2_wd[255];
        //cout << "PKB: " << thr_ar->u_name << "\n";
//map<string, string>::iterator it1;
       strcpy( g1_na, thr_ar->u_name );
      strcpy( g2_wd, thr_ar->u_pwd );
    // cout<<g1_na<<" bum "<<g2_wd<<endl;

//it1 = accepted_req.find(g1_na);

map<string, set<string> >::iterator it1;

for(it1 = accepted_req.begin(); it1 != accepted_req.end(); it1++){
    it1->second.erase(g2_wd);
}
cout<<"You are no longer part of the group!!!!"<<endl;
int sp=accepted_req[g1_na].size();
//cout<<"11111111111"<<endl;
if(sp<1){
//cout<<"jjghg"<<endl;
//cout<<pending_req[g1_na].size();
//cout<<"klhg"<<endl;
string st=pending_req[g1_na].back();
pending_req[g1_na].pop_back();
//cout<<"haaa"<<endl;
accepted_req[g1_na].insert(st);
//cout<<"aaaa"<<endl;
}
}









void list_groups(struct thread_u * thr_ar) {
	//struct thread_u * thr_ar = ((struct thread_u*)thread_aa);
	char g1_na[255];
        char g2_wd[255];
        //cout << "PKB: " << thr_ar->u_name << "\n";
//map<string, vector<string> >::iterator it1;
       strcpy( g1_na, thr_ar->u_name );
      strcpy( g2_wd, thr_ar->u_pwd );
     //cout<<g1_na<<" LIST REQ "<<g2_wd<<endl;

//it1 = accepted_req.find(g1_na);
map<string, string >::iterator it; 
cout<<"All the groups are :- "<<endl;
//assert(pending_req.find(g1_na) != pending_req.end());
it = group_users.begin(); 
      
    for(it;it != group_users.end();it++) {
        cout <<it->first<<endl ; 
   }

}

void list_request(struct thread_u * thr_ar) {
	//struct thread_u * thr_ar = ((struct thread_u*)thread_aa);
	char g1_na[255];
        char g2_wd[255];
        //cout << "PKB: " << thr_ar->u_name << "\n";
//map<string, vector<string> >::iterator it1;
       strcpy( g1_na, thr_ar->u_name );
      strcpy( g2_wd, thr_ar->u_pwd );
     //cout<<g1_na<<" LIST REQ "<<g2_wd<<endl;

//it1 = accepted_req.find(g1_na);



//assert(pending_req.find(g1_na) != pending_req.end());
for (int i=0;i< pending_req[g1_na].size(); i++) {
        cout << pending_req[g1_na][i] <<" : is currently waiting in the queue!!!!! "<<endl;
}

}





void user_create(struct thread_u * thr_ar) {

	char u_na[255];
        char p_wd[255];
        

       strcpy( u_na, thr_ar->u_name );
      strcpy( p_wd, thr_ar->u_pwd );
        users[u_na]=p_wd;
           map<string, string>::iterator it; 
          cout<<users[u_na];
 /*cout<<"Tracker line 27"<<endl;
        //string p_wd = thr_ar->u_pwd;
    cout<<p_wd<<endl;
        ofstream out;
        out.open("myfile12.txt");
    out << u_na;
     out << " : ";
     out << p_wd;
    cout<<"User has been created";
    out.close();*/
   cout<<"Account of "<<u_na<<" has been created successfully"<<endl;
for(it = users.begin(); it != users.end(); ++it)
{
    std::cout << it->first<<" ";
}


}



void login_check(struct thread_u * thr_log) {
	//struct thread_u * thr_ar = ((struct thread_u*)thread_aa);
	char u_na[255];
        char p_wd[255];
        //cout << "PKB: " << thr_ar->u_name << "\n";

       strcpy( u_na, thr_log->u_name );
      strcpy( p_wd, thr_log->u_pwd );
        //cout<<"Name ; "<<u_na<<"for"<<p_wd;
           map<string, string>::iterator it; 
 /*cout<<"Tracker line 27"<<endl;
        //string p_wd = thr_ar->u_pwd;
    cout<<p_wd<<endl;
        ofstream out;
        out.open("myfile12.txt");
    out << u_na;
     out << " : ";
     out << p_wd;
    cout<<"User has been created";
    out.close();*/

/*
it = users.find(u_na); 
      
    if(it == users.end()) 
        cout << "You are not a valid user of the system!!!!"<<endl ; 
    else
        cout << "Congrats!! You are a valid user of the system!!"<<endl; 
 */
int flag=1;
for(it = users.begin(); it != users.end(); ++it)
{
    if((it->first)==u_na){
     flag=0;
     break;
    }

}
if(flag==0){
cout << "Congrats!! You are a valid user of the system!!"<<endl;
}
else{
cout << "You are not a valid user of the system!!!!"<<endl;
}

}



int main(int argc,char* argv[]){
	if(argc!=4){
		fprintf(stderr, "Invalid number of Arguments!\n");
		exit(1);
	}
	trackerIP=argv[1];
	trackerPort=atoi(argv[2]);
	seederList=argv[3];
	int server_sockfd,client_sockfd;
	struct sockaddr_in server_address;
	struct sockaddr_in client_address;
 //cout<<"Tracker line 49"<<endl;

	server_sockfd=socket(AF_INET,SOCK_STREAM,0);
	server_address.sin_family=AF_INET;
	// bind connection to socket
	server_address.sin_addr.s_addr=htonl(INADDR_ANY);
	server_address.sin_port=htons(trackerPort);
	bind(server_sockfd,(struct sockaddr*)&server_address,sizeof(server_address));
	listen(server_sockfd,5);
	cout<<"waiting...\n";
	int items;
	char block[1024];
	char fileName[20];
	char hashOfHash[20];
	char ack='#';
  //cout<<"Tracker line 64"<<endl;
         char ak[20];
         char un[255];
         char pw[255];
        int s;
//cout<<"Tracker line 69"<<endl;
	socklen_t client_len=sizeof(client_address);
int out=open("seederlist.txt",O_WRONLY|O_CREAT,S_IRUSR|S_IWUSR);
//cout<<"Tracker line 72"<<endl;
        while(1){
	client_sockfd=accept(server_sockfd,(struct sockaddr *)&client_address,&client_len);
	//int out=open("seederlist.txt",O_WRONLY|O_CREAT,S_IRUSR|S_IWUSR);
	         //cout<<"Line 77";
		// accepting client connection in infinite loop
                   if(recv(client_sockfd, ak, 20, 0) == -1) perror("Error: Receiving file size");
                   string str(ak);
               //cout<<ak<<endl;
                //int b_size = sizeof(ack) / sizeof(char);
                 string s_b = str;
                 int rr;
                    if((rr=recv(client_sockfd, un, 255, 0) == -1)) perror("Error: Receiving file size");
                   //cout<<rr<<un<<endl;
                    if(recv(client_sockfd, pw, 255, 0) == -1) perror("Error: Receiving file size");
//cout<<pw<<endl;
//cout<<"Tracker line 85"<<endl;
                     //String un1 = String.valueOf(un);
                       //String pw1 = String.valueOf(pw);
                       //pthread_t d_t;
			struct thread_u ut;
                        strcpy(ut.u_name,un);
                        strcpy(ut.u_pwd,pw);
                    if(s_b=="u"){
                       user_create(&ut);
                      //if(pthread_create(&d_t, NULL, user_create, (void *) &ut) != 0) perror("Error: Creating download thread");
                     }
//cout<<"Tracker line 94"<<endl;
                    else if(s_b=="l"){
                       login_check(&ut);
                      //if(pthread_create(&d_t, NULL, user_create, (void *) &ut) != 0) perror("Error: Creating download thread");
                     }
                    else if(s_b=="j"){
                       add_group(&ut);
                    }
                    else if(s_b=="j2"){
                       join_group(&ut);
                    }
                    else if(s_b=="d2"){
                       leave_group(&ut);
                    }
                     else if(s_b=="e2"){
                       list_request(&ut);
                    }
                     else if(s_b=="vg2"){
                       list_groups(&ut);
                    }
                   
                    else{
                       cout<<"Invalid Commands!!!!!!!!!!!"<<endl;}
                   // if(pthread_create(&download_t, NULL, usercreate, (void *) &ut) != 0) perror("Error: Creating download thread");
		/*int items=read(client_sockfd,&fileName,sizeof(fileName));
		fileName[items]='\0';
		items=read(client_sockfd,&hashOfHash,sizeof(hashOfHash));
		hashOfHash[items]='\0';
		char * ip=inet_ntoa(client_address.sin_addr);
		dprintf(out,"%s : %s %s %d\n",fileName,hashOfHash,ip,client_address.sin_port);
		printf("Seederlist updated!\n");
		write(client_sockfd,&ack,1);*/
	}
	close(out);
	close(client_sockfd);
}

