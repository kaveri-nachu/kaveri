int _solve_prob_int(int depth, int start, int count, int input[])
    {
    if(count == 0)
        return 0;
    int mid = start + ((count - 1) / 2);
    if(input[mid] == mid)
        return 1;
if(input[mid] <= start && input[mid] >= start + count)
        return 0;
int n_sub_elleft = (int)(count - 1) / 2;
    int n_sub_elright = (int)(count) / 2;
   if(input[mid] <= start)
        return _solve_prob_int(depth + 1, mid + 1, n_sub_elright, input);
   if(input[mid] >= start + count)
        return _solve_prob_int(depth + 1, mid - n_sub_elleft, n_sub_elleft, input);
   return _solve_prob_int(depth + 1, mid - n_sub_elleft, n_sub_elleft, input) ||
            _solve_prob_int(depth + 1, mid + 1, n_sub_elright, input);
    }
