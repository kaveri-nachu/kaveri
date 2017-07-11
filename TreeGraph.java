public void findRedBlackSpanningTree()
{
	List<Edge> r = new ArrayList<>();		
	boolean[] v = new boolean[nodes.size()];
	dfsBlackRed(nodes.get(0), v, colour.BLACK, r);
	if (r.size() == nodes.size() - 1) 
  {
		edge(r);
	} 
	else
	{
	    r = new ArrayList<>();
		v = new boolean[nodes.size()];
				dfsBlackRed(nodes.get(0), v, colour.RED, r);
		if (r.size() == nodes.size() - 1) 
    {
			edge(r);
		}			
	}		
}
public void dfsBlackRed(Node root, boolean[] visited, colour pre_edge_colour, List<Edge> r) 
{
	visited[root.v - 1] = true;		
	Node n = null; 
		for (Edge e : root.edges) 
  {
		if (root.v == e.n1.v) 
    {
			n = e.n2;
		} else {
			n = e.n1;
		}
				if (!visited[n.v - 1] && !e.colour.equals(pre_edge_colour))
    {
			r.add(e);
				if (r.size() == this.nodes.size() - 1) 
      {					
				return;
			}
			dfsBlackRed(n, visited, pre_edge_colour.equals(colour.BLACK) ? colour.RED : colour.BLACK, r);					
		}						
	}
