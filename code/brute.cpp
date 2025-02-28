#include<bits/stdc++.h>
using namespace std;

long T;
long n,m,k;
long a,b;

vector<pair<long,long>> edges;

void comb(long n) 
{
    string bitmask(n/2, 1);
    bitmask.resize(n, 0);


    string bitmask_t;
    bitmask_t = bitmask;

    bitmask_t[0] = 0;
    bitmask_t[n/2] = 1;

    bool flag = 0;
    do {

        long count = 0;

        for(int i=0;i<edges.size();++i){
           	long u = edges[i].first;
           	long v = edges[i].second;
           	if(bitmask[u-1] != bitmask[v-1]){
           		count++;
           	}
        }
        if(count <= k){
        	flag = 1;

            cout<<'\n';
           	cout<<"Set U : ";
           	for(int i=0;i<bitmask.size();++i){
           		if(bitmask[i])cout<<i+1<<' ';
           	}
           	cout<<'\n';
            	cout<<"Set V : ";
           	for(int i=0;i<bitmask.size();++i){
           		if(!bitmask[i])cout<<i+1<<' ';
           	}
           	cout<<'\n';

           	cout<<"No. of edges from U to V : "<<count<<'\n';
           	cout<<"Edges are : \n";

            for(int i=0;i<edges.size();++i){
            	long u = edges[i].first;
            	long v = edges[i].second;

            	if(bitmask[u-1] != bitmask[v-1]){
            		cout<<'('<<u<<','<<v<<')'<<'\n';
            	}
           	}

        }
        prev_permutation(bitmask.begin(),bitmask.end());

    } while (prev_permutation(bitmask_t.begin(), bitmask_t.end()));

    if(!flag){cout<<"Partition not possible.\n";}
}


// Vertices are numbered from 1 to n.
int main(){
	
	cin>>T;

	for(long i=1;i<=T;++i){
		edges.clear();

		cin>>n>>m>>k;
		while(m--){

			cin>>a>>b;
			edges.push_back({a,b});

		}

		cout<<"TESTCASE "<<i<<" :"<<'\n';
		comb(n);
		cout<<"----------------------------------------------------------------\n";

	}

	

	return 0;
}
