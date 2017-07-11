class List
{
	void Test()
{
    {
        LinkedList<int> input;
        LinkedList<int> result;
        input.PushBack(1);
        MergeXwaySortedLL(input, 1, result);
        LinkedListElement<int> *head = *(result.Release());
        LinkedListElement<int> *tail = *(result.ReleaseTail());
        assert(head->data == 1);
        assert(tail->data == 1);
    }
    {
        LinkedList<int> input;
        LinkedList<int> result;
        const std::array<int, 16> data = { 0, 4, 8, 12, 1, 5, 9, 13, 2, 6, 10, 14, 3, 7, 11, 15 };
        for (auto iter = data.begin(); iter != data.end(); ++iter) {
            input.PushBack(*iter);
        }
 MergeXwaySortedLL(input, 4, result);
        LinkedListElement<int> *curNode = *(result.Release());
        unsigned int count = 0;
        while (curNode) {
            assert(curNode->data == count);
            curNode = curNode->next;
            ++count;
        }
 assert(count == 16);
    }
}
void array()
{
    {
        const std::vector<int> data = { 1, 3, 2, 4 };
        std::vector<int> result = MergeXwaySortedArr(data, 5);
        assert(result.empty() == true);
        result = MergeXwaySortedArr(data, 2);
        assert(result == std::vector<int>({ 1, 2, 3, 4 }));
    }
    {
        const std::vector<int> data = { 0, 4, 8, 12, 1, 5, 9, 13, 2, 6, 10, 14, 3, 7, 11, 15 };
        std::vector<int> result = MergeXwaySortedArr(data, 17);
        assert(result.empty() == true);
        result = MergeXwaySortedArr(data, 4);
        assert(result == std::vector<int>({0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}));
    }
    Lists l;
l.Test();
l.array();
}
}
