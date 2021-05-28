#include<iostream>
#include<cstring>

using namespace std;



struct Question {
	string questionStatement;
	string posibilities[3];
	int answer, userAnswer;
};

string askQuestion(Question qstn){
	cout<<qstn.questionStatement<<endl;
	for (int i = 0; i < 3; i++)
	{
		cout<<i+1<<"."<<qstn.posibilities[i]<<endl;
	}
	cin>>qstn.userAnswer;
	if(qstn.userAnswer == qstn.answer){
		cout<<"correct !"<<endl;
		return "correct";
		
	}
	else{
		cout<<"incorrect"<<endl;
		return "incorrect";
	}
	
}

void allquestions (Question qstn[], int num){
	string newAnswer = "correct";
	int count = 0;
	for (int i = 0; i < num ; i++)
	{
		if(askQuestion(qstn[i]) == newAnswer){
			count += 1;
		}
	}
	int percent = (count / num)*100;
	cout<<"you Got "<< percent<<" percents"<<endl;
}


int main() {

	Question questions[3] ;

	questions[0] = {"What is the smallest contry  ?",{"USA", "India", "Vatican"}, 3};
	
	questions[1] = {"how many elements are in the periodic table ? ", {"152", "118", "128"}, 2};
	
	questions[2] = {"how many humans live okn earth 2021 ?", {"7.8B", "6.8B", "8B"}, 1};
	

	allquestions(questions , 3);

	return 0;
}