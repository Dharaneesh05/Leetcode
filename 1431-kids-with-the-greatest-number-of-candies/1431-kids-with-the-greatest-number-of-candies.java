class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        int max = 0;
        for(int i=0;i<candies.length;i++){
            if(candies[i]>max){
                max=candies[i];
            }
        }
        ArrayList<Boolean> ext = new ArrayList<>();
        for(int i=0;i<candies.length;i++){
            ext.add(candies[i]+extraCandies>=max);
        }
        return ext;
    }
}