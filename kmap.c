{ 
protected: 
		int	type,termCount,        
			saverCount;		
		vector<int>ones;        
 		vector<int>dCare;        
		bool hasEnteredType,      
			SOP;			     
	void guideWin (short cursor);
	int readInt (int &count, bool negative ); 
	void getPos (vector<int> &pos, string name);
	void setTerms (vector<int> ones, vector<vector<int> > &terms);  
	setKmap(): hasEnteredType(false) {}
};
class   CompareKmapTerms : public setKmap 
{
protected:
		int	temp, temp1, temp2, temp3; 
		int resultTerms;
	vector<char> minimize (vector<int> &ones, vector<int> &dCare);
	void compare (vector < vector< int >> &terms);
	void saveValue(vector<int> &tempSave, vector<vector<int>> 
	&saver, vector<bool> &hascompare, vector<vector<int>> &terms);
	void addOther (vector<vector<int>> &saver,vector<bool> 
	&hascompare, int &saverCount, vector<vector<int>> &terms);
	void unRepeat (vector<vector<int> > &terms);
	vector<char> posToTerm(vector<vector<int>> 
	&terms); 
};
class FilterKmapTerms : public CompareKmapTerms, public ConverteTerms, public Combination
{
protected:
	int	temp, temp1, temp2, temp3; 
	vector<char> getTerm (vector<char> 
	&result, int pos);
	int getMintermCount(vector<char> &term);
	int getLargestTermSize(vector<char> &result);
	bool checkResult (vector<char> someResult, vector<int> ones );	
vector <vector<char>> getFilterResult(vector<vector 
< char>> &results, vector<char> &essentialTerms);	
	vector <vector<char>> filter 
	(vector<char> &result, vector<int> ones);	
};
