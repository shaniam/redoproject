#ifndef _NODE_H_
#define _NODE_H_

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <utility>
#include <fstream>
#include <cstddef>
#include <math.h>



using namespace std;
class Node{
	public:
		int state;
		vector<Node*> adjacents={}; 
		vector<Node*> ones={};
		vector<Node*> zeros={};
		vector<Node*> vecsTwo={};
		vector<Node*> vecsThree={};
		vector<Node*> vecsFour={};
		vector<Node*> vecsFive={};
		vector<Node*> vecsSix={};
vector<Node*> vecsSeven={};
vector<Node*> vecsEight={};
vector<Node*> vecsNine={};
vector<Node*> vecsAs={};
vector<Node*> vecsBs={};
vector<Node*> vecsCs={};
vector<Node*> vecsDs={};
vector<Node*> vecsEs={};
vector<Node*> vecsFs={};
vector<Node*> vecsGs={};
vector<Node*> vecsHs={};
vector<Node*> vecsIs={};
vector<Node*> vecsJs={};
vector<Node*> vecsKs={};
vector<Node*> vecsLs={};
vector<Node*> vecsMs={};
vector<Node*> vecsNs={};
vector<Node*> vecsOs={};
vector<Node*> vecsPs={};
vector<Node*> vecsQs={};
vector<Node*> vecsRs={};
vector<Node*> vecsSs={};
vector<Node*> vecsTs={};
vector<Node*> vecsUs={};
vector<Node*> vecsVs={};
vector<Node*> vecsWs={};
vector<Node*> vecsXs={};
vector<Node*> vecsYs={};
vector<Node*> vecsZs={};
		bool start=false;
		bool accept=false;
		Node(int, bool, bool);
		Node();
		void addOne(Node*);
		void addZero(Node*);
		void addThree(Node* x);
void addTwo(Node *x);
void addFour(Node* x);
void addFive(Node* x);
void addSix(Node* x);
void addSeven(Node* x);
void addEight(Node* x);
void addNine(Node* x);
void addAs(Node* x);
void addBs(Node* x);
void addCs(Node* x);
void addDs(Node* x);
void addEs(Node* x);
void addFs(Node* x);
void addGs(Node* x);
void addHs(Node* x);
void addIs(Node* x);
void addJs(Node* x);
void addKs(Node* x);
void addLs(Node* x);
void addMs(Node* x);
void addNs(Node* x);
void addOs(Node* x);
void addPs(Node* x);
void addQs(Node* x);
void addRs(Node* x);
void addSs(Node* x);
void addTs(Node* x);
void addUs(Node* x);
void addVs(Node* x);
void addWs(Node* x);
void addXs(Node* x);
void addYs(Node* x);
void addZs(Node* x);
};
class LinkedList{
	public:
		vector<Node*> nodes={};
		Node* head;
		LinkedList(){};	
};	


#endif
