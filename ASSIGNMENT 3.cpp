#include<fstream>
#include<iostream>

using namespace std;

// struct to store room booking info
struct roomInfo{
	int village;
	int floor;
	int roomNum;
	string name;
};

// function to load room availability data from textfile and store in array
void loadAvailability(string v1[4][10], string v2[4][10], string v3[4][10], string v4[4][10], string v5[4][10], string v6[4][10]){
	string fromFile, data;
	
	// load Village 1 room availability from text file into array
	ofstream outfile1;
	outfile1.open("V1_AVAILABILITY.txt", ios::app);
	outfile1.close();
	ifstream infile1;
	infile1.open("V1_AVAILABILITY.txt");
	while(getline(infile1,data)){
		fromFile = data;
		for(int i=0; i <4;i++){
			for(int j=0;j<10;j++){
				v1[i][j] = fromFile[(i*10)+j];
			}	
		}	
	}
	infile1.close();
	
	// load Village 2 room availability from text file into array
	ofstream outfile2;
	outfile2.open("V2_AVAILABILITY.txt", ios::app);
	outfile2.close();
	ifstream infile2;
	infile2.open("V2_AVAILABILITY.txt");
	while(getline(infile2,data)){
		fromFile = data;
		for(int i=0; i <4;i++){
			for(int j=0;j<10;j++){
				v2[i][j] = fromFile[(i*10)+j];
			}	
		}	
	}
	infile2.close();
	
	// load Village 3 room availability from text file into array
	ofstream outfile3;
	outfile3.open("V3_AVAILABILITY.txt", ios::app);
	outfile3.close();
	ifstream infile3;
	infile3.open("V3_AVAILABILITY.txt");
	while(getline(infile3,data)){
		fromFile = data;
		for(int i=0; i <4;i++){
			for(int j=0;j<10;j++){
				v3[i][j] = fromFile[(i*10)+j];
			}	
		}	
	}
	infile3.close();
	
	// load Village 4 room availability from text file into array
	ofstream outfile4;
	outfile4.open("V4_AVAILABILITY.txt", ios::app);
	outfile4.close();
	ifstream infile4;
	infile4.open("V4_AVAILABILITY.txt");
	while(getline(infile4,data)){
		fromFile = data;
		for(int i=0; i <4;i++){
			for(int j=0;j<10;j++){
				v4[i][j] = fromFile[(i*10)+j];
			}	
		}	
	}
	infile4.close();
	
	// load Village 5 room availability from text file into array
	ofstream outfile5;
	outfile5.open("V5_AVAILABILITY.txt", ios::app);
	outfile5.close();
	ifstream infile5;
	infile5.open("V5_AVAILABILITY.txt");
	while(getline(infile5,data)){
		fromFile = data;
		for(int i=0; i <4;i++){
			for(int j=0;j<10;j++){
				v5[i][j] = fromFile[(i*10)+j];
			}	
		}	
	}
	infile5.close();
	
	// load Village 6 room availability from text file into array
	ofstream outfile6;
	outfile6.open("V6_AVAILABILITY.txt", ios::app);
	outfile6.close();
	ifstream infile6;
	infile6.open("V6_AVAILABILITY.txt");
	while(getline(infile6,data)){
		fromFile = data;
		for(int i=0; i <4;i++){
			for(int j=0;j<10;j++){
				v6[i][j] = fromFile[(i*10)+j];
			}	
		}	
	}
	infile6.close();
}

// function to store room booking information into struct
void bookRoom(roomInfo roomInformation[], int size, int village, int floor, int room, string name){
	roomInformation[size].village = village;
	roomInformation[size].floor = floor;
	roomInformation[size].roomNum = room;
	roomInformation[size].name = name;
}

// function to display booking list from struct
void bookingList(roomInfo roomInformation[], int size) {
	cout << "\tNAME\t\t\tVILLAGE\tFLOOR\tROOM NUMBER\n";
	for (int i = 0; i < size;i++) {
		cout << i+1 << ".\t" << roomInformation[i].name << "\t\t" << roomInformation[i].village << "\t" << roomInformation[i].floor << "\t" << roomInformation[i].roomNum << endl;
	}
}

