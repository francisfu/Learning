package DataStructure.List;

import java.util.*;

/**
 * Created by npufr on 2017/8/5.
 */
public class ListPerformanceTest {

    public static final Integer LIST_SIZE = 800000;
    public static void main(String[] args){
        List<Integer> linkedList = new LinkedList<>();
        List<Integer> arrayList = new ArrayList<>();
        addList(linkedList, LIST_SIZE);
        addList(arrayList, LIST_SIZE);
        long linkedListStart = new Date().getTime();
        removeList(linkedList);
        long linkedListEnd = new Date().getTime();
        System.out.println("Remove LinkedList tooks " + (linkedListEnd - linkedListStart) + " millseconds");
        long arrayListStart = new Date().getTime();
        removeList(arrayList);
        long arrayListEnd = new Date().getTime();
        System.out.println("Remove arrayList tooks " + (arrayListEnd - arrayListStart) + " millseconds");

    }

    public static void addList(List<Integer> list, int n){
        for(int i = 0 ;i < n; i++){
            list.add(i);
        }
    }

    public static void removeList(List<Integer> list){
        Iterator<Integer> it = list.iterator();

        while(it.hasNext()){
            if(it.next() % 2 == 0)
                it.remove();
        }
    }
}
