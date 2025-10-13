/* James Moore
Assignment Prioritizer 
(Identifies an "optimal" order for completing assignmnets)
*/

#include <iostream>
#include <vector>
using namespace std;

// Function for determinining order of assignments based on the average effect it would have on the current grade
int priority(int grade, int weight, int category_grade, int category_weight, vector<int>&list) {
    // Priority = placement in list where 0 is the most valuable
    // = ((grade - grade_if_0) + (grade_if_100 - grade)) / 2
    // = average change in grade after assignment
    // grade_if_0 = grade after assignment = 0
    // grade_if_100 = grade after assigment = 100
    int grade_if_0 = 0;
    int grade_if_100 = 0;
    int grade_if_avg = 0;
    grade_if_0 = (grade - (weight))
    grade_if_100 = (weight )
    return grade_if_avg;
}

int main() {

}