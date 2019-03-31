#include "node.h"
#include <string>
#include <sstream>
#include <fstream>
Node* find(vector<Node*> &lis, int x){
	for (auto &b : lis){
		if(b->state==x){
			return b;
		}
	}
	return NULL;
}
int main(int argc, char* argv[]){
	ifstream input;
	input.open(argv[1]);
	string line;
	Node* add;
	string states;
	int state=0;
	bool start;
	bool accept;
	string first;
	string states1;
	string states2;
	string trans;
	int state1;
	//int trans;
	int state2;
	vector<Node*> lis={};
	Node* begin=NULL;
	Node* end=NULL;
	Node* starter=NULL;
	while (getline(input, line)){
		istringstream iss(line);
		if (line.find("state")!=string::npos ){
			if(line.find("acceptstart")!=string::npos || (line.find("start")!=string::npos && line.find("accept")!=string::npos) ){
				iss >> first;
				iss >> states;
				state=stoi(states);
				add = new Node(state, true, true);
				starter=add;
			}
			else if(line.find("start")!=string::npos){
				iss >> first;
				iss >> states;
				state=stoi(states);
				add= new Node(state, true, false);
				starter=add;
			}
			else if(line.find("accept")!=string::npos){
				iss >> first;
				iss >> states;
				state=stoi(states);
				add = new Node(state, false, true);
			}
			lis.push_back(add);
		}
		else{
			iss >> first;
			iss >> states1;
			iss >> trans;
			iss >> states2;
			state1=stoi(states1);
			//trans=stoi(transs);
			state2=stoi(states2);
			begin=find(lis, state1);
			end=find(lis,state2);
			if (begin!=NULL && end!=NULL){
				/*if(trans==1){
				begin->addOne(end);
				}
				else{
				begin->addZero(end);
				}*/
				if(trans.compare("1")==0){
					begin->addOne(end);}
				else if(trans.compare("0")==0){
					begin->addZero(end);}
				else if(trans.compare("2")==0){
					begin->addTwo(end);}
				else if(trans.compare("3")==0){
					begin->addThree(end);}
				else if(trans.compare("4")==0){
					begin->addFour(end);}
				else if(trans.compare("5")==0){
					begin->addFive(end);}
				else if(trans.compare("6")==0){
					begin->addSix(end);}
				else if(trans.compare("7")==0){
					begin->addSeven(end);}
				else if(trans.compare("8")==0){
					begin->addEight(end);}
				else if(trans.compare("9")==0){
					begin->addNine(end);}
				else if (trans.compare("a")==0){
					begin->addAs(end);}
				else if (trans.compare("b")==0){
					begin->addBs(end);}
				else if (trans.compare("c")==0){
					begin->addCs(end);}
				else if (trans.compare("d")==0){
					begin->addDs(end);}
				else if (trans.compare("e")==0){
					begin->addEs(end);}
				else if (trans.compare("f")==0){
					begin->addFs(end);}
				else if (trans.compare("g")==0){
					begin->addGs(end);}
				else if (trans.compare("h")==0){
					begin->addHs(end);}
				else if (trans.compare("i")==0){
					begin->addIs(end);}
				else if (trans.compare("j")==0){
					begin->addJs(end);}
				else if (trans.compare("k")==0){
					begin->addKs(end);}
				else if (trans.compare("l")==0){
					begin->addLs(end);}
				else if (trans.compare("m")==0){
					begin->addMs(end);}
				else if (trans.compare("n")==0){
					begin->addNs(end);}
				else if (trans.compare("o")==0){
					begin->addOs(end);}
				else if (trans.compare("p")==0){
					begin->addPs(end);}
				else if (trans.compare("q")==0){
					begin->addQs(end);}
				else if (trans.compare("r")==0){
					begin->addRs(end);}
				else if (trans.compare("s")==0){
					begin->addSs(end);}
				else if (trans.compare("t")==0){
					begin->addTs(end);}
				else if (trans.compare("u")==0){
					begin->addUs(end);}
				else if (trans.compare("v")==0){
					begin->addVs(end);}
				else if (trans.compare("w")==0){
					begin->addWs(end);}
				else if (trans.compare("x")==0){
					begin->addXs(end);}
				else if (trans.compare("y")==0){
					begin->addYs(end);}
				else if (trans.compare("z")==0){
					begin->addZs(end);}
			}
			else if(begin!=NULL && end==NULL){
				end=new Node(state2, false, false);
				lis.push_back(end);
				if(trans.compare("1")==0){
					begin->addOne(end);
				}
				else if(trans.compare("0")==0){
				begin->addZero(end);
				}
				else if(trans.compare("2")==0){
				begin->addTwo(end);
				}
				else if(trans.compare("3")==0){
				begin->addThree(end);
				}
				else if(trans.compare("4")==0){
				begin->addFour(end);
				}
				else if(trans.compare("5")==0){
				begin->addFive(end);
				}
				else if(trans.compare("6")==0){
				begin->addSix(end);
				}
				else if(trans.compare("7")==0){
				begin->addSeven(end);
				}
				else if(trans.compare("8")==0){
				begin->addEight(end);
				}
				else if(trans.compare("9")==0){
				begin->addNine(end);
				}
			else if (trans.compare("a")==0){
				begin->addAs(end);}
			else if (trans.compare("b")==0){
				begin->addBs(end);}
			else if (trans.compare("c")==0){
				begin->addCs(end);}
			else if (trans.compare("d")==0){
				begin->addDs(end);}
			else if (trans.compare("e")==0){
				begin->addEs(end);}
			else if (trans.compare("f")==0){
				begin->addFs(end);}
			else if (trans.compare("g")==0){
				begin->addGs(end);}
			else if (trans.compare("h")==0){
				begin->addHs(end);}
			else if (trans.compare("i")==0){
				begin->addIs(end);}
			else if (trans.compare("j")==0){
				begin->addJs(end);}
			else if (trans.compare("k")==0){
				begin->addKs(end);}
			else if (trans.compare("l")==0){
				begin->addLs(end);}
			else if (trans.compare("m")==0){
				begin->addMs(end);}
			else if (trans.compare("n")==0){
				begin->addNs(end);}
			else if (trans.compare("o")==0){
				begin->addOs(end);}
			else if (trans.compare("p")==0){
				begin->addPs(end);}
			else if (trans.compare("q")==0){
				begin->addQs(end);}
			else if (trans.compare("r")==0){
				begin->addRs(end);}
			else if (trans.compare("s")==0){
				begin->addSs(end);}
			else if (trans.compare("t")==0){
				begin->addTs(end);}
			else if (trans.compare("u")==0){
				begin->addUs(end);}
			else if (trans.compare("v")==0){
				begin->addVs(end);}
			else if (trans.compare("w")==0){
				begin->addWs(end);}
			else if (trans.compare("x")==0){
				begin->addXs(end);}
			else if (trans.compare("y")==0){
				begin->addYs(end);}
			else if (trans.compare("z")==0){
				begin->addZs(end);}
			}
			else if(begin==NULL && end!=NULL){
				begin=new Node(state1, false, false);
				lis.push_back(begin);
			}
			else if(begin==NULL && end==NULL){
				if (state1!=state2){
					begin=new Node(state1, false, false);
					end=new Node(state2, false, false);
					lis.push_back(begin);
					lis.push_back(end);
					/*if(trans==1){
						begin->addOne(end);
					}else{
						begin->addZero(end);
					}*/
					if(trans.compare("1")==0){
					begin->addOne(end);}
					else if(trans.compare("0")==0){
					begin->addZero(end);}
					else if(trans.compare("2")==0){
					begin->addTwo(end);}
					else if(trans.compare("3")==0){
					begin->addThree(end);}
					else if(trans.compare("4")==0){
					begin->addFour(end);}
					else if(trans.compare("5")==0){
					begin->addFive(end);}
					else if(trans.compare("6")==0){
					begin->addSix(end);}
					else if(trans.compare("7")==0){
					begin->addSeven(end);}
					else if(trans.compare("8")==0){
					begin->addEight(end);}
					else if(trans.compare("9")==0){
					begin->addNine(end);}
					else if (trans.compare("a")==0){
					begin->addAs(end);}
					else if (trans.compare("b")==0){
					begin->addBs(end);}
					else if (trans.compare("c")==0){
					begin->addCs(end);}
					else if (trans.compare("d")==0){
					begin->addDs(end);}
					else if (trans.compare("e")==0){
					begin->addEs(end);}
					else if (trans.compare("f")==0){
					begin->addFs(end);}
					else if (trans.compare("g")==0){
					begin->addGs(end);}
					else if (trans.compare("h")==0){
					begin->addHs(end);}
					else if (trans.compare("i")==0){
					begin->addIs(end);}
					else if (trans.compare("j")==0){
					begin->addJs(end);}
					else if (trans.compare("k")==0){
					begin->addKs(end);}
					else if (trans.compare("l")==0){
					begin->addLs(end);}
					else if (trans.compare("m")==0){
					begin->addMs(end);}
					else if (trans.compare("n")==0){
					begin->addNs(end);}
					else if (trans.compare("o")==0){
					begin->addOs(end);}
					else if (trans.compare("p")==0){
					begin->addPs(end);}
					else if (trans.compare("q")==0){
					begin->addQs(end);}
					else if (trans.compare("r")==0){
					begin->addRs(end);}
					else if (trans.compare("s")==0){
					begin->addSs(end);}
					else if (trans.compare("t")==0){
					begin->addTs(end);}
					else if (trans.compare("u")==0){
					begin->addUs(end);}
					else if (trans.compare("v")==0){
					begin->addVs(end);}
					else if (trans.compare("w")==0){
					begin->addWs(end);}
					else if (trans.compare("x")==0){
					begin->addXs(end);}
					else if (trans.compare("y")==0){
					begin->addYs(end);}
					else if (trans.compare("z")==0){
					begin->addZs(end);}
				}
				else{	
					begin=new Node(state1, false, false);
					lis.push_back(begin);
					/*if (trans==1){
							begin->addOne(begin);
						}
					else{
						begin->addZero(begin);
					}*/
					if(trans.compare("1")==0){
					begin->addOne(end);}
				else if(trans.compare("0")==0){
					begin->addZero(end);}
				else if(trans.compare("2")==0){
					begin->addTwo(end);}
				else if(trans.compare("3")==0){
					begin->addThree(end);}
				else if(trans.compare("4")==0){
					begin->addFour(end);}
				else if(trans.compare("5")==0){
					begin->addFive(end);}
				else if(trans.compare("6")==0){
					begin->addSix(end);}
				else if(trans.compare("7")==0){
					begin->addSeven(end);}
				else if(trans.compare("8")==0){
					begin->addEight(end);}
				else if(trans.compare("9")==0){
					begin->addNine(end);}
				else if (trans.compare("a")==0){
					begin->addAs(end);}
				else if (trans.compare("b")==0){
					begin->addBs(end);}
				else if (trans.compare("c")==0){
					begin->addCs(end);}
				else if (trans.compare("d")==0){
					begin->addDs(end);}
				else if (trans.compare("e")==0){
					begin->addEs(end);}
				else if (trans.compare("f")==0){
					begin->addFs(end);}
				else if (trans.compare("g")==0){
					begin->addGs(end);}
				else if (trans.compare("h")==0){
					begin->addHs(end);}
				else if (trans.compare("i")==0){
					begin->addIs(end);}
				else if (trans.compare("j")==0){
					begin->addJs(end);}
				else if (trans.compare("k")==0){
					begin->addKs(end);}
				else if (trans.compare("l")==0){
					begin->addLs(end);}
				else if (trans.compare("m")==0){
					begin->addMs(end);}
				else if (trans.compare("n")==0){
					begin->addNs(end);}
				else if (trans.compare("o")==0){
					begin->addOs(end);}
				else if (trans.compare("p")==0){
					begin->addPs(end);}
				else if (trans.compare("q")==0){
					begin->addQs(end);}
				else if (trans.compare("r")==0){
					begin->addRs(end);}
				else if (trans.compare("s")==0){
					begin->addSs(end);}
				else if (trans.compare("t")==0){
					begin->addTs(end);}
				else if (trans.compare("u")==0){
					begin->addUs(end);}
				else if (trans.compare("v")==0){
					begin->addVs(end);}
				else if (trans.compare("w")==0){
					begin->addWs(end);}
				else if (trans.compare("x")==0){
					begin->addXs(end);}
				else if (trans.compare("y")==0){
					begin->addYs(end);}
				else if (trans.compare("z")==0){
					begin->addZs(end);}
				}
			}


		}

	}
	string arg=argv[2];
	//cout << argv[2] << endl;
	vector<pair<Node*, string>> path={};
	//cout << "hello" << endl;
	path.push_back(make_pair(starter, arg));
	string left;
	int symbol;
	char sym;
	Node* curr=starter;
	for (int i=0; i<path.size(); i++){
		Node* curr=path[i].first;
		left=path[i].second;
		if (left.size()!=0){
				sym=left[0];
				//symbol=sym-'0';
				if (sym=='0'){
					for (auto x: curr->zeros){
						path.push_back(make_pair(x, left.substr(1,left.length())));
					}
				}
				else if(sym=='1'){
					for (auto x: curr->ones){
						path.push_back(make_pair(x, left.substr(1, left.length())));
					}
				}
				else if (sym=='2'){
      					for (auto x: curr->vecsTwo){
            					path.push_back(make_pair(x, left.substr(1, left.length())));
					}
				}
				else if (sym=='3'){
      					for (auto x: curr->vecsThree){
            					path.push_back(make_pair(x, left.substr(1, left.length())));
					}
				}
				else if (sym=='4'){
      					for (auto x: curr->vecsFour){
            					path.push_back(make_pair(x, left.substr(1, left.length())));
					}
				}
				else if (sym=='5'){
      					for (auto x: curr->vecsFive){
            					path.push_back(make_pair(x, left.substr(1, left.length())));
					}
				}
				else if (sym=='6'){
      					for (auto x: curr->vecsSix){
            					path.push_back(make_pair(x, left.substr(1, left.length())));
					}
				}
				else if (sym=='7'){
      					for (auto x: curr->vecsSeven){
            					path.push_back(make_pair(x, left.substr(1, left.length())));
					}
				}
				else if (sym=='8'){
      					for (auto x: curr->vecsEight){
            path.push_back(make_pair(x, left.substr(1, left.length())));
			}
}
else if (sym=='9'){
      for (auto x: curr->vecsNine){
            path.push_back(make_pair(x, left.substr(1, left.length())));
			}
}
else if (sym=='a'){
      for (auto x: curr->vecsAs){
            path.push_back(make_pair(x, left.substr(1, left.length())));
			}
}
else if (sym=='b'){
      for (auto x: curr->vecsBs){
            path.push_back(make_pair(x, left.substr(1, left.length())));
			}
}
else if (sym=='c'){
      for (auto x: curr->vecsCs){
            path.push_back(make_pair(x, left.substr(1, left.length())));
			}
}
else if (sym=='d'){
      for (auto x: curr->vecsDs){
            path.push_back(make_pair(x, left.substr(1, left.length())));
			}
}
else if (sym=='e'){
      for (auto x: curr->vecsEs){
            path.push_back(make_pair(x, left.substr(1, left.length())));
			}
}
else if (sym=='f'){
      for (auto x: curr->vecsFs){
            path.push_back(make_pair(x, left.substr(1, left.length())));
			}
}
else if (sym=='g'){
      for (auto x: curr->vecsGs){
            path.push_back(make_pair(x, left.substr(1, left.length())));
			}
}
else if (sym=='h'){
      for (auto x: curr->vecsHs){
            path.push_back(make_pair(x, left.substr(1, left.length())));
			}
}
else if (sym=='i'){
      for (auto x: curr->vecsIs){
            path.push_back(make_pair(x, left.substr(1, left.length())));
			}
}
else if (sym=='j'){
      for (auto x: curr->vecsJs){
            path.push_back(make_pair(x, left.substr(1, left.length())));
			}
}
else if (sym=='k'){
      for (auto x: curr->vecsKs){
            path.push_back(make_pair(x, left.substr(1, left.length())));
			}
}
else if (sym=='l'){
      for (auto x: curr->vecsLs){
            path.push_back(make_pair(x, left.substr(1, left.length())));
			}
}
else if (sym=='m'){
      for (auto x: curr->vecsMs){
            path.push_back(make_pair(x, left.substr(1, left.length())));
			}
}
else if (sym=='n'){
      for (auto x: curr->vecsNs){
            path.push_back(make_pair(x, left.substr(1, left.length())));
			}
}
else if (sym=='o'){
      for (auto x: curr->vecsOs){
            path.push_back(make_pair(x, left.substr(1, left.length())));
			}
}
else if (sym=='p'){
      for (auto x: curr->vecsPs){
            path.push_back(make_pair(x, left.substr(1, left.length())));
			}
}
else if (sym=='q'){
      for (auto x: curr->vecsQs){
            path.push_back(make_pair(x, left.substr(1, left.length())));
			}
}
else if (sym=='r'){
      for (auto x: curr->vecsRs){
            path.push_back(make_pair(x, left.substr(1, left.length())));
			}
}
else if (sym=='s'){
      for (auto x: curr->vecsSs){
            path.push_back(make_pair(x, left.substr(1, left.length())));
			}
}
else if (sym=='t'){
      for (auto x: curr->vecsTs){
            path.push_back(make_pair(x, left.substr(1, left.length())));
			}
}
else if (sym=='u'){
      for (auto x: curr->vecsUs){
            path.push_back(make_pair(x, left.substr(1, left.length())));
			}
}
else if (sym=='v'){
      for (auto x: curr->vecsVs){
            path.push_back(make_pair(x, left.substr(1, left.length())));
			}
}
else if (sym=='w'){
      for (auto x: curr->vecsWs){
            path.push_back(make_pair(x, left.substr(1, left.length())));
			}
}
else if (sym=='x'){
      for (auto x: curr->vecsXs){
            path.push_back(make_pair(x, left.substr(1, left.length())));
			}
}
else if (sym=='y'){
      for (auto x: curr->vecsYs){
            path.push_back(make_pair(x, left.substr(1, left.length())));
			}
}
else if (sym=='z'){
      for (auto x: curr->vecsZs){
            path.push_back(make_pair(x, left.substr(1, left.length())));
			}
}
			}
		}
	bool acc=false;
	vector<Node*>accepts={};
	vector<Node*>rejects={};
	for (auto x: path){
		if (x.second.length()==0){
			if(x.first->accept==true){
			if(find(accepts, x.first->state)==NULL){
				accepts.push_back(x.first);
			}
			}
			else{
			if(find(rejects, x.first->state)==NULL){
				rejects.push_back(x.first);
				}
			}
		}

	}
	if (accepts.size()>0){
		cerr << "accept";
		for (auto x: accepts){
			cerr << " ";
			cerr << x->state;	
		}
		cerr << "\n";
	}
	else{
		cerr << "reject";
		for (auto y: rejects){
			cerr << " ";
			cerr << y->state;
		}
		cerr << "\n";
	}

}
