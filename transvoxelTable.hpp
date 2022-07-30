#ifndef TRANSVOXEL_TABLE_H_INCLUDED
#define TRANSVOXEL_TABLE_H_INCLUDED


// 6--(10)--7--(11)--8       B------(15)-----C
// |        |        |       |               |
//(7)      (8)      (9)      |               |
// |        |        |       |               |
// 3--(05)--4--(06)--5      (13)            (14)
// |        |        |       |               |
//(2)      (3)      (4)      |               |
// |        |        |       |               |
// 0--(00)--1--(01)--2       9------(12)-----A

const int vertexA[16] = {0,1,0,1,2,3,4,3,4,5,6,7,9,9,10,11};   //
const int vertexB[16] = {1,2,3,4,5,4,5,6,7,8,7,8,10,11,12,12}; // use estas tabelas para obter os dois vertices entre cada ponto

const char TransvoxelTable[8432] =
{ -1,
 0,  2, 12,  2, 13, 12, -1,
 0,  1,  3, -1,
13,  3,  2, 13, 12,  3, 12,  1,  3, -1,
 4,  1, 14,  1, 12, 14, -1,
 4,  1, 14,  1,  0, 14,  0, 13, 14,  0,  2, 13, -1,
 4,  3, 14,  3, 12, 14,  3,  0, 12, -1,
 4,  3, 14,  3, 13, 14,  3,  2, 13, -1,
 7,  2,  5, -1,
 0,  5, 12,  5, 13, 12,  5,  7, 13, -1,
 0,  1,  3,  7,  2,  5, -1,
 1,  3, 12,  3,  5, 12,  5, 13, 12,  5,  7, 13, -1,
 4,  1, 14,  1, 12, 14,  7,  2,  5, -1,
13,  5,  7, 13,  0,  5, 13, 14,  0, 14,  1,  0, 14,  4,  1, -1,
 4,  3, 14,  3, 12, 14,  3,  0, 12,  7,  2,  5, -1,
13,  5,  7, 13,  3,  5, 13, 14,  3, 14,  4,  3, -1,
 3,  6,  8,  3,  8,  5, -1,
 0,  2, 12,  2, 13, 12,  5,  3,  6,  5,  6,  8, -1,
 1,  6,  5,  1,  5,  0,  6,  8,  5, -1,
13,  5,  2, 13,  8,  5, 13, 12,  8, 12,  6,  8, 12,  1,  6, -1,
 4,  1, 14,  1, 12, 14,  3,  6,  8,  3,  8,  5, -1,
 4,  1, 14,  1,  0, 14,  0, 13, 14,  0,  2, 13,  3,  6,  8,  3,  8,  5, -1,
 4,  6, 14,  6,  8, 14,  8, 12, 14,  8,  5, 12,  5,  0, 12, -1,
 4,  6, 14,  6,  8, 14,  8, 13, 14,  8,  5, 13,  5,  2, 13, -1,
 2,  3,  8,  2,  8,  7,  3,  6,  8, -1,
 0,  3, 12,  3,  6, 12,  6, 13, 12,  6,  8, 13,  8,  7, 13, -1,
 2,  0,  6,  0,  1,  6,  2,  6,  8,  2,  8,  7, -1,
 1,  6, 12,  6,  8, 12,  8, 13, 12,  8,  7, 13, -1,
 4,  1, 14,  1, 12, 14,  2,  3,  8,  2,  8,  7,  3,  6,  8, -1,
13,  8,  7, 13, 14,  8, 14,  6,  8, 14,  3,  6, 14,  0,  3, 14,  1,  0, 14,  4,  1, -1,
 4,  6, 14,  6,  8, 14,  8,  7, 14,  7, 12, 14,  7,  2, 12,  2,  0, 12, -1,
 4,  6, 14,  6,  8, 14,  8, 13, 14,  8,  7, 13, -1,
 4,  9,  6, -1,
13,  0,  2, 13, 12,  0,  6,  4,  9, -1,
 4,  9,  6,  0,  1,  3, -1,
13,  3,  2, 13, 12,  3, 12,  1,  3,  6,  4,  9, -1,
12,  6,  1, 12, 14,  6, 14,  9,  6, -1,
 9,  6, 14,  6,  1, 14,  1, 13, 14,  1,  0, 13,  0,  2, 13, -1,
 9,  6, 14,  6,  3, 14,  3, 12, 14,  3,  0, 12, -1,
 9,  6, 14,  6,  3, 14,  3, 13, 14,  3,  2, 13, -1,
 7,  2,  5,  4,  9,  6, -1,
 0,  5, 12,  5, 13, 12,  5,  7, 13,  4,  9,  6, -1,
 4,  9,  6,  0,  1,  3,  7,  2,  5, -1,
13,  5,  7, 13,  3,  5, 13, 12,  3, 12,  1,  3,  6,  4,  9, -1,
12,  6,  1, 12, 14,  6, 14,  9,  6,  5,  7,  2, -1,
 9,  6, 14,  6,  1, 14,  1,  0, 14,  0, 13, 14,  0,  5, 13,  5,  7, 13, -1,
 9,  6, 14,  6,  3, 14,  3, 12, 14,  3,  0, 12,  7,  2,  5, -1,
13,  5,  7, 13,  3,  5, 13, 14,  3, 14,  6,  3, 14,  9,  6, -1,
 9,  8,  3,  9,  3,  4,  8,  5,  3, -1,
13,  0,  2, 13, 12,  0,  8,  3,  4,  9,  8,  4,  8,  5,  3, -1,
 1,  4,  8,  4,  9,  8,  1,  8,  5,  1,  5,  0, -1,
13,  5,  2, 13,  8,  5, 13,  9,  8, 13, 12,  9, 12,  4,  9, 12,  1,  4, -1,
12,  3,  1, 12,  5,  3, 12, 14,  5, 14,  8,  5, 14,  9,  8, -1,
 9,  8, 14,  8, 13, 14,  8,  5, 13,  5,  3, 13,  3,  1, 13,  1,  0, 13,  0,  2, 13, -1,
 9,  8, 14,  8,  5, 14,  5, 12, 14,  5,  0, 12, -1,
13,  5,  2, 13,  8,  5, 13, 14,  8, 14,  9,  8, -1,
 2,  3,  8,  2,  8,  7,  3,  9,  8,  3,  4,  9, -1,
 0,  3, 12,  3,  4, 12,  4,  9, 12,  9, 13, 12,  9,  8, 13,  8,  7, 13, -1,
 9,  8,  4,  8,  2,  4,  8,  7,  2,  2,  0,  4,  0,  1,  4, -1,
 1,  4, 12,  4,  9, 12,  9, 13, 12,  9,  8, 13,  8,  7, 13, -1,
12,  3,  1, 12,  2,  3, 12,  7,  2, 12, 14,  7, 14,  8,  7, 14,  9,  8, -1,
13,  8,  7, 13, 14,  8, 14,  9,  8,  3,  1,  0, -1,
12,  2,  0, 12,  7,  2, 12, 14,  7, 14,  8,  7, 14,  9,  8, -1,
13,  8,  7, 13, 14,  8, 14,  9,  8, -1,
 7, 10, 13, 10, 15, 13, -1,
 0,  2, 12,  2,  7, 12,  7, 15, 12,  7, 10, 15, -1,
15,  7, 10, 15, 13,  7,  3,  0,  1, -1,
 1,  3, 12,  3,  2, 12,  2, 15, 12,  2,  7, 15,  7, 10, 15, -1,
 4,  1, 14,  1, 12, 14,  7, 10, 13, 10, 15, 13, -1,
 4,  1, 14,  1,  0, 14,  0,  2, 14,  2, 15, 14,  2,  7, 15,  7, 10, 15, -1,
 4,  3, 14,  3, 12, 14,  3,  0, 12,  7, 10, 13, 10, 15, 13, -1,
15,  7, 10, 15,  2,  7, 15, 14,  2, 14,  3,  2, 14,  4,  3, -1,
15,  5, 10, 15, 13,  5, 13,  2,  5, -1,
 0,  5, 12,  5, 15, 12,  5, 10, 15, -1,
15,  5, 10, 15, 13,  5, 13,  2,  5,  3,  0,  1, -1,
 1,  3, 12,  3,  5, 12,  5, 15, 12,  5, 10, 15, -1,
15,  5, 10, 15, 13,  5, 13,  2,  5, 12,  4,  1, 12, 14,  4, -1,
 4,  1, 14,  1,  0, 14,  0, 15, 14,  0,  5, 15,  5, 10, 15, -1,
 4,  3, 14,  3, 12, 14,  3,  0, 12,  2,  5, 13,  5, 15, 13,  5, 10, 15, -1,
15,  5, 10, 15,  3,  5, 15, 14,  3, 14,  4,  3, -1,
 7, 10, 13, 10, 15, 13,  8,  5,  3,  8,  3,  6, -1,
 0,  2, 12,  2,  7, 12,  7, 15, 12,  7, 10, 15,  5,  3,  6,  5,  6,  8, -1,
15,  7, 10, 15, 13,  7,  6,  5,  0,  1,  6,  0,  6,  8,  5, -1,
 1,  6, 12,  6, 15, 12,  6,  8, 15,  8,  5, 15,  5,  2, 15,  2,  7, 15,  7, 10, 15, -1,
 4,  1, 14,  1, 12, 14,  7, 10, 13, 10, 15, 13,  3,  6,  8,  3,  8,  5, -1,
 4,  1, 14,  1,  0, 14,  0,  2, 14,  2, 15, 14,  2,  7, 15,  7, 10, 15,  5,  3,  6,  5,  6,  8, -1,
 4,  6, 14,  6,  8, 14,  8, 12, 14,  8,  5, 12,  5,  0, 12,  7, 10, 13, 10, 15, 13, -1,
 8,  7, 10,  8,  5,  7,  5,  2,  7, 15,  8, 10, 15, 14,  8, 14,  6,  8, 14,  4,  6, -1,
15,  8, 10, 15,  6,  8, 15, 13,  6, 13,  3,  6, 13,  2,  3, -1,
 0,  3, 12,  3,  6, 12,  6, 15, 12,  6,  8, 15,  8, 10, 15, -1,
15,  8, 10, 15,  6,  8, 15,  1,  6, 15, 13,  1, 13,  0,  1, 13,  2,  0, -1,
15,  8, 10, 15,  6,  8, 15, 12,  6, 12,  1,  6, -1,
15,  8, 10, 15,  6,  8, 15, 13,  6, 13,  3,  6, 13,  2,  3, 12,  4,  1, 12, 14,  4, -1,
 4,  1,  6,  1,  3,  6,  1,  0,  3,  4,  6, 14,  6, 15, 14,  6,  8, 15,  8, 10, 15, -1,
 4,  6,  0,  6,  2,  0,  6,  8,  2,  8, 10,  2, 10, 15, 13, 10, 13,  2,  4, 12, 14,  4,  0, 12, -1,
15,  8, 10, 15,  6,  8, 15, 14,  6, 14,  4,  6, -1,
 7, 10, 13, 10, 15, 13,  4,  9,  6, -1,
 0,  2, 12,  2,  7, 12,  7, 15, 12,  7, 10, 15,  4,  9,  6, -1,
 7, 10, 13, 10, 15, 13,  4,  9,  6,  0,  1,  3, -1,
 1,  3, 12,  3,  2, 12,  2, 15, 12,  2,  7, 15,  7, 10, 15,  4,  9,  6, -1,
12,  6,  1, 12, 14,  6, 14,  9,  6, 15,  7, 10, 15, 13,  7, -1,
15,  7, 10, 15,  2,  7, 15,  0,  2, 15, 14,  0, 14,  1,  0, 14,  6,  1, 14,  9,  6, -1,
 9,  6, 14,  6,  3, 14,  3, 12, 14,  3,  0, 12,  7, 10, 13, 10, 15, 13, -1,
 9,  6, 14,  6,  3, 14,  3,  2, 14,  2, 15, 14,  2,  7, 15,  7, 10, 15, -1,
15,  5, 10, 15, 13,  5, 13,  2,  5,  6,  4,  9, -1,
 0,  5, 12,  5, 15, 12,  5, 10, 15,  4,  9,  6, -1,
15,  5, 10, 15, 13,  5, 13,  2,  5,  3,  0,  1,  6,  4,  9, -1,
 1,  3, 12,  3,  5, 12,  5, 15, 12,  5, 10, 15,  4,  9,  6, -1,
12,  6,  1, 12, 14,  6, 14,  9,  6, 15,  5, 10, 15, 13,  5, 13,  2,  5, -1,
 9,  6, 14,  6,  1, 14,  1,  0, 14,  0, 15, 14,  0,  5, 15,  5, 10, 15, -1,
12,  3,  0, 12,  6,  3, 12, 14,  6, 14,  9,  6, 15,  5, 10, 15, 13,  5, 13,  2,  5, -1,
 9,  6, 14,  6,  3, 14,  3, 15, 14,  3,  5, 15,  5, 10, 15, -1,
 7, 10, 13, 10, 15, 13,  9,  8,  3,  9,  3,  4,  8,  5,  3, -1,
 0,  2, 12,  2,  7, 12,  7, 15, 12,  7, 10, 15,  9,  3,  4,  9,  8,  3,  8,  5,  3, -1,
 7, 10, 13, 10, 15, 13,  9,  8,  4,  8,  1,  4,  8,  5,  1,  5,  0,  1, -1,
 1,  4, 12,  4,  9, 12,  9, 15, 12,  9,  8, 15,  8, 10, 15,  8,  5, 10,  5,  7, 10,  5,  2,  7, -1,
12,  3,  1, 12,  5,  3, 12, 14,  5, 14,  8,  5, 14,  9,  8, 15,  7, 10, 15, 13,  7, -1,
 8,  7, 10,  8,  5,  7,  5,  2,  7,  5,  3,  2,  3,  0,  2,  3,  1,  0, 15,  8, 10, 15, 14,  8, 14,  9,  8, -1,
 9,  8, 14,  8, 12, 14,  8,  5, 12,  5,  0, 12,  7, 10, 13, 10, 15, 13, -1,
 8,  7, 10,  8,  5,  7,  5,  2,  7, 15,  8, 10, 15, 14,  8, 14,  9,  8, -1,
15,  8, 10, 15,  9,  8, 15,  4,  9, 15, 13,  4, 13,  3,  4, 13,  2,  3, -1,
15,  8, 10, 15,  9,  8, 15,  4,  9, 15, 12,  4, 12,  3,  4, 12,  0,  3, -1,
 2,  0, 13,  0,  1, 13,  1,  4, 13,  4, 15, 13,  4,  9, 15,  9,  8, 15,  8, 10, 15, -1,
15,  8, 10, 15,  9,  8, 15, 12,  9, 12,  4,  9, 12,  1,  4, -1,
 9,  3,  1,  9,  8,  3,  8,  2,  3,  8, 10,  2, 10, 13,  2, 15, 13, 10, 12, 14,  1, 14,  9,  1, -1,
 9,  8, 14,  8, 15, 14,  8, 10, 15,  1,  0,  3, -1,
 2,  8, 10,  2,  0,  8,  0,  9,  8, 12, 14,  9,  0, 12,  9, 15, 13, 10, 13,  2, 10, -1,
 9,  8, 14,  8, 15, 14,  8, 10, 15, -1,
11, 10,  8, -1,
 0,  2, 12,  2, 13, 12, 11, 10,  8, -1,
 0,  1,  3, 11, 10,  8, -1,
13,  3,  2, 13, 12,  3, 12,  1,  3,  8, 11, 10, -1,
12,  4,  1, 12, 14,  4,  8, 11, 10, -1,
 4,  1, 14,  1,  0, 14,  0, 13, 14,  0,  2, 13, 11, 10,  8, -1,
 4,  3, 14,  3, 12, 14,  3,  0, 12, 11, 10,  8, -1,
 4,  3, 14,  3, 13, 14,  3,  2, 13, 11, 10,  8, -1,
 7,  2,  5, 11, 10,  8, -1,
 0,  5, 12,  5, 13, 12,  5,  7, 13, 11, 10,  8, -1,
 0,  1,  3,  7,  2,  5, 11, 10,  8, -1,
 1,  3, 12,  3,  5, 12,  5, 13, 12,  5,  7, 13, 11, 10,  8, -1,
 4,  1, 14,  1, 12, 14,  7,  2,  5, 11, 10,  8, -1,
13,  5,  7, 13,  0,  5, 13, 14,  0, 14,  1,  0, 14,  4,  1,  8, 11, 10, -1,
 4,  3, 14,  3, 12, 14,  3,  0, 12,  7,  2,  5, 11, 10,  8, -1,
13,  5,  7, 13,  3,  5, 13, 14,  3, 14,  4,  3,  8, 11, 10, -1,
10,  5,  6, 10,  6, 11,  5,  3,  6, -1,
 0,  2, 12,  2, 13, 12, 10,  5,  6, 10,  6, 11,  5,  3,  6, -1,
10,  5,  6, 10,  6, 11,  5,  1,  6,  5,  0,  1, -1,
13,  5,  2, 13, 10,  5, 13, 11, 10, 13, 12, 11, 12,  6, 11, 12,  1,  6, -1,
12,  4,  1, 12, 14,  4,  5,  6, 11, 10,  5, 11,  5,  3,  6, -1,
 4,  1, 14,  1,  0, 14,  0, 13, 14,  0,  2, 13, 10,  6, 11, 10,  5,  6,  5,  3,  6, -1,
 4,  6, 14,  6, 11, 14, 11, 10, 14, 10, 12, 14, 10,  5, 12,  5,  0, 12, -1,
13,  5,  2, 13, 10,  5, 13, 11, 10, 13, 14, 11, 14,  6, 11, 14,  4,  6, -1,
10,  7,  3,  7,  2,  3, 10,  3,  6, 10,  6, 11, -1,
 0,  3, 12,  3,  6, 12,  6, 11, 12, 11, 13, 12, 11, 10, 13, 10,  7, 13, -1,
 1,  6,  0,  6, 10,  0,  6, 11, 10, 10,  7,  0,  7,  2,  0, -1,
13, 10,  7, 13, 11, 10, 13, 12, 11, 12,  6, 11, 12,  1,  6, -1,
 4,  1, 14,  1, 12, 14,  2,  3,  7,  3, 10,  7,  3,  6, 10,  6, 11, 10, -1,
13, 10,  7, 13, 11, 10, 13, 14, 11, 14,  6, 11, 14,  4,  6,  4,  3,  6,  4,  1,  3,  1,  0,  3, -1,
12,  2,  0, 12,  7,  2, 12, 10,  7, 12, 14, 10, 14, 11, 10, 14,  6, 11, 14,  4,  6, -1,
 4,  6, 14,  6, 11, 14, 11, 13, 14, 11, 10, 13, 10,  7, 13, -1,
11, 10,  8,  4,  9,  6, -1,
 0,  2, 12,  2, 13, 12, 11, 10,  8,  4,  9,  6, -1,
11, 10,  8,  4,  9,  6,  0,  1,  3, -1,
13,  3,  2, 13, 12,  3, 12,  1,  3,  6,  4,  9,  8, 11, 10, -1,
12,  6,  1, 12, 14,  6, 14,  9,  6,  8, 11, 10, -1,
 9,  6, 14,  6,  1, 14,  1, 13, 14,  1,  0, 13,  0,  2, 13, 11, 10,  8, -1,
12,  3,  0, 12,  6,  3, 12, 14,  6, 14,  9,  6,  8, 11, 10, -1,
 9,  6, 14,  6,  3, 14,  3, 13, 14,  3,  2, 13, 11, 10,  8, -1,
 7,  2,  5, 11, 10,  8,  4,  9,  6, -1,
 0,  5, 12,  5, 13, 12,  5,  7, 13, 11, 10,  8,  4,  9,  6, -1,
 0,  1,  3,  7,  2,  5, 11, 10,  8,  4,  9,  6, -1,
 1,  3, 12,  3,  5, 12,  5, 13, 12,  5,  7, 13, 11, 10,  8,  4,  9,  6, -1,
12,  6,  1, 12, 14,  6, 14,  9,  6,  8, 11, 10,  5,  7,  2, -1,
 9,  6, 14,  6,  1, 14,  1,  0, 14,  0, 13, 14,  0,  5, 13,  5,  7, 13, 11, 10,  8, -1,
 9,  6, 14,  6,  3, 14,  3, 12, 14,  3,  0, 12,  7,  2,  5, 11, 10,  8, -1,
 9,  6, 14,  6,  3, 14,  3, 13, 14,  3,  5, 13,  5,  7, 13, 11, 10,  8, -1,
 9, 11,  5, 11, 10,  5,  9,  5,  3,  9,  3,  4, -1,
 0,  2, 12,  2, 13, 12, 10,  5, 11,  5,  9, 11,  5,  3,  9,  3,  4,  9, -1,
10,  5, 11,  5,  1, 11,  5,  0,  1,  1,  4, 11,  4,  9, 11, -1,
 1,  4, 12,  4,  9, 12,  9, 11, 12, 11, 13, 12, 11, 10, 13, 10,  5, 13,  5,  2, 13, -1,
12,  3,  1, 12,  5,  3, 12, 10,  5, 12, 14, 10, 14, 11, 10, 14,  9, 11, -1,
 9, 11, 14, 11, 10, 14, 10, 13, 14, 10,  5, 13,  5,  2, 13,  5,  3,  2,  3,  0,  2,  3,  1,  0, -1,
 9, 11, 14, 11, 10, 14, 10, 12, 14, 10,  5, 12,  5,  0, 12, -1,
13,  5,  2, 13, 10,  5, 13, 14, 10, 14, 11, 10, 14,  9, 11, -1,
 2,  3,  7,  3,  9,  7,  3,  4,  9,  9, 11,  7, 11, 10,  7, -1,
13, 10,  7, 13, 11, 10, 13,  9, 11, 13, 12,  9, 12,  4,  9, 12,  3,  4, 12,  0,  3, -1,
 2, 10,  7,  2,  0, 10,  0, 11, 10,  0,  1, 11,  1,  4, 11,  4,  9, 11, -1,
13, 10,  7, 13, 11, 10, 13,  9, 11, 13, 12,  9, 12,  4,  9, 12,  1,  4, -1,
 9, 11, 14, 11, 10, 14, 10,  7, 14,  7, 12, 14,  7,  2, 12,  2,  3, 12,  3,  1, 12, -1,
13, 10,  7, 13, 11, 10, 13, 14, 11, 14,  9, 11,  3,  1,  0, -1,
12,  2,  0, 12,  7,  2, 12, 10,  7, 12, 14, 10, 14, 11, 10, 14,  9, 11, -1,
13, 10,  7, 13, 11, 10, 13, 14, 11, 14,  9, 11, -1,
 7,  8, 13,  8, 15, 13,  8, 11, 15, -1,
15,  8, 11, 15,  7,  8, 15, 12,  7, 12,  2,  7, 12,  0,  2, -1,
 7,  8, 13,  8, 15, 13,  8, 11, 15,  0,  1,  3, -1,
 1,  3, 12,  3,  2, 12,  2,  7, 12,  7, 15, 12,  7,  8, 15,  8, 11, 15, -1,
 7,  8, 13,  8, 15, 13,  8, 11, 15,  4,  1, 14,  1, 12, 14, -1,
 4,  1, 14,  1,  0, 14,  0,  2, 14,  2, 15, 14,  2,  7, 15,  7,  8, 15,  8, 11, 15, -1,
 4,  3, 14,  3, 12, 14,  3,  0, 12,  7,  8, 13,  8, 15, 13,  8, 11, 15, -1,
15,  8, 11, 15,  7,  8, 15,  2,  7, 15, 14,  2, 14,  3,  2, 14,  4,  3, -1,
 2,  5, 13,  5,  8, 13,  8, 15, 13,  8, 11, 15, -1,
15,  8, 11, 15,  5,  8, 15, 12,  5, 12,  0,  5, -1,
15,  8, 11, 15,  5,  8, 15, 13,  5, 13,  2,  5,  3,  0,  1, -1,
15,  8, 11, 15,  5,  8, 15, 12,  5, 12,  3,  5, 12,  1,  3, -1,
 2,  5, 13,  5,  8, 13,  8, 15, 13,  8, 11, 15,  4,  1, 14,  1, 12, 14, -1,
15,  8, 11, 15,  5,  8, 15,  0,  5, 15, 14,  0, 14,  1,  0, 14,  4,  1, -1,
 2,  5, 13,  5,  8, 13,  8, 15, 13,  8, 11, 15,  4,  3, 14,  3, 12, 14,  3,  0, 12, -1,
15,  8, 11, 15,  5,  8, 15, 14,  5, 14,  3,  5, 14,  4,  3, -1,
 7,  5, 13,  5,  3, 13,  3, 15, 13,  3,  6, 15,  6, 11, 15, -1,
15,  6, 11, 15, 12,  6, 12,  3,  6, 12,  5,  3, 12,  7,  5, 12,  2,  7, 12,  0,  2, -1,
 7,  5, 13,  5,  0, 13,  0,  1, 13,  1, 15, 13,  1,  6, 15,  6, 11, 15, -1,
15,  6, 11, 15, 12,  6, 12,  1,  6,  5,  2,  7, -1,
 7,  5, 13,  5,  3, 13,  3, 15, 13,  3,  6, 15,  6, 11, 15,  4,  1, 14,  1, 12, 14, -1,
 4,  1,  6,  1,  3,  6,  1,  0,  3,  0,  5,  3,  0,  2,  5,  2,  7,  5,  4,  6, 14,  6, 15, 14,  6, 11, 15, -1,
 7,  5, 11,  5,  6, 11,  5,  0,  6,  0,  4,  6,  0, 12,  4,  4, 12, 14,  7, 15, 13,  7, 11, 15, -1,
15,  6, 11, 15, 14,  6, 14,  4,  6,  5,  2,  7, -1,
 2,  3, 13,  3,  6, 13,  6, 15, 13,  6, 11, 15, -1,
 0,  3, 12,  3,  6, 12,  6, 15, 12,  6, 11, 15, -1,
 2,  0, 13,  0,  1, 13,  1, 15, 13,  1,  6, 15,  6, 11, 15, -1,
15,  6, 11, 15, 12,  6, 12,  1,  6, -1,
 2,  3, 13,  3, 15, 13,  3,  6, 15,  6, 11, 15,  4,  1, 14,  1, 12, 14, -1,
 4,  1,  6,  1,  3,  6,  1,  0,  3,  4,  6, 14,  6, 15, 14,  6, 11, 15, -1,
 4,  6,  0,  6,  2,  0,  6, 11,  2, 11, 15, 13, 11, 13,  2,  4, 12, 14,  4,  0, 12, -1,
15,  6, 11, 15, 14,  6, 14,  4,  6, -1,
 7,  8, 13,  8, 15, 13,  8, 11, 15,  4,  9,  6, -1,
15,  8, 11, 15,  7,  8, 15, 12,  7, 12,  2,  7, 12,  0,  2,  6,  4,  9, -1,
 7,  8, 13,  8, 15, 13,  8, 11, 15,  4,  9,  6,  0,  1,  3, -1,
 1,  3, 12,  3,  2, 12,  2,  7, 12,  7, 15, 12,  7,  8, 15,  8, 11, 15,  4,  9,  6, -1,
 7,  8, 13,  8, 15, 13,  8, 11, 15,  9,  6, 14,  6, 12, 14,  6,  1, 12, -1,
 6,  1,  0,  6,  0,  2,  6,  2,  8,  2,  7,  8,  9,  6, 14,  6,  8, 14,  8, 15, 14,  8, 11, 15, -1,
 9,  6, 14,  6,  3, 14,  3, 12, 14,  3,  0, 12,  7,  8, 13,  8, 15, 13,  8, 11, 15, -1,
 2,  7,  8,  3,  2,  8,  6,  3,  8, 15,  8, 11, 15,  6,  8, 15, 14,  6, 14,  9,  6, -1,
 2,  5, 13,  5,  8, 13,  8, 15, 13,  8, 11, 15,  4,  9,  6, -1,
15,  8, 11, 15,  5,  8, 15, 12,  5, 12,  0,  5,  6,  4,  9, -1,
 2,  5, 13,  5,  8, 13,  8, 15, 13,  8, 11, 15,  4,  9,  6,  0,  1,  3, -1,
 1,  3, 12,  3,  5, 12,  5, 15, 12,  5,  8, 15,  8, 11, 15,  4,  9,  6, -1,
15,  8, 11, 15,  5,  8, 15, 13,  5, 13,  2,  5, 12,  6,  1, 12, 14,  6, 14,  9,  6, -1,
 6,  1,  0,  6,  0,  5,  6,  5,  8,  9,  6, 14,  6,  8, 14,  8, 15, 14,  8, 11, 15, -1,
 9,  6, 14,  6,  3, 14,  3, 12, 14,  3,  0, 12,  2,  5, 13,  5, 15, 13,  5,  8, 15,  8, 11, 15, -1,
 6,  3,  8,  3,  5,  8,  9,  6, 14,  6,  8, 14,  8, 15, 14,  8, 11, 15, -1,
 7,  5, 13,  5,  3, 13,  3,  4, 13,  4, 15, 13,  4,  9, 15,  9, 11, 15, -1,
15,  9, 11, 15,  4,  9, 15, 12,  4, 12,  3,  4, 12,  0,  3,  0,  5,  3,  0,  2,  5,  2,  7,  5, -1,
15,  9, 11, 15,  4,  9, 15,  1,  4, 15, 13,  1, 13,  0,  1, 13,  5,  0, 13,  7,  5, -1,
15,  9, 11, 15,  4,  9, 15, 12,  4, 12,  1,  4,  5,  2,  7, -1,
 7,  5, 11,  5,  9, 11,  5,  3,  9,  3,  1,  9,  1, 12, 14,  1, 14,  9,  7, 15, 13,  7, 11, 15, -1,
 9, 11, 14, 11, 15, 14,  1,  0,  3,  0,  5,  3,  0,  2,  5,  2,  7,  5, -1,
 7,  5, 11,  5,  9, 11,  5,  0,  9,  0, 12, 14,  0, 14,  9,  7, 15, 13,  7, 11, 15, -1,
 9, 11, 14, 11, 15, 14,  2,  7,  5, -1,
15,  9, 11, 15,  4,  9, 15, 13,  4, 13,  3,  4, 13,  2,  3, -1,
 0,  3, 12,  3,  4, 12,  4, 15, 12,  4,  9, 15,  9, 11, 15, -1,
15,  9, 11, 15,  4,  9, 15,  1,  4, 15, 13,  1, 13,  0,  1, 13,  2,  0, -1,
15,  9, 11, 15,  4,  9, 15, 12,  4, 12,  1,  4, -1,
 9,  3,  1,  9, 11,  3, 11,  2,  3, 15, 13,  2, 11, 15,  2, 12, 14,  1, 14,  9,  1, -1,
15,  9, 11, 15, 14,  9,  3,  1,  0, -1,
 2,  0,  9,  2,  9, 11,  2, 15, 13,  2, 11, 15,  0, 12, 14,  0, 14,  9, -1,
15,  9, 11, 15, 14,  9, -1,
11,  9, 15,  9, 14, 15, -1,
 0,  2, 12,  2, 13, 12, 11,  9, 15,  9, 14, 15, -1,
11,  9, 15,  9, 14, 15,  0,  1,  3, -1,
13,  3,  2, 13, 12,  3, 12,  1,  3, 14, 11,  9, 14, 15, 11, -1,
11,  9, 15,  9,  4, 15,  4, 12, 15,  4,  1, 12, -1,
11,  9, 15,  9,  4, 15,  4,  1, 15,  1, 13, 15,  1,  0, 13,  0,  2, 13, -1,
12,  3,  0, 12,  4,  3, 12, 15,  4, 15,  9,  4, 15, 11,  9, -1,
11,  9, 15,  9,  4, 15,  4, 13, 15,  4,  3, 13,  3,  2, 13, -1,
14, 11,  9, 14, 15, 11,  5,  7,  2, -1,
 0,  5, 12,  5, 13, 12,  5,  7, 13, 11,  9, 15,  9, 14, 15, -1,
11,  9, 15,  9, 14, 15,  0,  1,  3,  7,  2,  5, -1,
 1,  3, 12,  3,  5, 12,  5, 13, 12,  5,  7, 13, 11,  9, 15,  9, 14, 15, -1,
11,  9, 15,  9,  4, 15,  4, 12, 15,  4,  1, 12,  7,  2,  5, -1,
11,  9, 15,  9,  4, 15,  4,  1, 15,  1, 13, 15,  1,  0, 13,  0,  5, 13,  5,  7, 13, -1,
12,  3,  0, 12,  4,  3, 12, 15,  4, 15,  9,  4, 15, 11,  9,  5,  7,  2, -1,
13,  5,  7, 13,  3,  5, 13,  4,  3, 13, 15,  4, 15,  9,  4, 15, 11,  9, -1,
11,  9, 15,  9, 14, 15,  6,  8,  5,  6,  5,  3, -1,
 0,  2, 12,  2, 13, 12, 11,  9, 15,  9, 14, 15,  5,  3,  6,  5,  6,  8, -1,
11,  9, 15,  9, 14, 15,  1,  6,  5,  1,  5,  0,  6,  8,  5, -1,
13,  5,  2, 13,  8,  5, 13, 12,  8, 12,  6,  8, 12,  1,  6, 14, 11,  9, 14, 15, 11, -1,
11,  9, 15,  9,  4, 15,  4, 12, 15,  4,  1, 12,  6,  8,  5,  6,  5,  3, -1,
11,  9, 15,  9,  4, 15,  4,  1, 15,  1, 13, 15,  1,  0, 13,  0,  2, 13,  3,  6,  8,  3,  8,  5, -1,
12,  5,  0, 12, 15,  5, 15,  8,  5, 15,  6,  8, 15,  4,  6, 15,  9,  4, 15, 11,  9, -1,
11,  9,  8,  9,  6,  8,  9,  4,  6, 11,  8, 15,  8, 13, 15,  8,  5, 13,  5,  2, 13, -1,
14, 11,  9, 14, 15, 11,  3,  8,  7,  2,  3,  7,  3,  6,  8, -1,
 0,  3, 12,  3,  6, 12,  6, 13, 12,  6,  8, 13,  8,  7, 13, 11,  9, 15,  9, 14, 15, -1,
11,  9, 15,  9, 14, 15,  1,  6,  0,  6,  2,  0,  6,  8,  2,  8,  7,  2, -1,
 1,  6, 12,  6, 13, 12,  6,  8, 13,  8,  7, 13, 11,  9, 15,  9, 14, 15, -1,
11,  9, 15,  9,  4, 15,  4, 12, 15,  4,  1, 12,  2,  8,  7,  2,  3,  8,  3,  6,  8, -1,
11,  9,  8,  9,  6,  8,  9,  4,  6,  4,  3,  6,  4,  1,  3,  1,  0,  3, 11,  8, 15,  8, 13, 15,  8,  7, 13, -1,
12,  2,  0, 12,  7,  2, 12, 15,  7, 15,  8,  7, 15, 11,  8, 11,  6,  8, 11,  9,  6,  9,  4,  6, -1,
11,  9,  8,  9,  6,  8,  9,  4,  6, 11,  8, 15,  8, 13, 15,  8,  7, 13, -1,
11,  6, 15,  6, 14, 15,  6,  4, 14, -1,
11,  6, 15,  6, 14, 15,  6,  4, 14,  0,  2, 12,  2, 13, 12, -1,
11,  6, 15,  6, 14, 15,  6,  4, 14,  0,  1,  3, -1,
11,  6, 15,  6, 14, 15,  6,  4, 14,  1,  3, 12,  3, 13, 12,  3,  2, 13, -1,
11,  6, 15,  6, 12, 15,  6,  1, 12, -1,
13,  0,  2, 13,  1,  0, 13, 15,  1, 15,  6,  1, 15, 11,  6, -1,
12,  3,  0, 12,  6,  3, 12, 15,  6, 15, 11,  6, -1,
13,  3,  2, 13,  6,  3, 13, 15,  6, 15, 11,  6, -1,
11,  6, 15,  6, 14, 15,  6,  4, 14,  7,  2,  5, -1,
 0,  5, 12,  5, 13, 12,  5,  7, 13, 11,  6, 15,  6, 14, 15,  6,  4, 14, -1,
11,  6, 15,  6, 14, 15,  6,  4, 14,  0,  1,  3,  7,  2,  5, -1,
 1,  3, 12,  3,  5, 12,  5, 13, 12,  5,  7, 13, 11,  6, 15,  6, 14, 15,  6,  4, 14, -1,
11,  6, 15,  6, 12, 15,  6,  1, 12,  7,  2,  5, -1,
13,  5,  7, 13,  0,  5, 13,  1,  0, 13, 15,  1, 15,  6,  1, 15, 11,  6, -1,
12,  3,  0, 12,  6,  3, 12, 15,  6, 15, 11,  6,  5,  7,  2, -1,
13,  5,  7, 13,  3,  5, 13, 15,  3, 15,  6,  3, 15, 11,  6, -1,
11,  8, 15,  8,  5, 15,  5, 14, 15,  5,  3, 14,  3,  4, 14, -1,
11,  8, 15,  8,  5, 15,  5, 14, 15,  5,  3, 14,  3,  4, 14,  0,  2, 12,  2, 13, 12, -1,
11,  8, 15,  8,  5, 15,  5,  0, 15,  0, 14, 15,  0,  1, 14,  1,  4, 14, -1,
11,  8,  4,  8,  1,  4,  8,  5,  1,  5,  2,  1,  2, 13, 12,  2, 12,  1, 11, 14, 15, 11,  4, 14, -1,
11,  8, 15,  8,  5, 15,  5, 12, 15,  5,  3, 12,  3,  1, 12, -1,
 5,  0,  2,  5,  3,  0,  3,  1,  0, 13,  5,  2, 13, 15,  5, 15,  8,  5, 15, 11,  8, -1,
11,  8, 15,  8,  5, 15,  5, 12, 15,  5,  0, 12, -1,
13,  5,  2, 13,  8,  5, 13, 15,  8, 15, 11,  8, -1,
11,  8, 15,  8,  7, 15,  7,  2, 15,  2, 14, 15,  2,  3, 14,  3,  4, 14, -1,
 0,  3,  7,  3,  8,  7,  3,  4,  8,  4, 11,  8,  4, 14, 11, 11, 14, 15,  0, 13, 12,  0,  7, 13, -1,
14,  1,  4, 14,  0,  1, 14,  2,  0, 14, 15,  2, 15,  7,  2, 15,  8,  7, 15, 11,  8, -1,
11,  8,  4,  8,  1,  4,  8,  7,  1,  7, 13, 12,  7, 12,  1, 11, 14, 15, 11,  4, 14, -1,
12,  3,  1, 12,  2,  3, 12,  7,  2, 12, 15,  7, 15,  8,  7, 15, 11,  8, -1,
13,  8,  7, 13, 15,  8, 15, 11,  8,  3,  1,  0, -1,
11,  8, 15,  8,  7, 15,  7, 12, 15,  7,  2, 12,  2,  0, 12, -1,
13,  8,  7, 13, 15,  8, 15, 11,  8, -1,
 7, 10, 13, 10, 11, 13, 11, 14, 13, 11,  9, 14, -1,
 0,  2, 12,  2,  7, 12,  7, 10, 12, 10, 14, 12, 10, 11, 14, 11,  9, 14, -1,
 7, 10, 13, 10, 11, 13, 11, 14, 13, 11,  9, 14,  0,  1,  3, -1,
14, 11,  9, 14, 10, 11, 14,  7, 10, 14, 12,  7, 12,  2,  7, 12,  3,  2, 12,  1,  3, -1,
 7, 10, 13, 10, 11, 13, 11,  9, 13,  9, 12, 13,  9,  4, 12,  4,  1, 12, -1,
 7, 10,  2, 10,  0,  2, 10, 11,  0, 11,  1,  0, 11,  4,  1, 11,  9,  4, -1,
 7, 10, 13, 10, 11, 13, 11,  9, 13,  9, 12, 13,  9,  4, 12,  4,  3, 12,  3,  0, 12, -1,
 7,  3,  2,  7,  9,  3,  9,  4,  3,  7, 11,  9,  7, 10, 11, -1,
 2,  5, 13,  5, 10, 13, 10, 14, 13, 10, 11, 14, 11,  9, 14, -1,
14, 11,  9, 14, 10, 11, 14, 12, 10, 12,  5, 10, 12,  0,  5, -1,
 2,  5, 13,  5, 10, 13, 10, 14, 13, 10, 11, 14, 11,  9, 14,  0,  1,  3, -1,
 1,  3, 12,  3,  5, 12,  5, 10, 12, 10, 14, 12, 10, 11, 14, 11,  9, 14, -1,
12,  4,  1, 12,  9,  4, 12, 11,  9, 12, 13, 11, 13, 10, 11, 13,  5, 10, 13,  2,  5, -1,
11,  5, 10, 11,  1,  5,  1,  0,  5, 11,  4,  1, 11,  9,  4, -1,
 5, 10, 11,  5, 11,  9,  5,  9,  3,  9,  4,  3,  2,  5, 13,  5,  3, 13,  3, 12, 13,  3,  0, 12, -1,
 5, 11,  9,  5, 10, 11,  3,  5,  9,  4,  3,  9, -1,
 7, 10, 13, 10, 11, 13, 11, 14, 13, 11,  9, 14,  8,  5,  3,  8,  3,  6, -1,
 0,  2, 12,  2,  7, 12,  7, 10, 12, 10, 14, 12, 10, 11, 14, 11,  9, 14,  8,  5,  3,  8,  3,  6, -1,
 7, 10, 13, 10, 11, 13, 11, 14, 13, 11,  9, 14,  1,  5,  0,  1,  6,  5,  6,  8,  5, -1,
 6, 11,  9,  6,  8, 11,  8, 10, 11,  8,  5, 10,  5,  7, 10,  5,  2,  7, 14,  6,  9, 14, 12,  6, 12,  1,  6, -1,
 7, 10, 13, 10, 11, 13, 11,  9, 13,  9, 12, 13,  9,  4, 12,  4,  1, 12,  6,  8,  5,  6,  5,  3, -1,
 0,  2,  3,  2,  5,  3,  2,  7,  5,  7,  8,  5,  7, 10,  8, 10, 11,  8, 11,  9,  8,  9,  6,  8,  9,  4,  6,  4,  3,  6,  4,  1,  3,  1,  0,  3, -1,
 7, 10,  5, 10,  8,  5, 10, 11,  8, 11,  6,  8, 11,  9,  6,  9,  4,  6,  7,  5, 13,  5, 12, 13,  5,  0, 12, -1,
 2,  7,  5,  7, 10,  5, 10,  8,  5, 10, 11,  8, 11,  6,  8, 11,  9,  6,  9,  4,  6, -1,
 2,  3, 13,  3, 14, 13,  3,  6, 14,  6,  8, 14,  8, 10, 14, 10, 11, 14, 11,  9, 14, -1,
 6, 11,  9,  6,  8, 11,  8, 10, 11, 14,  6,  9, 14, 12,  6, 12,  3,  6, 12,  0,  3, -1,
 2,  0, 13,  0,  1, 13,  1, 14, 13,  1,  6, 14,  6,  9, 14,  6,  8,  9,  8, 11,  9,  8, 10, 11, -1,
 6, 11,  9,  6,  8, 11,  8, 10, 11, 14,  6,  9, 14, 12,  6, 12,  1,  6, -1,
 3,  4,  1,  3,  6,  4,  6,  9,  4,  6,  8,  9,  8, 11,  9,  8, 10, 11, 12,  3,  1, 12, 13,  3, 13,  2,  3, -1,
10, 11,  8, 11,  9,  8,  9,  6,  8,  9,  4,  6,  4,  3,  6,  4,  1,  3,  1,  0,  3, -1,
 2,  0, 13,  0, 12, 13, 10, 11,  8, 11,  6,  8, 11,  9,  6,  9,  4,  6, -1,
11,  8, 10, 11,  9,  8,  9,  6,  8,  9,  4,  6, -1,
14,  6,  4, 14, 11,  6, 14, 13, 11, 13, 10, 11, 13,  7, 10, -1,
 0,  2, 12,  2,  7, 12,  7, 10, 12, 10, 14, 12, 10, 11, 14, 11,  6, 14,  6,  4, 14, -1,
14,  6,  4, 14, 11,  6, 14, 13, 11, 13, 10, 11, 13,  7, 10,  3,  0,  1, -1,
 3,  2,  7,  3,  7, 10,  3, 10,  6, 10, 11,  6,  1,  3, 12,  3,  6, 12,  6, 14, 12,  6,  4, 14, -1,
 7, 10, 13, 10, 11, 13, 11, 12, 13, 11,  6, 12,  6,  1, 12, -1,
 0,  6,  1,  0, 10,  6, 10, 11,  6,  0,  7, 10,  0,  2,  7, -1,
12,  3,  0, 12,  6,  3, 12, 11,  6, 12, 13, 11, 13, 10, 11, 13,  7, 10, -1,
 3,  7, 10,  3,  2,  7,  6,  3, 10, 11,  6, 10, -1,
 2,  5, 13,  5, 10, 13, 10, 11, 13, 11, 14, 13, 11,  6, 14,  6,  4, 14, -1,
14,  6,  4, 14, 11,  6, 14, 10, 11, 14, 12, 10, 12,  5, 10, 12,  0,  5, -1,
 2,  5, 13,  5, 10, 13, 10, 11, 13, 11, 14, 13, 11,  6, 14,  6,  4, 14,  0,  1,  3, -1,
10, 11,  6,  5, 10,  6,  3,  5,  6, 14,  6,  4, 14,  3,  6, 14, 12,  3, 12,  1,  3, -1,
 2,  5, 13,  5, 10, 13, 10, 11, 13, 11, 12, 13, 11,  6, 12,  6,  1, 12, -1,
 6,  5, 10, 11,  6, 10,  6,  1,  5,  1,  0,  5, -1,
 5, 10, 11,  5, 11,  6,  5,  6,  3,  2,  5, 13,  5,  3, 13,  3, 12, 13,  3,  0, 12, -1,
 6,  5, 10, 11,  6, 10,  6,  3,  5, -1,
14,  3,  4, 14, 13,  3, 13,  5,  3, 13,  8,  5, 13, 11,  8, 13, 10, 11, 13,  7, 10, -1,
 0,  2,  3,  2,  5,  3,  2,  7,  5,  7,  8,  5,  7, 10,  8, 10, 11,  8,  0,  3, 12,  3, 14, 12,  3,  4, 14, -1,
14,  1,  4, 14,  0,  1, 14, 13,  0, 13,  5,  0, 13,  7,  5,  7,  8,  5,  7, 10,  8, 10, 11,  8, -1,
 1,  4, 12,  4, 14, 12,  2,  7,  5,  7,  8,  5,  7, 10,  8, 10, 11,  8, -1,
 7, 10,  5, 10,  8,  5, 10, 11,  8,  7,  5, 13,  5, 12, 13,  5,  3, 12,  3,  1, 12, -1,
 1,  0,  3,  0,  2,  3,  2,  5,  3,  2,  7,  5,  7,  8,  5,  7, 10,  8, 10, 11,  8, -1,
 7, 10,  5, 10,  8,  5, 10, 11,  8,  7,  5, 13,  5, 12, 13,  5,  0, 12, -1,
 7,  5,  2,  7, 10,  5, 10,  8,  5, 10, 11,  8, -1,
14,  3,  4, 14, 13,  3, 13,  2,  3,  8, 10, 11, -1,
14,  3,  4, 14, 12,  3, 12,  0,  3,  8, 10, 11, -1,
14,  1,  4, 14,  0,  1, 14, 13,  0, 13,  2,  0,  8, 10, 11, -1,
 1,  4, 12,  4, 14, 12, 10, 11,  8, -1,
 2,  3, 13,  3, 12, 13,  3,  1, 12, 10, 11,  8, -1,
 3,  1,  0,  8, 10, 11, -1,
12,  2,  0, 12, 13,  2,  8, 10, 11, -1,
 8, 10, 11, -1,
14,  8,  9, 14, 15,  8, 15, 10,  8, -1,
14,  8,  9, 14, 15,  8, 15, 10,  8, 13,  0,  2, 13, 12,  0, -1,
14,  8,  9, 14, 15,  8, 15, 10,  8,  3,  0,  1, -1,
13,  3,  2, 13, 12,  3, 12,  1,  3, 14,  8,  9, 14, 15,  8, 15, 10,  8, -1,
10,  8, 15,  8,  9, 15,  9, 12, 15,  9,  4, 12,  4,  1, 12, -1,
13,  0,  2, 13,  1,  0, 13,  4,  1, 13, 15,  4, 15,  9,  4, 15,  8,  9, 15, 10,  8, -1,
10,  8, 15,  8,  9, 15,  9,  4, 15,  4, 12, 15,  4,  3, 12,  3,  0, 12, -1,
10,  8, 15,  8,  9, 15,  9,  4, 15,  4, 13, 15,  4,  3, 13,  3,  2, 13, -1,
14,  8,  9, 14, 15,  8, 15, 10,  8,  5,  7,  2, -1,
 0,  5, 12,  5, 13, 12,  5,  7, 13, 10,  8, 15,  8, 14, 15,  8,  9, 14, -1,
14,  8,  9, 14, 15,  8, 15, 10,  8,  5,  7,  2,  3,  0,  1, -1,
13,  5,  7, 13,  3,  5, 13, 12,  3, 12,  1,  3, 14,  8,  9, 14, 15,  8, 15, 10,  8, -1,
10,  8, 15,  8,  9, 15,  9, 12, 15,  9,  4, 12,  4,  1, 12,  7,  2,  5, -1,
 8,  9,  4,  8,  4,  1,  8,  1,  5,  1,  0,  5, 10,  8, 15,  8,  5, 15,  5, 13, 15,  5,  7, 13, -1,
10,  8, 15,  8,  9, 15,  9,  4, 15,  4, 12, 15,  4,  3, 12,  3,  0, 12,  7,  2,  5, -1,
 8,  9,  4,  8,  4,  3,  8,  3,  5, 10,  8, 15,  8,  5, 15,  5, 13, 15,  5,  7, 13, -1,
14,  6,  9, 14,  3,  6, 14, 15,  3, 15,  5,  3, 15, 10,  5, -1,
14,  6,  9, 14,  3,  6, 14, 15,  3, 15,  5,  3, 15, 10,  5, 13,  0,  2, 13, 12,  0, -1,
14,  6,  9, 14,  1,  6, 14,  0,  1, 14, 15,  0, 15,  5,  0, 15, 10,  5, -1,
10,  6,  9, 10,  5,  6,  5,  1,  6,  5,  2,  1,  2, 12,  1, 13, 12,  2, 14, 15,  9, 15, 10,  9, -1,
10,  5, 15,  5, 12, 15,  5,  3, 12,  3,  6, 12,  6,  9, 12,  9,  4, 12,  4,  1, 12, -1,
 5,  0,  2,  5,  3,  0,  3,  1,  0,  3,  6,  1,  6,  4,  1,  6,  9,  4, 13,  5,  2, 13, 15,  5, 15, 10,  5, -1,
12,  5,  0, 12, 15,  5, 15, 10,  5,  6,  9,  4, -1,
10,  5, 15,  5, 13, 15,  5,  2, 13,  9,  4,  6, -1,
14,  6,  9, 14,  3,  6, 14,  2,  3, 14, 15,  2, 15,  7,  2, 15, 10,  7, -1,
 0,  3,  7,  3, 10,  7,  3,  6, 10,  6,  9, 10,  9, 14, 15,  9, 15, 10,  0, 13, 12,  0,  7, 13, -1,
10,  7, 15,  7,  2, 15,  2,  0, 15,  0, 14, 15,  0,  1, 14,  1,  6, 14,  6,  9, 14, -1,
10,  6,  9, 10,  7,  6,  7,  1,  6, 13, 12,  1,  7, 13,  1, 14, 15,  9, 15, 10,  9, -1,
10,  7, 15,  7,  2, 15,  2, 12, 15,  2,  3, 12,  3,  1, 12,  3,  6,  1,  6,  4,  1,  6,  9,  4, -1,
10,  7, 15,  7, 13, 15,  9,  4,  6,  4,  3,  6,  4,  1,  3,  1,  0,  3, -1,
12,  2,  0, 12,  7,  2, 12, 15,  7, 15, 10,  7,  6,  9,  4, -1,
13, 10,  7, 13, 15, 10,  6,  9,  4, -1,
10,  8, 15,  8,  6, 15,  6, 14, 15,  6,  4, 14, -1,
10,  8, 15,  8,  6, 15,  6, 14, 15,  6,  4, 14,  0,  2, 12,  2, 13, 12, -1,
10,  8, 15,  8,  6, 15,  6, 14, 15,  6,  4, 14,  0,  1,  3, -1,
14,  6,  4, 14,  8,  6, 14, 15,  8, 15, 10,  8, 13,  3,  2, 13, 12,  3, 12,  1,  3, -1,
10,  8, 15,  8,  6, 15,  6, 12, 15,  6,  1, 12, -1,
10,  8, 15,  8,  6, 15,  6,  1, 15,  1, 13, 15,  1,  0, 13,  0,  2, 13, -1,
12,  3,  0, 12,  6,  3, 12, 15,  6, 15,  8,  6, 15, 10,  8, -1,
10,  8, 15,  8,  6, 15,  6, 13, 15,  6,  3, 13,  3,  2, 13, -1,
14,  6,  4, 14,  8,  6, 14, 15,  8, 15, 10,  8,  5,  7,  2, -1,
10,  8, 15,  8,  6, 15,  6, 14, 15,  6,  4, 14,  0,  5, 12,  5, 13, 12,  5,  7, 13, -1,
10,  8, 15,  8,  6, 15,  6, 14, 15,  6,  4, 14,  0,  1,  3,  7,  2,  5, -1,
10,  8, 15,  8,  6, 15,  6, 14, 15,  6,  4, 14,  1,  3, 12,  3, 13, 12,  3,  5, 13,  5,  7, 13, -1,
10,  8, 15,  8,  6, 15,  6, 12, 15,  6,  1, 12,  7,  2,  5, -1,
 1,  0,  5,  6,  1,  5,  8,  6,  5, 13,  5,  7, 13,  8,  5, 13, 15,  8, 15, 10,  8, -1,
10,  8, 15,  8,  6, 15,  6, 12, 15,  6,  3, 12,  3,  0, 12,  7,  2,  5, -1,
 8,  6,  5,  6,  3,  5, 10,  8, 15,  8,  5, 15,  5, 13, 15,  5,  7, 13, -1,
10,  5, 15,  5,  3, 15,  3, 14, 15,  3,  4, 14, -1,
10,  5, 15,  5, 14, 15,  5,  3, 14,  3,  4, 14,  0,  2, 12,  2, 13, 12, -1,
14,  1,  4, 14,  0,  1, 14, 15,  0, 15,  5,  0, 15, 10,  5, -1,
 1,  5,  2,  1,  4,  5,  4, 10,  5, 14, 15, 10,  4, 14, 10, 13, 12,  2, 12,  1,  2, -1,
12,  3,  1, 12,  5,  3, 12, 15,  5, 15, 10,  5, -1,
 5,  0,  2,  5,  3,  0,  3,  1,  0, 13,  5,  2, 13, 15,  5, 15, 10,  5, -1,
12,  5,  0, 12, 15,  5, 15, 10,  5, -1,
10,  5, 15,  5, 13, 15,  5,  2, 13, -1,
10,  7, 15,  7,  2, 15,  2, 14, 15,  2,  3, 14,  3,  4, 14, -1,
 0,  3,  7,  3, 10,  7,  3,  4, 10,  4, 14, 15,  4, 15, 10,  0, 13, 12,  0,  7, 13, -1,
14,  1,  4, 14,  0,  1, 14,  2,  0, 14, 15,  2, 15,  7,  2, 15, 10,  7, -1,
 1,  4, 10,  1, 10,  7,  1, 13, 12,  1,  7, 13,  4, 14, 15,  4, 15, 10, -1,
12,  3,  1, 12,  2,  3, 12, 15,  2, 15,  7,  2, 15, 10,  7, -1,
10,  7, 15,  7, 13, 15,  1,  0,  3, -1,
12,  2,  0, 12,  7,  2, 12, 15,  7, 15, 10,  7, -1,
13, 10,  7, 13, 15, 10, -1,
 7,  8, 13,  8, 14, 13,  8,  9, 14, -1,
 0,  2, 12,  2,  7, 12,  7, 14, 12,  7,  8, 14,  8,  9, 14, -1,
 7,  8, 13,  8, 14, 13,  8,  9, 14,  0,  1,  3, -1,
 1,  3, 12,  3,  2, 12,  2,  7, 12,  7, 14, 12,  7,  8, 14,  8,  9, 14, -1,
12,  4,  1, 12,  9,  4, 12, 13,  9, 13,  8,  9, 13,  7,  8, -1,
 4,  8,  9,  4,  2,  8,  2,  7,  8,  4,  0,  2,  4,  1,  0, -1,
12,  3,  0, 12,  4,  3, 12,  9,  4, 12, 13,  9, 13,  8,  9, 13,  7,  8, -1,
 8,  3,  2,  7,  8,  2,  8,  9,  3,  9,  4,  3, -1,
 2,  5, 13,  5,  8, 13,  8, 14, 13,  8,  9, 14, -1,
14,  8,  9, 14,  5,  8, 14, 12,  5, 12,  0,  5, -1,
 2,  5, 13,  5,  8, 13,  8, 14, 13,  8,  9, 14,  0,  1,  3, -1,
 1,  3, 12,  3,  5, 12,  5, 14, 12,  5,  8, 14,  8,  9, 14, -1,
 2,  5, 13,  5,  8, 13,  8,  9, 13,  9, 12, 13,  9,  4, 12,  4,  1, 12, -1,
 8,  4,  1,  8,  9,  4,  5,  8,  1,  0,  5,  1, -1,
 9,  4,  3,  8,  9,  3,  5,  8,  3, 12,  3,  0, 12,  5,  3, 12, 13,  5, 13,  2,  5, -1,
 3,  8,  9,  4,  3,  9,  3,  5,  8, -1,
 7,  5, 13,  5,  3, 13,  3, 14, 13,  3,  6, 14,  6,  9, 14, -1,
 0,  2,  3,  2,  5,  3,  2,  7,  5,  0,  3, 12,  3, 14, 12,  3,  6, 14,  6,  9, 14, -1,
14,  6,  9, 14,  1,  6, 14,  0,  1, 14, 13,  0, 13,  5,  0, 13,  7,  5, -1,
 1,  6, 12,  6, 14, 12,  6,  9, 14,  2,  7,  5, -1,
 3,  4,  1,  3,  6,  4,  6,  9,  4, 12,  3,  1, 12, 13,  3, 13,  5,  3, 13,  7,  5, -1,
 9,  4,  6,  4,  1,  6,  1,  3,  6,  1,  0,  3,  0,  5,  3,  0,  2,  5,  2,  7,  5, -1,
12,  5,  0, 12, 13,  5, 13,  7,  5,  6,  9,  4, -1,
 5,  2,  7,  6,  9,  4, -1,
14,  6,  9, 14,  3,  6, 14, 13,  3, 13,  2,  3, -1,
14,  6,  9, 14,  3,  6, 14, 12,  3, 12,  0,  3, -1,
14,  6,  9, 14,  1,  6, 14, 13,  1, 13,  0,  1, 13,  2,  0, -1,
 1,  6, 12,  6, 14, 12,  6,  9, 14, -1,
 3,  4,  1,  3,  6,  4,  6,  9,  4, 12,  3,  1, 12, 13,  3, 13,  2,  3, -1,
 4,  6,  9,  4,  1,  6,  1,  3,  6,  1,  0,  3, -1,
 2,  0, 13,  0, 12, 13,  9,  4,  6, -1,
 6,  9,  4, -1,
14,  6,  4, 14,  8,  6, 14, 13,  8, 13,  7,  8, -1,
14,  6,  4, 14,  8,  6, 14,  7,  8, 14, 12,  7, 12,  2,  7, 12,  0,  2, -1,
14,  6,  4, 14,  8,  6, 14, 13,  8, 13,  7,  8,  3,  0,  1, -1,
 3,  2,  7,  3,  7,  8,  3,  8,  6,  1,  3, 12,  3,  6, 12,  6, 14, 12,  6,  4, 14, -1,
12,  6,  1, 12,  8,  6, 12, 13,  8, 13,  7,  8, -1,
 6,  0,  2,  6,  1,  0,  8,  6,  2,  7,  8,  2, -1,
12,  3,  0, 12,  6,  3, 12, 13,  6, 13,  8,  6, 13,  7,  8, -1,
 8,  3,  2,  7,  8,  2,  8,  6,  3, -1,
14,  6,  4, 14,  8,  6, 14, 13,  8, 13,  5,  8, 13,  2,  5, -1,
14,  6,  4, 14,  8,  6, 14, 12,  8, 12,  5,  8, 12,  0,  5, -1,
 2,  5, 13,  5,  8, 13,  8, 14, 13,  8,  6, 14,  6,  4, 14,  0,  1,  3, -1,
 3,  5,  6,  5,  8,  6,  1,  3, 12,  3,  6, 12,  6, 14, 12,  6,  4, 14, -1,
 2,  5, 13,  5,  8, 13,  8, 12, 13,  8,  6, 12,  6,  1, 12, -1,
 5,  6,  1,  0,  5,  1,  5,  8,  6, -1,
 5,  8,  3,  8,  6,  3,  2,  5, 13,  5,  3, 13,  3, 12, 13,  3,  0, 12, -1,
 8,  6,  3,  5,  8,  3, -1,
 7,  5, 13,  5,  3, 13,  3, 14, 13,  3,  4, 14, -1,
 0,  2,  3,  2,  5,  3,  2,  7,  5,  0,  3, 12,  3, 14, 12,  3,  4, 14, -1,
 7,  5, 13,  5,  0, 13,  0, 14, 13,  0,  1, 14,  1,  4, 14, -1,
14,  1,  4, 14, 12,  1,  5,  2,  7, -1,
12,  3,  1, 12,  5,  3, 12, 13,  5, 13,  7,  5, -1,
 0,  3,  1,  0,  2,  3,  2,  5,  3,  2,  7,  5, -1,
12,  5,  0, 12, 13,  5, 13,  7,  5, -1,
 5,  2,  7, -1,
14,  3,  4, 14, 13,  3, 13,  2,  3, -1,
14,  3,  4, 14, 12,  3, 12,  0,  3, -1,
14,  1,  4, 14,  0,  1, 14, 13,  0, 13,  2,  0, -1,
14,  1,  4, 14, 12,  1, -1,
 2,  3, 13,  3, 12, 13,  3,  1, 12, -1,
 3,  1,  0, -1,
12,  2,  0, 12, 13,  2, -1,
-1 };