// function to update room availability from array into textfile
void updateAvailability(string v1[4][10], string v2[4][10], string v3[4][10], string v4[4][10], string v5[4][10], string v6[4][10]){
	// update Village 1 availability
	ofstream outfile1;
	outfile1.open("V1_AVAILABILITY.txt", ios::out);
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 10; j++){
			outfile1 << v1[i][j];
		}
	}
	outfile1.close();
	
	// update Village 2 availability
	ofstream outfile2;
	outfile2.open("V2_AVAILABILITY.txt", ios::out);
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 10; j++){
			outfile2 << v2[i][j];
		}
	}
	outfile2.close();
	
	// update Village 3 availability
	ofstream outfile3;
	outfile3.open("V3_AVAILABILITY.txt", ios::out);
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 10; j++){
			outfile3 << v3[i][j];
		}
	}
	outfile3.close();
	
	// update Village 4 availability
	ofstream outfile4;
	outfile4.open("V4_AVAILABILITY.txt", ios::out);
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 10; j++){
			outfile4 << v4[i][j];
		}
	}
	outfile4.close();
	
	// update Village 5 availability
	ofstream outfile5;
	outfile5.open("V5_AVAILABILITY.txt", ios::out);
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 10; j++){
			outfile5 << v5[i][j];
		}
	}
	outfile5.close();
	
	// update Village 6 availability
	ofstream outfile6;
	outfile6.open("V6_AVAILABILITY.txt", ios::out);
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 10; j++){
			outfile6 << v6[i][j];
		}
	}
	outfile6.close();
}


