class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();

        if(k==n){
            return accumulate(cardPoints.begin(), cardPoints.end(),0);
        }
        int totalSum = accumulate(cardPoints.begin(), cardPoints.end(), 0);

        int windowSize = n-k;
        int windowSum = 0;
        for(int i=0;i<windowSize;i++){
            windowSum+=cardPoints[i];
        }
        int minWindowSum = windowSum;
        for(int i= windowSize; i<n; i++){
            windowSum += cardPoints[i];
            windowSum -= cardPoints[i - windowSize];
            minWindowSum = min(minWindowSum, windowSum);
        }
        return totalSum - minWindowSum; 

    }
};