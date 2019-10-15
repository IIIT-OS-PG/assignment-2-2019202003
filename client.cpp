#include <bits/stdc++.h>


#include <iostream>
#include <pthread.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <map>

#define chunk_size 512*1024
#include <boost/algorithm/string.hpp>



using namespace std;

struct chunk {
	char fname[255];
	int desc;
 int val;
};


struct dpf {
	char soupth[255], destn[255], ipa[15];
	int portNumber;
};

struct thread_u {
	char u_name[255], u_pwd[255], ipa[15];
	int portNumber;
};
struct thread_p {
	char g_name[255]; char ipa[15];
	int portNumber;
};


struct thread_log {
	char u_name[255], u_pwd[255], ipa[15];
	int portNumber;
};

struct yuj{
char g_name[255]; char ipa[15];
	int portNumber;
  int cli_port;
};

void *jg(void* thread_b){
        struct yuj * thr_b = ((struct yuj*)thread_b);
	int socket_fd, port_number = thr_b->portNumber; struct sockaddr_in tdl;
	string ip_address = thr_b->ipa;
         int pu=thr_b->cli_port;
char gname[255];
int po=pu;
	
strcpy( gname, thr_b->g_name );
string po1=to_string(pu); 
char po1_name[255]; 
strcpy(po1_name, po1.c_str());
         
        
         char up[20]="j";

	

	do{
		socket_fd = socket(AF_INET, SOCK_STREAM, 0);
		if (socket_fd == -1) cout<<"Socket opening error!!!!!"<<endl;
	} while (socket_fd == -1);
	

	bzero((char *) &tdl, sizeof(tdl));
	tdl.sin_family = AF_INET;
	tdl.sin_port = htons(port_number);
	tdl.sin_addr.s_addr = inet_addr(ip_address.c_str());

	if(connect(socket_fd, (struct sockaddr *)&tdl, sizeof(tdl)) == -1) {cout<<"Connection opening error!!!"<<endl;}

        if(send(socket_fd,up , 20, 0) == -1) cout<<"Sending source file path error"<<endl;
       
	if(send(socket_fd, gname, 255, 0) == -1) cout<<"Sending group error"<<endl;
        if(send(socket_fd, po1_name, 255, 0) == -1) cout<<"Sending port error"<<endl;
        //cout<<gname<<" "<<endl;
	}

void *ig2(void* thread_b){
     struct yuj * thr_b = ((struct yuj*)thread_b);
	int socket_fd, port_number = thr_b->portNumber; struct sockaddr_in tdl;
	string ip_address = thr_b->ipa;
         int pu=thr_b->cli_port;
char gname[255];
int po=pu;
	//long long int u_size = strlen(U;
strcpy( gname, thr_b->g_name );
string po1=to_string(pu); 
char po1_name[255]; 
strcpy(po1_name, po1.c_str());
         //long long int p_size = paswd.size();
        
         char up[20]="j2";

	//cout << "I am inside of ig2" << endl;

	do{
		socket_fd = socket(AF_INET, SOCK_STREAM, 0);
		if (socket_fd == -1) cout<<"Socket Opening error"<<endl;
	} while (socket_fd == -1);
	

	bzero((char *) &tdl, sizeof(tdl));
	tdl.sin_family = AF_INET;
	tdl.sin_port = htons(port_number);
	tdl.sin_addr.s_addr = inet_addr(ip_address.c_str());

	if(connect(socket_fd, (struct sockaddr *)&tdl, sizeof(tdl)) == -1) cout<<"Connection opening error"<<endl;

        if(send(socket_fd,up , 20, 0) == -1) cout<<"Source file location sending error!!!! "<<endl;

	if(send(socket_fd, gname, 255, 0) == -1) {cout<<"Group name sending error!!!! "<<endl;}
        if(send(socket_fd, po1_name, 255, 0) == -1) cout<<"port no sending error!!!! "<<endl;
        //cout<<gname<<" "<<endl;
	}


