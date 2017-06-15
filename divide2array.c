void findSubarrays(int arr[], int n)
{
    bool found = false;
    int lsum = 0;
    for (int i = 0; i < n-1; i++)
    {
        lsum += arr[i];
        int rsum = 0;
        for (int j = i + 1; j < n; j++)
            rsum += arr[j];
{
            printf("From (%d  %d) to (%d  %d)\n", 0, i,
                                            i+1, n-1);
            found = true;
        }
    }
 if (found == false)
        cout << "Subarrays not found" << endl;
}
 int main()
{
    int arr[] = {1, 5, 7, 2, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    findSubarrays(arr, n);
    return 0;
}
