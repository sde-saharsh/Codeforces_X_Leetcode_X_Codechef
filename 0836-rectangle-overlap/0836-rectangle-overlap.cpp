class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int yStart = max(rec1[1], rec2[1]);
        int yEnd = min(rec1[3], rec2[3]);

        int xStart = max(rec1[0], rec2[0]);
        int xEnd = min(rec1[2], rec2[2]);

        return xStart < xEnd && yStart < yEnd;
        // int x1r1 = rec1[0];
        // int y1r1 = rec1[1];
        // int x2r1 = rec1[2];
        // int y2r1 = rec1[3];

        // int x1r2 = rec2[0];
        // int y1r2 = rec2[1];
        // int x2r2 = rec2[2];
        // int y2r2 = rec2[3];


        // if((x1r2 <= x2r1) && (x1r2 >= x1r1)){
        //     if((y1r2 <= y2r1) && (y1r2 >= y1r1)) return true;
        //     if((y2r2 <= y2r1) && (y2r2 >= y1r1)) return true;
        // }
        // if((x2r2 <= x2r1) && (x2r2 >= x1r1)){
        //     if((y2r2 <= y2r1) && (y2r2 >= y1r1)) return true;
        //     if((y1r2 <= y2r1) && (y1r2 >= y1r1)) return true;
        // }

        // if(y1r2 <= y1r1 && y2r1 <= y2r2){
        //     if(x1r2 <= x1r1 && x2r1 <= x2r2) return
        // }
        


        
        // return false;
    }
};