void *jog2(void* thread_b){
       struct yuj * thr_b = ((struct yuj*)thread_b);
	int socket_fd, port_number = thr_b->portNumber; struct sockaddr_in tdl;
	string ip_address = thr_b->ipa;
         int pu=thr_b->cli_port;
char gname[255];
int po=pu;
	//long long int u_size = strlen(U;
strcpy( gname, thr_b->g_name );
string po1=to_string(pu); 
char po1_name[255]; 
strcpy(po1_name, po1.c_str());
         //long long int p_size = paswd.size();
        
         char up[20]="d2";

	//cout << "I am inside of d2" << endl;

	do{
		socket_fd = socket(AF_INET, SOCK_STREAM, 0);
		if (socket_fd == -1) cout<<"Socket Opening error!!!!!!!!!!!!"<<endl;
	} while (socket_fd == -1);
	

	bzero((char *) &tdl, sizeof(tdl));
	tdl.sin_family = AF_INET;
	tdl.sin_port = htons(port_number);
	tdl.sin_addr.s_addr = inet_addr(ip_address.c_str());

	if(connect(socket_fd, (struct sockaddr *)&tdl, sizeof(tdl)) == -1) cout<<"Connection opening error"<<endl;

        if(send(socket_fd,up , 20, 0) == -1) cout<<"Source file location sending error!!!! "<<endl;

	if(send(socket_fd, gname, 255, 0) == -1) cout<<"Group name sending error!!!! "<<endl;
        if(send(socket_fd, po1_name, 255, 0) == -1) cout<<"POrt name sending error!!!! "<<endl;
        //cout<<gname<<" "<<endl;
        //cout<<"Calling Tracker"<<endl;
	}

void *Wog2(void* thread_b){
       struct yuj * thr_b = ((struct yuj*)thread_b);
	int socket_fd, port_number = thr_b->portNumber; struct sockaddr_in tdl;
	string ip_address = thr_b->ipa;
         int pu=thr_b->cli_port;
char gname[255];
int po=pu;
	//long long int u_size = strlen(U;
strcpy( gname, thr_b->g_name );
string po1=to_string(pu); 
char po1_name[255]; 
strcpy(po1_name, po1.c_str());
         //long long int p_size = paswd.size();
        
         char up[20]="e2";

	//cout << "I am inside of e2" << endl;

	do{
		socket_fd = socket(AF_INET, SOCK_STREAM, 0);
		if (socket_fd == -1) cout<<"Socket Opening error"<<endl;
	} while (socket_fd == -1);
	

	bzero((char *) &tdl, sizeof(tdl));
	tdl.sin_family = AF_INET;
	tdl.sin_port = htons(port_number);
	tdl.sin_addr.s_addr = inet_addr(ip_address.c_str());

	if(connect(socket_fd, (struct sockaddr *)&tdl, sizeof(tdl)) == -1) {cout<<"Connection opening error"<<endl;}

        if(send(socket_fd,up , 20, 0) == -1) cout<<"Source file location sending error!!!! "<<endl;

	if(send(socket_fd, gname, 255, 0) == -1) cout<<"Group name sending error!!!! "<<endl;
        if(send(socket_fd, po1_name, 255, 0) == -1) cout<<"POrt name sending error!!!! "<<endl;
        //cout<<gname<<" "<<endl;
        //cout<<"Calling WOG2"<<endl;
	}

