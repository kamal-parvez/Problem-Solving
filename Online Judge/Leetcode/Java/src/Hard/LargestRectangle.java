package Hard;

//Leetcode Problem No 84
//Largest Rectangle in Histogram

import java.util.Stack;

public class LargestRectangle {

    public LargestRectangle() {
    }

    public int largestRectangleArea(int[] heights) {

        int length = heights.length;
        int ara[] = new int[length + 1];
        for(int i=0; i<length; i++){
            ara[i] = heights[i];
        }
        ara[length] = 0;

        int maxArea = -1;
        Stack<Integer> stack = new Stack<>();
        int index = 0;

        while(index <= length){

            if(stack.empty() || ara[index] > ara[stack.peek()]){
                stack.push(index);
                index++;
            }
            else{
                int top = stack.peek();
                stack.pop();

                if(stack.empty()){
                    maxArea = Math.max(maxArea, ara[top] * index);
                }
                else {
                    maxArea = Math.max(maxArea, ara[top] * (index - 1 - stack.peek()));
                }
            }
        }
        return  maxArea;
    }
}
