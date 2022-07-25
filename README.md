# transvoxel-table-in-a-single-array
the same as the transvoxel table, but in a single array

tabela de transvoxel em um unnico array.
poderia ser mais otimixado em questão de memoria, mas funcioona bem. 
exemplo de como criar as faces para um dos casos:
```cpp


///posição dos vertices/pontos;
// 6--(10)--7--(11)--8       B------(15)-----C
// |        |        |       |               |
//(7)      (8)      (9)      |               |
// |        |        |       |               |
// 3--(05)--4--(06)--5      (13)            (14)     
// |        |        |       |               |       
//(2)      (3)      (4)      |               |       
// |        |        |       |               |       
// 0--(00)--1--(01)--2       9------(12)-----A      



vector3d pontos[16]; /// array contendo a posição de cada vertice. OBS é necessario definir a posição deles na ordem da tabela acima. A orientação pode variar de 
                     /// acordo com a necessidade, por este motivo não foram definidos aqui as posições dos pontos.

int case = 342; // este é o caso a ser triangulado

for(int i = Indextable[case]; TransvoxelTable[i] != -1; i+=3){ ///IndexTable[] retorna o indice em que a triangulação de cada caso começa. O final de cada caso
                                                               ///é marcado com um -1.
    /// ou seja, i = indereço no array TransvoxelTable[] em que começa a triangulação do caso 342. emquanto o valor do vertice for diferente de -1(que significa que a 
    /// tabela para este caso acabou) i += 3
    
    /// calcula a o meio entre os pontos que o vertice liga para cada um dos três pontos da face.
    /// transvoxelTable[] retorna o vertice.
    /// vertexA[] e vertexB[] retornam os dois pontos que o vertice liga.
    /// pontos[] possui a posição dos pontos.
    
    vector3d point1 = (pontos[vertexA[TransvoxelTable[i  ]]] + pontos[vertexB[TransvoxelTable[i  ]]])/2;
    vector3d point2 = (pontos[vertexA[TransvoxelTable[i+1]]] + pontos[vertexB[TransvoxelTable[i+1]]])/2;
    vector3d point3 = (pontos[vertexA[TransvoxelTable[i+2]]] + pontos[vertexB[TransvoxelTable[i+2]]])/2;
    
    desenhaTriangulo(point1, point2, point3);/// os pontos ja estão na ordem correta. A função desenhaTriangulo() é meramente ilustrativa;

} 




```
