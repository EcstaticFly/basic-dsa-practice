#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<numeric>
using namespace std;

//Given an n*n matrix.Rat starts at (0,0).Destination (n-1,n-1).
//If matrix[i][j]==1,then rat can move in that cell and if matrix[i][j]==0, it cannot move there.
//It can move in 4 directions D,L,R,U.
//Find all paths it can take.

class Solution{
    private:
    bool isSafeToMove(int newx,int newy,vector<vector<int>> &m,int n,vector<vector<int>> visited){
        if((newx<n && newx>=0) && (newy<n && newy>=0) && visited[newx][newy]==0 && m[newx][newy]==1){
            return true;
        }
        //where rat wants to move should be inside matrix.
        //it shold not already be visisted(i.e visited[i][j]==0).
        //And, m[i][j]==1, to move in that cell
        else return false;
    }
    void solve(vector<vector<int>> &m, int n,int x,int y,vector<string>& ans,vector<vector<int>> visited,string path){
        if(x==n-1 && y==n-1){
            ans.push_back(path);
            return;
        }
        visited[x][y]=1; //(mark as 1,mean visited)
        //4 choices D,L,R,U
        //Down:
        int newx=x+1;
        int newy=y;
        if(isSafeToMove(newx,newy,m,n,visited)){
            path.push_back('D');
            solve(m,n,newx,newy,ans,visited,path);
            path.pop_back(); //Backtrack, to clear the path string.
        }
        
        //Left:
         newx=x;
         newy=y-1;
        if(isSafeToMove(newx,newy,m,n,visited)){
            path.push_back('L');
            solve(m,n,newx,newy,ans,visited,path);
            path.pop_back();
        }
        
        //Right:
         newx=x;
         newy=y+1;
        if(isSafeToMove(newx,newy,m,n,visited)){
            path.push_back('R');
            solve(m,n,newx,newy,ans,visited,path);
            path.pop_back();
        }
        //Up:
         newx=x-1;
         newy=y;
        if(isSafeToMove(newx,newy,m,n,visited)){
            path.push_back('U');
            solve(m,n,newx,newy,ans,visited,path);
            path.pop_back();
        }
        
        visited[x][y]=0; //BackTrack,to get a new path,we need to erase the previous visited path(NOT completely though..see recursion  tree).
        
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans; //To store all paths.
        if(m[0][0]==0 || m[n-1][n-1]==0){
            return ans; //if matrix(m): m[0][0]==0, rat can't enter the matrix, so,no path.ALso,if m[n-1][n-1]=0,it can't rach desti.,so no path.
        }
        
        string path;
        int srcx=0;
        int srcy=0;
        vector<vector<int>> visited=m; //Crete a visited array..to keep track of paths you've already taken.Intialise with 0(mean not visited).
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                visited[i][j]=0;
            }
        }
        solve(m,n,srcx,srcy,ans,visited,path);
        sort(ans.begin(),ans.end()); //Sorting it to just get ans in lexiographically smallest order.
        return ans;
        
    }
};