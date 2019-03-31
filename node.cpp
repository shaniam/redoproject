#include "node.h"

void Node::addOne(Node* one){
	this->ones.push_back(one);}
void Node::addZero(Node* zero){
	this->zeros.push_back(zero);}
void Node::addTwo(Node* Two){
	this->vecsTwo.push_back(Two);
}
void Node::addThree(Node*Three ){
this->vecsThree.push_back( Three );}
void Node::addFour(Node*Four ){
this->vecsFour.push_back( Four );}
void Node::addFive(Node*Five ){
this->vecsFive.push_back( Five );}
void Node::addSix(Node*Six ){
this->vecsSix.push_back( Six );}
void Node::addSeven(Node*Seven ){
this->vecsSeven.push_back( Seven );}
void Node::addEight(Node*Eight ){
this->vecsEight.push_back( Eight );}
void Node::addNine(Node*Nine ){
this->vecsNine.push_back( Nine );}
void Node::addAs(Node*As ){
this->vecsAs.push_back( As );}
void Node::addBs(Node*Bs ){
this->vecsBs.push_back( Bs );}
void Node::addCs(Node*Cs ){
this->vecsCs.push_back( Cs );}
void Node::addDs(Node*Ds ){
this->vecsDs.push_back( Ds );}
void Node::addEs(Node*Es ){
this->vecsEs.push_back( Es );}
void Node::addFs(Node*Fs ){
this->vecsFs.push_back( Fs );}
void Node::addGs(Node*Gs ){
this->vecsGs.push_back( Gs );}
void Node::addHs(Node*Hs ){
this->vecsHs.push_back( Hs );}
void Node::addIs(Node*Is ){
this->vecsIs.push_back( Is );}
void Node::addJs(Node*Js ){
this->vecsJs.push_back( Js );}
void Node::addKs(Node*Ks ){
this->vecsKs.push_back( Ks );}
void Node::addLs(Node*Ls ){
this->vecsLs.push_back( Ls );}
void Node::addMs(Node*Ms ){
this->vecsMs.push_back( Ms );}
void Node::addNs(Node*Ns ){
this->vecsNs.push_back( Ns );}
void Node::addOs(Node*Os ){
this->vecsOs.push_back( Os );}
void Node::addPs(Node*Ps ){
this->vecsPs.push_back( Ps );}
void Node::addQs(Node*Qs ){
this->vecsQs.push_back( Qs );}

void Node::addRs(Node*Rs ){
this->vecsRs.push_back( Rs );}

void Node::addSs(Node*Ss){
this->vecsSs.push_back(Ss);
}

void Node::addTs(Node*Ts ){
this->vecsTs.push_back( Ts );}
void Node::addUs(Node*Us){
this->vecsUs.push_back(Us);};
void Node::addVs(Node*Vs ){
this->vecsVs.push_back( Vs );}
void Node::addWs(Node*Ws ){
this->vecsWs.push_back( Ws );}
void Node::addXs(Node*Xs ){
this->vecsXs.push_back( Xs );}
void Node::addYs(Node*Ys ){
this->vecsYs.push_back( Ys );}
void Node::addZs(Node*Zs ){
this->vecsZs.push_back( Zs );}



Node::Node(int state, bool start, bool accept){
	this->start=start;
	this->accept=accept;
	this->state=state;
}
Node::Node(){
}