void *groups2(void* thread_b){
       struct yuj * thr_b = ((struct yuj*)thread_b);
	int socket_fd, port_number = thr_b->portNumber; struct sockaddr_in tdl;
	string ip_address = thr_b->ipa;
         int pu=thr_b->cli_port;
char gname[255];
int po=pu;
	//long long int u_size = strlen(U;
strcpy( gname, thr_b->g_name );
string po1=to_string(pu); 
char po1_name[255]; 
strcpy(po1_name, po1.c_str());
         //long long int p_size = paswd.size();
        
         char up[20]="vg2";

	//cout << "I am inside of e2" << endl;

	do{
		socket_fd = socket(AF_INET, SOCK_STREAM, 0);
		if (socket_fd == -1) cout<<"Socket Opening error"<<endl;
	} while (socket_fd == -1);
	

	bzero((char *) &tdl, sizeof(tdl));
	tdl.sin_family = AF_INET;
	tdl.sin_port = htons(port_number);
	tdl.sin_addr.s_addr = inet_addr(ip_address.c_str());

	if(connect(socket_fd, (struct sockaddr *)&tdl, sizeof(tdl)) == -1) cout<<"Connection error"<<endl;

	
        if(send(socket_fd,up , 20, 0) == -1) cout<<"Source file location sending error!!!! "<<endl;
     
	if(send(socket_fd, gname, 255, 0) == -1) cout<<"Group name sending error!!!! "<<endl;
        if(send(socket_fd, po1_name, 255, 0) == -1) cout<<"Port name sending error!!!! "<<endl;
        //cout<<gname<<" "<<endl;
        //cout<<"Calling WOG2"<<endl;
	}

void *logout2(void* thread_b){
       struct yuj * thr_b = ((struct yuj*)thread_b);
	int socket_fd, port_number = thr_b->portNumber; struct sockaddr_in tdl;
	string ip_address = thr_b->ipa;
         int pu=thr_b->cli_port;
char gname[255];
int po=pu;
	//long long int u_size = strlen(U;
strcpy( gname, thr_b->g_name );
string po1=to_string(pu); 
char po1_name[255]; 
strcpy(po1_name, po1.c_str());
         //long long int p_size = paswd.size();
        
         char up[20]="out2";

	//cout << "I am inside of e2" << endl;

	do{
		socket_fd = socket(AF_INET, SOCK_STREAM, 0);
		if (socket_fd == -1) perror("Socket Opening error");
	} while (socket_fd == -1);
	

	bzero((char *) &tdl, sizeof(tdl));
	tdl.sin_family = AF_INET;
	tdl.sin_port = htons(port_number);
	tdl.sin_addr.s_addr = inet_addr(ip_address.c_str());

	
       cout<<"Logging out from the system :  Bye!!!!!"<<endl;
       exit(0);
	}




void *logu(void* thread_a){
        struct thread_u * thr_a = ((struct thread_u*)thread_a);
	int socket_fd, port_number = thr_a->portNumber; struct sockaddr_in tdl;
	string ip_address = thr_a->ipa;
char username[255];
char paswd[255];
	//long long int u_size = strlen(U;
strcpy( username, thr_a->u_name );
strcpy( paswd, thr_a->u_pwd );
         //long long int p_size = paswd.size();
        
         char up[20]="l";

	

	do{
		socket_fd = socket(AF_INET, SOCK_STREAM, 0);
		if (socket_fd == -1) perror("Socket Opening error");
	} while (socket_fd == -1);
	

	bzero((char *) &tdl, sizeof(tdl));
	tdl.sin_family = AF_INET;
	tdl.sin_port = htons(port_number);
	tdl.sin_addr.s_addr = inet_addr(ip_address.c_str());

	if(connect(socket_fd, (struct sockaddr *)&tdl, sizeof(tdl)) == -1) {cout<<"Connection opening error"<<endl;}


        if(send(socket_fd,up , 20, 0) == -1) cout<<"Source file location sending error!!!! "<<endl;

	if(send(socket_fd, username, 255, 0) == -1) cout<<"user name sending error!!!! "<<endl;
        if(send(socket_fd, paswd, 255, 0) == -1) cout<<"Password name sending error!!!! "<<endl;
        //cout<<username<<" "<<paswd<<endl;
	}
