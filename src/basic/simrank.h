#include "storage/mgraph.h"
#include "solver/solver.h"

class SimRank:public sae::Solver<std::vector<std::pair<double, sae::io::vid_t> >  >{
public:
	SimRank(sae::io::MappedGraph *graph);
	~SimRank();
    std::vector<std::pair<double, sae::io::vid_t> > solve(sae::io::vid_t vertex,bool is_accurate);
};