const unsigned short IndexTable[512] =
{
   0,    1,    8,   12,   22,   29,   42,   52,   62,   66,   76,   83,   96,  106,  122,  135,
 148,  155,  168,  178,  194,  207,  226,  242,  258,  268,  284,  297,  310,  326,  348,  367,
 380,  384,  394,  401,  414,  424,  440,  453,  466,  473,  486,  496,  512,  525,  544,  560,
 576,  586,  602,  615,  634,  650,  672,  685,  698,  711,  730,  746,  762,  781,  794,  810,
 820,  827,  840,  850,  866,  879,  898,  914,  930,  940,  950,  963,  976,  992, 1008, 1027,
1040, 1053, 1072, 1088, 1110, 1129, 1154, 1176, 1198, 1214, 1230, 1249, 1262, 1284, 1306, 1331,
1344, 1354, 1370, 1383, 1402, 1418, 1440, 1459, 1478, 1491, 1504, 1520, 1536, 1555, 1574, 1596,
1612, 1628, 1650, 1669, 1694, 1716, 1744, 1763, 1782, 1801, 1820, 1842, 1858, 1883, 1896, 1918,
1928, 1932, 1942, 1949, 1962, 1972, 1988, 2001, 2014, 2021, 2034, 2044, 2060, 2073, 2092, 2108,
2124, 2134, 2150, 2163, 2182, 2198, 2220, 2239, 2258, 2271, 2290, 2306, 2322, 2341, 2366, 2388,
2404, 2411, 2424, 2434, 2450, 2463, 2482, 2498, 2514, 2524, 2540, 2553, 2572, 2588, 2610, 2629,
2648, 2661, 2680, 2696, 2718, 2737, 2762, 2778, 2794, 2810, 2832, 2851, 2870, 2892, 2908, 2927,
2940, 2950, 2966, 2979, 2998, 3014, 3036, 3055, 3074, 3087, 3100, 3116, 3132, 3151, 3170, 3192,
3208, 3224, 3246, 3265, 3278, 3300, 3328, 3353, 3366, 3379, 3392, 3408, 3418, 3437, 3456, 3478,
3488, 3501, 3520, 3536, 3558, 3577, 3602, 3624, 3646, 3662, 3678, 3697, 3716, 3738, 3760, 3785,
3804, 3823, 3848, 3870, 3886, 3911, 3930, 3952, 3962, 3978, 3994, 4013, 4026, 4048, 4058, 4077,
4084, 4091, 4104, 4114, 4130, 4143, 4162, 4178, 4194, 4204, 4220, 4233, 4252, 4268, 4290, 4309,
4328, 4341, 4360, 4376, 4398, 4417, 4442, 4464, 4486, 4502, 4524, 4543, 4562, 4584, 4612, 4637,
4656, 4666, 4682, 4695, 4714, 4724, 4740, 4753, 4766, 4779, 4798, 4814, 4836, 4849, 4868, 4884,
4900, 4916, 4938, 4957, 4982, 4998, 5020, 5033, 5046, 5065, 5090, 5112, 5134, 5153, 5166, 5182,
5192, 5205, 5224, 5240, 5262, 5281, 5300, 5322, 5338, 5354, 5370, 5389, 5408, 5430, 5446, 5471,
5484, 5503, 5528, 5550, 5578, 5603, 5640, 5668, 5690, 5712, 5734, 5759, 5778, 5806, 5828, 5847,
5860, 5876, 5898, 5917, 5942, 5958, 5974, 5993, 6006, 6025, 6044, 6066, 6088, 6107, 6120, 6142,
6152, 6174, 6202, 6227, 6246, 6268, 6290, 6309, 6322, 6335, 6348, 6364, 6374, 6387, 6394, 6404,
6408, 6418, 6434, 6447, 6466, 6482, 6504, 6523, 6542, 6555, 6574, 6590, 6612, 6631, 6656, 6678,
6700, 6716, 6738, 6757, 6782, 6804, 6832, 6845, 6858, 6877, 6902, 6924, 6946, 6971, 6990, 7006,
7016, 7029, 7048, 7064, 7086, 7099, 7118, 7134, 7150, 7166, 7188, 7207, 7232, 7248, 7270, 7289,
7308, 7321, 7340, 7356, 7378, 7391, 7410, 7420, 7430, 7446, 7468, 7487, 7506, 7522, 7532, 7545,
7552, 7562, 7578, 7591, 7610, 7626, 7642, 7661, 7674, 7687, 7700, 7716, 7732, 7751, 7764, 7786,
7796, 7812, 7834, 7853, 7866, 7888, 7910, 7923, 7930, 7943, 7956, 7972, 7982, 8001, 8014, 8024,
8028, 8041, 8060, 8076, 8098, 8111, 8124, 8140, 8150, 8166, 8182, 8201, 8220, 8236, 8246, 8265,
8272, 8285, 8304, 8320, 8330, 8343, 8356, 8366, 8370, 8380, 8390, 8403, 8410, 8420, 8424, 8431};


#endif // TRANSVOXEL_TABLE_H_INCLUDED