/*
void *jg(void* thread_b){
        struct thread_p * thr_b = ((struct thread_p*)thread_b);
	int socket_fd, port_number = thr_b->portNumber; struct sockaddr_in tdl;
	string ip_address = thr_b->ipa;
char gname[255];
int po=port_number;
	//long long int u_size = strlen(U;
strcpy( gname, thr_b->g_name );
string po1=to_string(po); 
char po1_name[255]; 
strcpy(po1_name, po1.c_str());
         //long long int p_size = paswd.size();
        
         char up[20]="j";

	//cout << "PKB: " << ip_address << " " << source_file_path << " " << destination_file_path << " " << source_file_path_size << " " << port_number << endl;

	do{
		socket_fd = socket(AF_INET, SOCK_STREAM, 0);
		if (socket_fd == -1) perror("Error: Opening Socket");
	} while (socket_fd == -1);
	//cout << "PKB: " << socket_fd << endl;

	bzero((char *) &tdl, sizeof(tdl));
	tdl.sin_family = AF_INET;
	tdl.sin_port = htons(port_number);
	tdl.sin_addr.s_addr = inet_addr(ip_address.c_str());

	if(connect(socket_fd, (struct sockaddr *)&tdl, sizeof(tdl)) == -1) perror("Error: Connecting");

	//if(send(socket_fd, &username, sizeof(long long int), 0) == -1) perror("Error: Sending source file path size");
	//cout << source_file_path << " " << source_file_path_size << endl;
        if(send(socket_fd,up , 20, 0) == -1) perror("Error: Sending source file path");
        //if(send(socket_fd,up.c_str() , u_size, 0) == -1) perror("Error: Sending source file path");
	if(send(socket_fd, gname, 255, 0) == -1) perror("Error: Sending source file path");
        if(send(socket_fd, po1_name, 255, 0) == -1) perror("Error: Sending source file path");
        cout<<gname<<" "<<endl;
	}*/

void *usercreate(void* thread_a){

        struct thread_u * thr_a = ((struct thread_u*)thread_a);
	int socket_fd, port_number = thr_a->portNumber; struct sockaddr_in tdl;
	string ip_address = thr_a->ipa;
char username[255];
char paswd[255];
	//long long int u_size = strlen(U;
strcpy( username, thr_a->u_name );
strcpy( paswd, thr_a->u_pwd );
         //long long int p_size = paswd.size();
        
         char up[20]="u";



	do{
		socket_fd = socket(AF_INET, SOCK_STREAM, 0);
		if (socket_fd == -1) cout<<"Socket opening error"<<endl;
	} while (socket_fd == -1);


	bzero((char *) &tdl, sizeof(tdl));
	tdl.sin_family = AF_INET;
	tdl.sin_port = htons(port_number);
	tdl.sin_addr.s_addr = inet_addr(ip_address.c_str());

	if(connect(socket_fd, (struct sockaddr *)&tdl, sizeof(tdl)) == -1) {cout<<"Connection opening error"<<endl;}


        if(send(socket_fd,up , 20, 0) == -1) cout<<"Source file location sending error!!!! "<<endl;
        //if(send(socket_fd,up.c_str() , u_size, 0) == -1) perror("Error: Sending source file path");
	if(send(socket_fd, username, 255, 0) == -1) cout<<"user name sending error!!!! "<<endl;
        if(send(socket_fd, paswd, 255, 0) == -1) cout<<"Password name sending error!!!! "<<endl;
        //cout<<username<<" "<<paswd<<endl;
          cout<<"Checking with Tracker!!"<<endl;
	}

