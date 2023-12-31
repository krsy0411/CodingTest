# 최단경로 알고리즘
* 다익스트라 알고리즘
* 플루이드-워셜 알고리즘

## 그렇다면 두 알고리즘의 차이점이 무엇일까?
###  사용목적
1. Floyd-warshall : **모든 정점** 쌍의 최단거리를 찾기 위해서
2. Dijkstra : **주어진 출발 정점에서** 다른 모든 정점으로의 최단 경로를 찾기 위해서

### 단점
1. Floyd-warshall : **그래프의 노드 수가 많은 경우**엔, 모든 정점들에 대해서 최단경로를 계산해야하므로 좋지 않음
2. Dijkstra : **음의 가중치가 존재하는 경우**(오히려 비용이 감소하는 경우)에는 정확한 결과를 보장하지 못함

### 시간 복잡도
1. Floyd-warshall : O(V^3)
2. Dijkstra : O(V^2) 또는 O((V + E)log V)

### 동작방식(구조) : 분류 
1. Floyd-warshall : **다이나믹 프로그래밍**
    * 중간 위치 정점들을 거쳐가며 최단경로를 갱신해나감
2. Dijkstra : **탐욕알고리즘**
    * 각 단계마다 현재까지의 계산값을 기반으로 최단거리값(최적해)만을 선택해나감