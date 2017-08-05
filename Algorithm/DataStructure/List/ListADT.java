package DataStructure.List;

import java.util.List;

/**
 * Created by npufr on 2017/8/5.
 */
public interface ListADT {

    void printList();
    void makeEmpty();
    ListNode find(ListNode item);
    void insert(ListNode item, int index);
    void remove(int index);
    List get();
}