void* kjy(void* thread_arguments) {
	struct dpf * thr_arg = ((struct dpf*)thread_arguments);
	int socket_fd, number_of_characters, port_number = thr_arg->portNumber; struct sockaddr_in server_details;
	string ip_address = thr_arg->ipa, source_file_path = thr_arg->soupth, destination_file_path = thr_arg->destn;
	long long int source_file_path_size = source_file_path.size();



	do{
		socket_fd = socket(AF_INET, SOCK_STREAM, 0);
		if (socket_fd == -1) cout<<"Socket opening error"<<endl;
	} while (socket_fd == -1);


	bzero((char *) &server_details, sizeof(server_details));
	server_details.sin_family = AF_INET;
	server_details.sin_port = htons(port_number);
	server_details.sin_addr.s_addr = inet_addr(ip_address.c_str());

	if(connect(socket_fd, (struct sockaddr *)&server_details, sizeof(server_details)) == -1) {cout<<"Connection opening error"<<endl;}

	if(send(socket_fd, &source_file_path_size, sizeof(long long int), 0) == -1) cout<<"Sending source file path error!!!!!!!!"<<endl;

	if(send(socket_fd, source_file_path.c_str(), source_file_path_size, 0) == -1) cout<<"Sending source file path size error!!!!!!!!"<<endl;

	

	long long int file_size;
        
	if(recv(socket_fd, &file_size, sizeof(long long int), 0) == -1) cout<<"Receiving file size error"<<endl;
         cout<<file_size<<endl;
	FILE *fp = fopen(destination_file_path.c_str(), "wb" );
         
	char buffer[chunk_size];
	memset(buffer,'\0',chunk_size);
	while(file_size > 0 && (number_of_characters = recv(socket_fd, buffer, chunk_size, 0)) > 0) {
               cout<<buffer<<" is the content "<<endl;
		fwrite(buffer, sizeof(char), number_of_characters, fp);
		file_size -= number_of_characters;
		memset(buffer,'\0',chunk_size);
	}

	pthread_exit(NULL);
}
void *gtu(void* thread_p) {
	
      struct chunk *t_a = ((struct chunk*)thread_p);
       char filePath[255];
         int f=t_a->val;
        cout<<f<<endl;
        
         strcpy( filePath,t_a->fname );
        int data_transfer_fd=t_a->desc;
       cout<<data_transfer_fd<<endl;
        cout<<filePath<<endl;
	FILE* fp = fopen(filePath, "rb");
	if(fp == NULL) 
         {
           cout<<"Unable to open file"<<endl;}
	char buffer[chunk_size];
	memset(buffer, '\0', chunk_size);
	fseek(fp, f*chunk_size, SEEK_SET);

	long long int file_size=chunk_size;

	if(send(data_transfer_fd, &file_size, sizeof(long long int), 0) == -1)
       {
 cout<<"Error: Sending file size"<<endl;
}
	int number_of_characters;
	while((number_of_characters = fread(buffer, sizeof(char), chunk_size, fp)) > 0 && file_size > 0) {
		if(send(data_transfer_fd, buffer, number_of_characters, 0) == -1) 
                   {
cout<<"unable to send file data!!!!!!"<<endl;
}
		memset(buffer, '\0', chunk_size);
		file_size -= number_of_characters;
	}

	fclose(fp);
}
void* phj(void* thread_arguments) {
      
	struct dpf thr_arg = *((struct dpf*)thread_arguments);
	int socket_fd, data_transfer_fd, port_number = thr_arg.portNumber, pid, number_of_characters;
	unsigned int sockaddr_struct_length;

	do{
		socket_fd = socket(AF_INET, SOCK_STREAM, 0);
		if (socket_fd == -1) {cout<<"Socket open error occured!!!!!!!!!!"<<endl;}
	} while (socket_fd == -1);

	struct sockaddr_in server_details, client_details;
	bzero((char *) &server_details, sizeof(server_details));
	server_details.sin_family = AF_INET;
	server_details.sin_addr.s_addr = INADDR_ANY;
	server_details.sin_port = htons(port_number);

	if (bind(socket_fd, (struct sockaddr *) &server_details, sizeof(server_details)) == -1) perror("Error: Binding");

	listen(socket_fd, 5);
	sockaddr_struct_length = sizeof(struct sockaddr_in);

	string file_name; long long int data_size; char buffer[256]; bzero(buffer, 255);

	while (1) {
		data_transfer_fd = accept(socket_fd, (struct sockaddr *) &client_details, &sockaddr_struct_length);
		
		if(data_transfer_fd == -1){ cout<<"Accepting error occured!!!!!!!!!!"<<endl;}

		if(recv(data_transfer_fd, &data_size, sizeof(long long int), 0) == -1) perror("Error: Receiving file path size");
		

		file_name = "";
		while(data_size > 0 && (number_of_characters = recv(data_transfer_fd, buffer, 255, 0)) > 0) {
			
			file_name.append(buffer);
			data_size -= number_of_characters;
			bzero(buffer, 255);
		}
            
		//cout << file_name << "\n";
		if(number_of_characters == -1){ cout<<"File open error occured!!!!!!!!!!"<<endl;}

	
        pthread_t tid[4];
  
      char des[255];
       
      
      int i;
      for(i=0;i<4;i++){ 
           struct chunk *cc=(struct chunk *)malloc(sizeof(struct chunk));
              strcpy(des, file_name.c_str()); 
        strcpy( cc->fname,des );
        cc->desc=data_transfer_fd;
        // cc->val=i;
         //cout<<cc->val;
    if(pthread_create(&tid[i], NULL, gtu, (void *) cc) != 0) cout<<"Thread creation error occured!!!!!!!!!!"<<endl;
      pthread_join(tid[i], NULL); 
}
}


	pthread_exit(NULL);
}




