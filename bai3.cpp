#include <stdio.h>

#include <iostream>

int main() {
  int m;
  printf("nhap vao thang", m);
  scanf("%d", & m);
  int d;
  printf("nhap vao ngay", d);
  scanf("%d", & d);
  if (m <= 12 && d <= 31) {
    if (m >= 2) {
      int D[12] = {
        31,
        59,
        90,
        120,
        151,
        181,
        212,
        243,
        273,
        304,
        334,
        365
      };
      int ngay = D[m - 2] + d;
      if (ngay % 7 == 0) {
        printf("ung voi chu nhat, la ngay,%d", ngay);
      } else if (ngay % 7 == 1) {
        printf("ung voi t2, la ngay,%d", ngay);
      } else if (ngay % 7 == 2) {
        printf("ung voi t3, la ngay,%d", ngay);
      } else if (ngay % 7 == 3) {
        printf("ung voi t4, la ngay,%d", ngay);
      } else if (ngay % 7 == 4) {
        printf("ung voi t5, la ngay,%d", ngay);
      } else if (ngay % 7 == 5) {
        printf("ung voi t6, la ngay,%d", ngay);
      } else if (ngay % 7 == 6) {
        printf("ung voi t7, la ngay,%d", ngay);
      }
    } else if (m == 1) {
      int ngay = d;
      if (ngay % 7 == 0) {
        printf("ung voi t3, la ngay,%d", ngay);
      } else if (ngay % 7 == 1) {
        printf("ung voi t2, la ngay,%d", ngay);
      } else if (ngay % 7 == 2) {
        printf("ung voi t3, la ngay,%d", ngay);
      } else if (ngay % 7 == 3) {
        printf("ung voi t4, la ngay,%d", ngay);
      } else if (ngay % 7 == 4) {
        printf("ung voi t5, la ngay,%d", ngay);
      } else if (ngay % 7 == 5) {
        printf("ung voi t6, la ngay,%d", ngay);
      } else if (ngay % 7 == 6) {
        printf("ung voi t7, la ngay,%d", ngay);
      }
    }
  }
}
