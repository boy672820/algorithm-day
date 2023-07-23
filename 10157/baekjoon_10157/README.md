# 10157 풀이

## 달팽이 배열 만들기

달팽이 배열(2차원 배열)을 만들기 위해 태두리는 `-1` 할당

|  |  |  |  |  |
| - | - | - | - | - |
| -1 | -1 | -1 | -1 | -1 |
| -1 | 0 | 0 | 0 | -1 |
| -1 | 0 | 0 | 0 | -1 |
| -1 | 0 | 0 | 0 | -1 |
| -1 | -1 | -1 | -1 | -1 |

값이 `-1` 이거나 값이 존재할 경우, 방향 전환

### 델타 탐색을 이용한 시계 방향으로 값을 할당

시계 방향으로 반복하여 좌석을 입력한다. 예를 들어, `k=8` 일 경우

|  |  |  |  |  |
| - | - | - | - | - |
| -1 | -1 | -1 | -1 | -1 |
| -1 | 1 | 2 | 3 | -1 |
| -1 | **8** | 0 | 4 | -1 |
| -1 | 7 | 6 | 5 | -1 |
| -1 | -1 | -1 | -1 | -1 |