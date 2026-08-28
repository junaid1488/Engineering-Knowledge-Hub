    int get(int index, int snap_id) {
        int idx = upper_bound(
            updates[index].begin(),
            updates[index].end(),
            make_pair(snap_id, INT_MAX)
        ) - updates[index].begin();

        if (idx == 0) return 0;

        return updates[index][idx - 1].second;
    }
};
