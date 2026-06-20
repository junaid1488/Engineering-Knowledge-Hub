import java.util.*;

class Solution {

    private LinkedList<String>
        itinerary =
            new LinkedList<>();

    private Map<String,
        PriorityQueue<String>>
            graph =
                new HashMap<>();

    public List<String> findItinerary(
        List<List<String>> tickets
    ) {

        for (
            List<String> ticket :
            tickets
        ) {

            graph
                .computeIfAbsent(
                    ticket.get(0),
                    k -> new PriorityQueue<>()
                )
                .offer(ticket.get(1));
        }

        dfs("JFK");

        return itinerary;
    }

    private void dfs(
        String airport
    ) {

        PriorityQueue<String> pq =
            graph.get(airport);

        while (
            pq != null &&
            !pq.isEmpty()
        ) {

            dfs(pq.poll());
        }

        itinerary.addFirst(
            airport
        );
    }
}
