#include<iostream>
#include<cstdlib>
#include<cstdio>

class Heuristic<class TSol> { 
	
	public: 
		virtual Heuristic() = 0;
		virtual ~Heuristic() = 0;
		virtual const TSol & getBestSolution() const = 0; 
		virtual void setBestSolution(const &solution) = 0; 
		virtual const bool stopCriteria() const = 0; 
		virtual const List<TSol *> & getCurrentSolutions();
		virtual void setCurrentSolutions(const List<TSol *> &solutions) = 0; 
		virtual const bool isSingleSolution(); 
		virtual const void setSingleSolution(const bool &value) = 0; 
	private:
		TSol bestSolution; 
		TSol List<TSol *> currentSolutions; 
		bool isSingleSolution; 
};