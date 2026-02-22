/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int *arr = (int*)malloc(sizeof(int) * (nums1Size < nums2Size ? nums1Size : nums2Size));
    int count = 0;

    for (int i = 0; i < nums1Size; i++) {
        for (int j = 0; j < nums2Size; j++) {
            if (nums1[i] == nums2[j]) {
                arr[count++] = nums1[i];

                // Prevent using the same nums2 element again
                nums2[j] = -1;  
                break;
            }
        }
    }

    *returnSize = count;
    return arr;
}
