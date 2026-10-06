#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

vector<float> getDV(vector<int> v1, vector<int>v2){
    float x= abs(v2[0] - v1[0]);
    float y= abs(v2[1] - v1[1]);
    
    float n = sqrt((x*x) + (y*y));
    
    cout << "dist:" << n << endl;
    
    vector<float> db;
    db.push_back(x/n);
    db.push_back(y/n);
    
    return db;
}

int solution(vector<vector<int>> dots) {
    int answer = 0;
    
    for(int i = 0; i < dots.size(); i++){
        for(int j = 0; j < dots.size(); j++){
            if(i == j) continue;

            int n1 = i;
            int n2 = j;
            
            int m1 = -1;
            int m2 = -1;
            
            for(int k = 0; k < dots.size(); k++){
                if(k == n1 || k == n2) continue;
                if(m1 == -1) m1 = k;
                else m2 = k;
            }
            
            vector<float>line1 = getDV(dots[n1], dots[n2]);
            vector<float>line2 = getDV(dots[m1], dots[m2]);
            
            cout << line1[0] << "," << line2[0] << endl;
            cout << line1[1] << "," << line2[1] << endl;
            
            if(line1[0] == line2[0] && line1[1] == line2[1]){
                return 1;
            }
        }
    }
    
    return 0;
}