int main(int argc, char** argv) {
	pthread_t bob;
	struct dpf bob_arg;
	if(argc<2) {cout<<"PLease enter correct arguments!!!!!!!!!!"<<endl; exit(0);}
	bob_arg.portNumber = atoi(argv[1]);
	if(pthread_create(&bob, NULL, phj, (void *) &bob_arg)) perror("Error in opening connection!!!!!!!!!");
int pi=atoi(argv[1]);
          cout<<"Welcome"<<endl;
	string command;
	while(1){
                cout<<"PLease enter the command!!!"<<endl;
		getline(cin, command);
		if(!(command.find("download_file"))) {
			pthread_t download_thread;
			struct dpf ggh;

			vector<string> pik;
			boost::split(pik, command, boost::is_any_of(" "));

			

			strcpy(ggh.ipa, pik[1].c_str());

			ggh.portNumber = atoi(pik[2].c_str());
			
			strcpy(ggh.destn, pik[3].c_str());
			strcpy(ggh.soupth, pik[4].c_str());

			

			if(pthread_create(&download_thread, NULL, kjy, (void *) &ggh) != 0) perror("Download thread creation error!!!!!!!!!!!!");
		}
               else if(!(command.find("create_user"))) {
			pthread_t download_t;



			struct thread_u ut;

			vector<string> pik1;
			boost::split(pik1, command, boost::is_any_of(" "));

			

			strcpy(ut.ipa, pik1[1].c_str());

			ut.portNumber = atoi(pik1[2].c_str());
			
			strcpy(ut.u_name, pik1[3].c_str());
			strcpy(ut.u_pwd, pik1[4].c_str());


			if(pthread_create(&download_t, NULL, usercreate, (void *) &ut) != 0) cout<<"User creation error occured!!!!!!!!!!"<<endl;
		}
            else if(!(command.find("login"))) {
		pthread_t download_t;
			struct thread_u ut;

			vector<string> pik1;
			boost::split(pik1, command, boost::is_any_of(" "));

			//cout << pik.size() << endl;

			strcpy(ut.ipa, pik1[1].c_str());

			ut.portNumber = atoi(pik1[2].c_str());
			//pik[3].replace("/", "#");
			strcpy(ut.u_name, pik1[3].c_str());
			strcpy(ut.u_pwd, pik1[4].c_str());

			

			if(pthread_create(&download_t, NULL, logu, (void *) &ut) != 0) cout<<"Login error occured!!!!!!!!!!"<<endl;
		}
               else if(!(command.find("create_group"))) {
		pthread_t fft;
			struct yuj pt;

			vector<string> pik1;
			boost::split(pik1, command, boost::is_any_of(" "));

			//cout << pik.size() << endl;

			strcpy(pt.ipa, pik1[1].c_str());

			pt.portNumber = atoi(pik1[2].c_str());
		
			strcpy(pt.g_name, pik1[3].c_str());
			pt.cli_port= pi;

			//pt.gid = atoi(pik1[2].c_str());
			if(pthread_create(&fft, NULL, jg, (void *) &pt) != 0) cout<<"Group creation error occured!!!!!!!!!!"<<endl;
		}
                   else if(!(command.find("join_group"))) {
		pthread_t fft;
			struct yuj pt;

			vector<string> pik1;
			boost::split(pik1, command, boost::is_any_of(" "));

			//cout << pik.size() << endl;

			strcpy(pt.ipa, pik1[1].c_str());

			pt.portNumber = atoi(pik1[2].c_str());
			
			strcpy(pt.g_name, pik1[3].c_str());
			//strcpy(ut.u_pwd, pik1[4].c_str());
                      pt.cli_port= pi;
			//pt.gid = atoi(pik1[2].c_str());
			if(pthread_create(&fft, NULL, ig2, (void *) &pt) != 0) cout<<"Group joining error occured!!!!!!!!!!"<<endl;
		}
                     else if(!(command.find("leave_group"))) {
		pthread_t fft;
			struct yuj pt;

			vector<string> pik1;
			boost::split(pik1, command, boost::is_any_of(" "));

			//cout << pik.size() << endl;

			strcpy(pt.ipa, pik1[1].c_str());

			pt.portNumber = atoi(pik1[2].c_str());
			
			strcpy(pt.g_name, pik1[3].c_str());
                          pt.cli_port= pi;
			//strcpy(ut.u_pwd, pik1[4].c_str());
                          //cout<<"dooooooooooo";
			//pt.gid = atoi(pik1[2].c_str());
			if(pthread_create(&fft, NULL, jog2, (void *) &pt) != 0) perror("Error: Creating group");
		}
                   else if(!(command.find("list_requests"))) {
		pthread_t fft;
			struct yuj pt;

			vector<string> pik1;
			boost::split(pik1, command, boost::is_any_of(" "));

			//cout << pik.size() << endl;

			strcpy(pt.ipa, pik1[1].c_str());

			pt.portNumber = atoi(pik1[2].c_str());
			
			strcpy(pt.g_name, pik1[3].c_str());
                         pt.cli_port= pi;
			//strcpy(ut.u_pwd, pik1[4].c_str());
                          //cout<<"dooooooooooo";
			//pt.gid = atoi(pik1[2].c_str());
			if(pthread_create(&fft, NULL, Wog2, (void *) &pt) != 0) cout<<"Request listing error occured!!!!!!!!!!"<<endl;
		}
                     else if(!(command.find("list_groups"))) {
		       pthread_t fft;
			struct yuj pt;

			vector<string> pik1;
			boost::split(pik1, command, boost::is_any_of(" "));

			//cout << pik.size() << endl;

			strcpy(pt.ipa, pik1[1].c_str());

			pt.portNumber = atoi(pik1[2].c_str());
			
			strcpy(pt.g_name, pik1[3].c_str());
                         pt.cli_port= pi;
			//strcpy(ut.u_pwd, pik1[4].c_str());
                          //cout<<"dooooooooooo";
			//pt.gid = atoi(pik1[2].c_str());
			if(pthread_create(&fft, NULL, groups2, (void *) &pt) != 0) cout<<"Group listing error occured!!!!!!!!!!"<<endl;
		}
                       else if(!(command.find("logout"))) {
		       pthread_t fft;
			struct yuj pt;

			vector<string> pik1;
			boost::split(pik1, command, boost::is_any_of(" "));

			//cout << pik.size() << endl;

			strcpy(pt.ipa, pik1[1].c_str());

			pt.portNumber = atoi(pik1[2].c_str());
			
			strcpy(pt.g_name, pik1[3].c_str());
                         pt.cli_port= pi;
			
			if(pthread_create(&fft, NULL, logout2, (void *) &pt) != 0){
                         cout<<"Login Error!!!!!!!!!!"<<endl;
                         }
		}

                
	}

	return 0;
}

