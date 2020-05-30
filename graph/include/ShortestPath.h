#ifndef ShortestPath_h
#define ShortestPath_h

#include "GraphType.h"
#include <iostream>
#include <queue>

template<class VertexType>
struct ItemType
{
  bool operator<(ItemType otherItem);  
  // �<� means greater distance
  bool operator==(ItemType otherItem);
  bool operator<=(ItemType otherItem);
  VertexType fromVertex;
  VertexType toVertex;
  int distance;
  void ShortestPath(GraphType<VertexType> graph, VertexType starVertex);
};

template<class VertexType>
void ItemType<VertexType>::ShortestPath(GraphType<VertexType> graph, 
     VertexType startVertex)
{
  using namespace std;
  ItemType item;
  int minDistance;
  priority_queue <VertexType> pq(10);     // Assume at most 10 vertices
  QueType<VertexType> vertexQ;
  VertexType vertex;

  graph.ClearMarks();
  item.fromVertex = startVertex;
  item.toVertex = startVertex;
  item.distance = 0;
  pq.Enqueue(item);
  cout  << "Last Vertex  Destination   Distance" << endl;
  cout  << "-------------------------------------" << endl;
  
  do
  {
    pq.Dequeue(item);
    if (!graph.IsMarked(item.toVertex))
    {
      graph.MarkVertex(item.toVertex);
      cout << item.fromVertex;
      cout << "  ";
      cout << item.toVertex;
      cout << "  " << item.distance << endl;
      item.fromVertex = item.toVertex;
      minDistance = item.distance;
      graph.GetToVertices(item.fromVertex, vertexQ);
         
      while (!vertexQ.IsEmpty())
      {
        vertexQ.Dequeue(vertex);
        if (!graph.IsMarked(vertex))
        {
          item.toVertex = vertex;
          item.distance = minDistance +
              graph.WeightIs(item.fromVertex, vertex);
          pq.Enqueue(item);
        }
      }  
    }
  } while (!pq.IsEmpty());
}

#endif