#include <iostream>
#include <string>
/*june 2, 2026
lab 5: string methods

 */
using namespace std;
int main(int argc, char** argv) {
	cout<<"\n====example 1:string indexing"<<endl;
	//characters within a sstring is accessible by using an index number
	//index number startss from 0 (left most)
	string username = "peterpan123";
	cout<<"The fourth character of username= "<<username[3]<<endl;
	//at() method can also be used to access a charater in a string 
	cout<<"The sixth character of a username= "<<username.at(5)<<endl;
	
		cout<<"\n====example 2:length of string "<<endl;
	//length methodd shows the number of characters in a string including the whitespace
		int num_username = username.length();
		cout<<"There are "<<num_username<<"characters in username"<<endl;	
	
		cout<<"\n====example 3:adding stringss"<<endl;
       //strings can be concentrated or added by using the + operator 
	   string n="never";
	   string m="Again";
	   	cout<<n + m<<endl;
	   	
		cout<<"\n====example 4:subtracting character from a string"<<endl;
	//substr() method characters from a string 
	//substr(x,y)--> x= starting inde, y --> is the amount of characters you extract from index x.
	cout<<"Extracted word= "<<n.substr(1,4)<<endl;
	
		cout<<"\n====example 5:inserting characters into a string"<<endl;
	//insert() method insert characters into string
	//insert (x,y)--> x= inserting index position, y = characters to be inserted
	//from example,insert the word LAND in for username= "peterLANDpan123"
	cout<<username<<endl;
	username.insert(5,"LAND"); //automatically updated the string and added LAND 
	cout<<username<<endl;
	
		cout<<"\n====example 6: add charcters to the end of a string"<<endl;
		//append() methods adds characters to the end of a string
		//append(x) --> x= chaarcters to be added to the end of a string
		username.append("END");// automatically update string value.accesor method
		cout<<username<<endl;
		
			cout<<"\n====example 7: replacing characters in a string"<<endl;
			//replace() method replaces characters in a string 
			//replace (x,y,z) --> x=index where the replacemnt starts,y = number of characters to be replaced,z = new characters
			string name ="Peter Pan";
			//replace 'eter' with 'atrick'
			name.replace(1, 4, "atrick" );
			cout<<name<<endl;
			
				cout<<"\n====example 8: erasing characters from a string"<<endl;
				//erase()method erases characters from a string
				//erase(x,y)---> x=starting index where characters will be removed
				//y=amount of characters to be removed from index x
				name.erase(9,2);
				cout<<name<<endl;
				
					cout<<"\n====example 9: find the index of characters in a string"<<endl;
					//find() method
					//find (x)--> x= characters to be found 
					cout<<username<<endl;
					int index_r = username.find("pan");
					cout<<"Index of letter pan = "<<index_r<<endl;
					int never = username.find("NEVER");
					cout<<"Index of NEVER= "<<never<<endl; 

					
					cout<<"\n====example 10: combination method"<<endl;
					//add string m in usernamme before 123
					cout<< username<<endl;
					cout<<m<<endl;
					//find the index for 123
					int index123 = username.find("123");
					//add value of string m before from index123
					username.insert(index123, m);
					cout<<username<<endl;

				 cout<<"\n====practice exam 1 ==="<<endl;
					string password ="peterpan123";
					int a = password.length(); //a is the how many numbers in the password a=11
					int b = a-2;//b is 9

					password.replace(b,3,"NONE");
					//what is the character in string password at index b


					cout<<"\n===lab 5:excersise 1===="<<endl;
					string new_word;
					cout<<"\n Enter a word: ";
					cin>>new_word;
					cout<<"the 4th character of the word is: "<<new_word[3]<<endl;
					int new_word_length = new_word.length();
					cout<<"the length of the word is: "<<new_word_length<<endl;
					new_word.replace(1,3,"--$--");
					cout<<"the new word is: "<<new_word<<endl;
					new_word.erase(6,7);
					cout<<"the new word is: "<<new_word<<endl;
					


	return 0;
}