int main(){
	roomInfo roomInformation[100];
	int size = 0, selection, village, floor, room;
	string v1[4][10], v2[4][10], v3[4][10], v4[4][10], v5[4][10], v6[4][10];
	string name;
	
	// call function to load room availability data
	loadAvailability(v1, v2, v3, v4, v5, v6);
	
	cout << "******************************************\n"
			"*** WELCOME TO UTP RESIDENTIAL VILLAGE ***\n"
			"******************************************\n";
			
	do{
		
		cout << "\n\tMAIN MENU:\n"
				"\t1. CHECK ROOM AVAILABILITY\n"
				"\t2. BOOK ROOM\n"
				"\t3. VIEW ROOM BOOKINGS\n"
				"\t4. QUIT\n"
				"\n\tMENU OPTION: ";
		cin >> selection;
		cin.ignore();
		
		// error checking for main menu selection
		while(selection <= 0 | selection > 4){
			cout << "MENU OPTION ERROR. PLEASE TRY AGAIN. \n"
					"\n\tMAIN MENU:\n"
					"\t1. CHECK ROOM AVAILABILITY\n"
					"\t2. BOOK ROOM\n"
					"\t3. VIEW ROOM BOOKINGS\n"
					"\t3. QUIT\n"
					"\n\tMENU OPTION: ";
			cin >> selection;
			cin.ignore();
		}
		
		if(selection==1){
			cout << "\n\nENTER VILLAGE (1/2/3/4/5/6): "; cin >> village;
			cout << "\nROOMS AVAILABLE FOR RESIDENTIAL VILLAGE " << village << "\n";
			
			// selection to display rooms available
			if(village==1){				
				for(int i = 0; i < 4; i++){
					cout << "FLOOR " << i+1 << "\n";
					for(int j = 0; j < 10; j++){
						if(v1[i][j] == "1" | v1[i][j]=="2"){
							cout << "\tROOM " << j+1 << "\n";
						}
					}
				}	
			}	
			
			else if(village==2){
				for(int i = 0; i < 4; i++){
					cout << "FLOOR " << i+1 << "\n";
					for(int j = 0; j < 10; j++){
						if(v2[i][j] == "1" | v2[i][j]=="2"){
							cout << "\tROOM " << j+1 << "\n";
						}
					}
				}
			}	
			
			else if(village==3){
				for(int i = 0; i < 4; i++){
					cout << "FLOOR " << i+1 << "\n";
					for(int j = 0; j < 10; j++){
						if(v3[i][j]=="1" | v3[i][j]=="2"){
							cout << "\tROOM " << j+1 << "\n";
						}
						}
					}
			}
			
			else if(village==4){
				for(int i = 0; i < 4; i++){
					cout << "FLOOR " << i+1 << "\n";
					for(int j = 0; j < 10; j++){
						if(v4[i][j]=="1" | v4[i][j]=="2"){
							cout << "\tROOM " << j+1 << "\n";
						}
						}
					}
			}
			
			else if(village==5){
				for(int i = 0; i < 4; i++){
					cout << "FLOOR " << i+1 << "\n";
					for(int j = 0; j < 10; j++){
						if(v5[i][j]=="1" | v5[i][j]=="2"){
							cout << "\tROOM " << j+1 << "\n";
						}
						}
					}
			}
			
			else if(village==6){
				for(int i = 0; i < 4; i++){
					cout << "FLOOR " << i+1 << "\n";
					for(int j = 0; j < 10; j++){
						if(v6[i][j]=="1" | v6[i][j]=="2"){
							cout << "\tROOM " << j+1 << "\n";
						}
						}
					}
			}
			
		}
		
		else if(selection==2){
			cout << "\nRESIDENTIAL VILLAGE ROOM BOOKING";
			cout << "\n\tNAME: "; getline(cin,name);
			cout << "\tVILLAGE (1/2/3/4/5/6): "; cin >> village;
			cout << "\tFLOOR: "; cin >> floor;
			cout << "\tROOM NUMBER: "; cin >> room;
			
			if(village==1){
				if(v1[floor-1][room-1] == "1" | v1[floor-1][room-1] == "2"){
					bookRoom(roomInformation, size, village, floor, room, name);
					size++;
					cout << "\n" << name << " HAS BEEN REGISTERED IN VILLAGE " << village << " FLOOR " << floor << " ROOM " << room << ".\n";
					
					if(v1[floor-1][room-1]=="1"){
						v1[floor-1][room-1] = "0";
					}
					else if(v1[floor-1][room-1]=="2"){
						v1[floor-1][room-1] = "1";
					}
				}
				else{
					cout << "\nTHE ROOM IS NOT AVAILABLE FOR BOOKING.\n";
				}
			}
			
			else if(village==2){
				if(v2[floor-1][room-1] == "1" | v2[floor-1][room-1] == "2"){
					bookRoom(roomInformation, size, village, floor, room, name);
					size++;
					cout << "\n" << name << " HAS BEEN REGISTERED IN VILLAGE " << village << " FLOOR " << floor <<  " ROOM " << room << ".\n";
					
					if(v2[floor-1][room-1]=="1"){
						v2[floor-1][room-1] = "0";
					}
					else if(v2[floor-1][room-1]=="2"){
						v2[floor-1][room-1] = "1";
					}
				}
				else{
					cout << "\nTHE ROOM IS NOT AVAILABLE FOR BOOKING.\n";
				}
			}
			
			else if(village==3){
				if(v3[floor-1][room-1] == "1" | v3[floor-1][room-1] == "2"){
					bookRoom(roomInformation, size, village, floor, room, name);
					size++;
					cout << "\n" << name << " HAS BEEN REGISTERED IN VILLAGE " << village << " FLOOR " << floor << " ROOM " << room << ".\n";
					
					if(v3[floor-1][room-1]=="1"){
						v3[floor-1][room-1] = "0";
					}
					else if(v3[floor-1][room-1]=="2"){
						v3[floor-1][room-1] = "1";
					}
				}
				else{
					cout << "\nTHE ROOM IS NOT AVAILABLE FOR BOOKING.\n";
				}
			}
			
			else if(village==4){
				if(v4[floor-1][room-1] == "1" | v4[floor-1][room-1] == "2"){
					bookRoom(roomInformation, size, village, floor, room, name);
					size++;
					cout << "\n" << name << " HAS BEEN REGISTERED IN VILLAGE " << village << " FLOOR " << floor << " ROOM " << room << ".\n";
					
					if(v4[floor-1][room-1]=="1"){
						v4[floor-1][room-1] = "0";
					}
					else if(v4[floor-1][room-1]=="2"){
						v4[floor-1][room-1] = "1";
					}
				}
				else{
					cout << "\nTHE ROOM IS NOT AVAILABLE FOR BOOKING.\n";
				}
			}
			
			else if(village==5){
				if(v5[floor-1][room-1] == "1" | v5[floor-1][room-1] == "2"){
					bookRoom(roomInformation, size, village, floor, room, name);
					size++;
					cout << "\n" << name << " HAS BEEN REGISTERED IN VILLAGE " << village << " FLOOR " << floor << " ROOM " << room << ".\n";
					
					if(v5[floor-1][room-1]=="1"){
						v5[floor-1][room-1] = "0";
					}
					else if(v5[floor-1][room-1]=="2"){
						v5[floor-1][room-1] = "1";
					}
				}
				else{
					cout << "\nTHE ROOM IS NOT AVAILABLE FOR BOOKING.\n";
				}
			}
			
			else if(village==6){
				if(v6[floor-1][room-1] == "1" | v6[floor-1][room-1] == "2"){
					bookRoom(roomInformation, size, village, floor, room, name);
					size++;
					cout << "\n" << name << " HAS BEEN REGISTERED IN VILLAGE " << village << " FLOOR " << floor << " ROOM " << room << ".\n";
					
					if(v6[floor-1][room-1]=="1"){
						v6[floor-1][room-1] = "0";
					}
					else if(v6[floor-1][room-1]=="2"){
						v6[floor-1][room-1] = "1";
					}
				}
				else{
					cout << "\nTHE ROOM IS NOT AVAILABLE FOR BOOKING.\n";
				}
			}
			
			// call updateAvailability function
			updateAvailability(v1, v2, v3, v4, v5, v6);
		}
		
		else if(selection==3){
			cout << "\n";
			
			//call bookingList function to display room booking list
			bookingList(roomInformation, size);
		}
		
	}while(selection!=4); //loop will end once user enter 4 for selection
		
	cout << "\n\n********** THANK YOU **********";

	return 0;
}
