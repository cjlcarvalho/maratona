#include <bits/stdc++.h>

using namespace std;

struct Point
{
    int x, y;
    
    Point(int mx, int my) : x(mx), y(my) {}
    
    bool isOpposite(const Point &other) {
        return x != other.x && y != other.y;
    }
    
    bool sameX(const Point &other) {
        return x == other.x && y != other.y;
    }
    
    bool sameY(const Point &other) {
        return x != other.x && y == other.y;
    }
};

int main()
{
    int n, a, b;
    vector<Point> vp;
    
    cin >> n;
    
    if (n == 1) {
        cin >> a >> b;
        cout << -1 << endl;
    }
    else if (n == 2) {
        for (int i = 0; i < n; i++) {
            cin >> a >> b;
            vp.push_back(Point(a, b));
        }
        
        if (vp[0].isOpposite(vp[1])) {
            int area = abs(vp[0].x - vp[1].x) * abs(vp[0].y - vp[1].y);
            
            cout << area << endl;
        }
        else
            cout << -1 << endl;
    }
    else if (n == 3) {
        for (int i = 0; i < n; i++) {
            cin >> a >> b;
            vp.push_back(Point(a, b));
        }
        
        bool find = false;
        
        for (int i = 0; i < n && !find; i++) {
            for (int j = 0; j < n && !find; j++) {
                for (int k = 0; k < n && !find; k++) {
                    if (vp[i].isOpposite(vp[k]) && vp[i].sameX(vp[j]) && vp[j].sameY(vp[k])) {
                        int diffX = abs(vp[i].y - vp[j].y);
                        int diffY = abs(vp[j].x - vp[k].x);
                        
                        find = true;
                        
                        cout << diffX * diffY << endl;
                    }
                }
            }
        }
        
        if (!find) cout << -1 << endl;
    }
    else if (n == 4) {        
        for (int i = 0; i < n; i++) {
            cin >> a >> b;
            vp.push_back({a, b});
        }
        
        bool find = false;
        
        for (int i = 0; i < n && !find; i++) {
            for (int j = 0; j < n && !find; j++) {
                for (int k = 0; k < n && !find; k++) {
                    for (int l = 0; l < n && !find; l++) { 
                        if (vp[i].sameX(vp[j]) && vp[i].sameY(vp[k]) && vp[j].sameY(vp[l]) && vp[k].sameX(vp[l]) && vp[j].isOpposite(vp[k]) && vp[i].isOpposite(vp[l])) {
                            int diffX1 = abs(vp[i].y - vp[j].y);
                            int diffX2 = abs(vp[k].y - vp[l].y);
                            
                            if (diffX1 != diffX2) continue;
                            
                            int diffY1 = abs(vp[i].x - vp[k].x);
                            int diffY2 = abs(vp[j].x - vp[l].x);
                            
                            if (diffY1 != diffY2) continue;
                            
                            find = true;
                            
                            int area = diffX1 * diffY2;
                            
                            cout << area << endl;
                            
                        }
                    }
                }
            }
        }
        
        if (!find) cout << -1 << endl;  
    
    }
    
    return 0;
}
