package Easy;

// Leetcode - 228. Summary Ranges

import java.util.ArrayList;
import java.util.List;

public class SummaryRanges {
    long MIN = 100000000000L;

    public List<String> summaryRanges(int[] nums) {
        long start = MIN, end = MIN;
        List<String> list = new ArrayList<>();

        for(int num : nums){
            if(start == MIN){
                start = num;
            }

            else if(start != MIN && end == MIN && num == start + 1){
                end = num;
            }
            else if(start != MIN && end == MIN && num != start + 1){
                String element = "" + start;
                list.add(element);
                start = num;
            }

            else if(start != MIN && end != MIN && num == end + 1){
                end = num;
            }
            else if(start != MIN && end != MIN && num != start + 1){
                String element = "" + start + "->" + end;
                list.add(element);
                start = num;
                end = MIN;
            }
        }

        if(start != MIN && end == MIN){
            String element = "" + start;
            list.add(element);
        }
        if(start != MIN && end != MIN){
            String element = "" + start + "->" + end;
            list.add(element);
        }

        return list;
    }
}

