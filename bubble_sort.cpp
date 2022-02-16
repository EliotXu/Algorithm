class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     * 将给定数组排序
     * @param arr int整型vector 待排序的数组
     * @return int整型vector
     */
    vector<int> MySort(vector<int>& arr) {
        // write code here
        int length = arr.size();
        
        if (length < 2) {
            return arr;
        }
        
        for (int i = length - 1; i > 0; i--) {
            for (int j = 0; j < i; j++) {
                int k = j + 1;
                if (arr[j] > arr[k]) {
                    int tmp = arr[k];
                    arr[k] = arr[j];
                    arr[j] = tmp;
                }
            }
        }
        
        return arr;
    }
};