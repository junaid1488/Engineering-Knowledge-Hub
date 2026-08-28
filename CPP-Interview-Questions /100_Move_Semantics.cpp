    int get(int index, int snap_id) {
        int idx = upper_bound(
            make_pair(snap_id, INT_MAX)
        ) - updates[index].begin();
    }
};
