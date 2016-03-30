#include "storage/mgraph.h"
#include "solver/solver.h"

class Community_detection:public sae::Solver<std::pair<std::vector<sae::io::vid_t>,double>> {
public:
    Community_detection(sae::io::MappedGraph *graph);
    ~Community_detection();
    std::pair<std::vector<sae::io::vid_t>,double> solve();
private:
};