/*************************************************************************
	> File Name: C.cpp
	> Author: kwh 
	> Mail: 
	> Created Time: 2019年05月26日 星期日 15时06分39秒
 ************************************************************************/

/*先把下面的定值算出来*/
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

#define PI acos(-1.0)

double rx, ry, r, x, y;
double s1, s2, s3, s4, du;

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> rx >> ry >> r >> x >> y;
        double s1 = PI * r / 2;
        double length = 0; //0.0
        if ((x <= rx - r) || (x >= rx + r)) {
            if (x <= rx - r) { //左边
                length += sqrt((x -(rx - r)) * (x - (rx - r)) + (y - ry) * (y - ry));
                length += s1;
                //length += 0.5 * PI * r;
            } else { //右边
                length += sqrt((x -(rx + r)) * (x - (rx + r)) + (y - ry) * (y - ry));
                length += s1;
                //length += 0.5 * PI * r;
            }
        } else {
            double d = sqrt((x - rx) * (x - rx) + (y - ry) * (y - ry));
            double du;
            if (x != rx) {
                double cosr = abs(x - rx) / d;
                du = acos(cosr) - acos(r / d);
            } else { //垂直x轴
                du = 0.5 * PI - acos(r / d);
            }
           // du += 0.5 * PI; // 二分之派
            length += du * r;
            length += sqrt(d * d - r * r);
            length += s1;
        }
        printf ("%.4f\n", length);
        //cout << length << endl;
    }
    return 0;
}

/*求整个的角度*/
/*#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

typedef long long ll;
const double PI = acos(-1.0);
double rx, ry, r, x, y;

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> rx >> ry >> r >> x >> y;
        double length = 0; //0.0
        if ((x <= rx - r) || (x >= rx + r)) {
            if (x <= rx - r) {
                length += sqrt((x -(rx - r)) * (x - (rx - r)) + (y - ry) * (y - ry));
                length += 0.5 * PI * r;
            } else {
                length += sqrt((x -(rx + r)) * (x - (rx + r)) + (y - ry) * (y - ry));
                length += 0.5 * PI * r;
            }
        } else {
            double d = sqrt((x - rx) * (x - rx) + (y - ry) * (y - ry));
            double du;
            if (x != rx) {
                double cosr = abs(x - rx) / d;
                du = acos(cosr) - acos(r / d);
            } else { //垂直x轴
                du = 0.5 * PI - acos(r / d);
            }
            du += 0.5 * PI; // 二分之派
            length += du * r;
            length += sqrt(d * d - r * r);
        }
        printf ("%.4f\n", length);
        //cout << length << endl;
    }
    return 0;
}
*/
