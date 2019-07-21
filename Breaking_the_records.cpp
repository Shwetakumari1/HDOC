vector<int> breakingRecords(vector<int> scores) {
    int highest_score=scores[0];
    int lowest_score=scores[0];;
    int counta=0;
    int countb=0;
    vector<int>record(2);
    for(int i=1;i<scores.size();i++){
        if(highest_score<scores[i]){
            highest_score=scores[i];
            counta=counta+1;
            record[0]=counta;
        }
        else if(lowest_score>scores[i]){
            lowest_score=scores[i];
            countb=countb+1;
            record[1]=countb; 
        }

    }

    return record;

}
