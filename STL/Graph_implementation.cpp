#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int DestinationVertexID;
    int weight;
    Edge()
    {
    }
    Edge(int destVID, int w)
    {
        DestinationVertexID = destVID;
        weight = w;
    }
    void setEdgeValues(int destVID, int w)
    {
        DestinationVertexID = destVID;
        weight = w;
    }
    void setWeight(int w)
    {
        weight = w;
    }
    int getDestinationVertexID()
    {
        return DestinationVertexID;
    }
    int getWeight()
    {
        return weight;
    }
};

class Vertex
{
public:
    int state_id;
    string state_name;

    list<Edge> edgeList;

    Vertex()
    {
        state_id = 0;
        state_name = "";
    }
    Vertex(int id, string sname)
    {
        state_id = id;
        state_name = sname;
    }
    int getStateID()
    {
        return state_id;
    }
    string getStateName()
    {
        return state_name;
    }
    void setID(int id)
    {
        state_id = id;
    }
    void setStateName(string sname)
    {
        state_name = sname;
    }
    list<Edge> getEdgeList()
    {
        return edgeList;
    }
};

class Graph
{
public:
    vector<Vertex> vertices;
    // ALL GRAPH OPERATIONS WILL BE IMPLEMENTED HERE

    void addVertex(Vertex newVertex)
    {
        bool check = checkIfVertexExistById(newVertex.getStateID());
    }
    bool checkIfVertexExistById(int vid)
    {

        for (int i = 0; i < vertices.size(); i++)
        {
            if (vertices.at(i).getStateID() == vid) // arr[0] = vertices.at(0)
            {
                return true;
            }
        }
        return false;
    }
    void printGraph()
    {
        for (int i = 0; i < vertices.size(); i++)
        {
            Vertex temp;
            temp = vertices.at(i);
            cout << temp.getStateName() << " (" << temp.getStateID() << ") --> ";
        }
    }
};

int main()
{
    // Edge e1
    // e1.setValues()
    // e1.getValue()
        int op;
        int id1;
        Graph g;
        string sname;
        Vertex v1;
    do
    {
        cout << "What operations do you want to perform?"
             << "Select Option number, Enter 0 to exit. " << endl;
        cout << "1.Add Vertex" << endl;
        cout << "2.Update Vertex" << endl;
        cout << "3.Delete Vertex" << endl;
        cout << "4.Add Edge" << endl;
        cout << "5.Update Edge" << endl;
        cout << "6.Delete Edge" << endl;
        cout << "7.Check if 2 vertices are Neighbour" << endl;
        cout << "8.Print All Neighbour of a Vertex" << endl;
        cout << "9.Print Graph" << endl;
        cout << "10.Clear Screen" << endl;
        cout << "0. Exit Program" << endl;
        cin >> op;

        switch (op)
        {
        case 0:
            break;

        case 1:
            cout << "Add Vertex Operation - " << endl;
            cout << "Enter State ID : ";
            cin >> id1;
            cout << "Enter State Name : ";
            cin >> sname;
            v1.setID(id1);
            v1.setStateName(sname);
            g.addVertex(v1);
            break;

        case 2:
            cout << "Update Vertex Operation - " << endl;
            break;

        case 3:
            cout << "Delete Vertex Operation - " << endl;
            break;

        case 4:
            cout << "Add Edge Operation - " << endl;
            break;

        case 5:
            cout << "Update Edge Operation - " << endl;
            break;

        case 6:
            cout << "Delete Edge Operation - " << endl;
            break;

        case 7:
            cout << "Check if 2 Vertices are Neighbours - " << endl;
            break;

        case 8:
            cout << "Print All Neighbour of a Vertex - " << endl;
            break;

        case 9:
            cout << "Print Graph Operation - " << endl;
            g.printGraph();
            break;

        default:
            cout << "Enter Proper Option number " << endl;
        }
        cout << endl;
    } while (op != 0);

    return 0;
}