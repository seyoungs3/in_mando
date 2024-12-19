# 파이썬 패키지 이해하기
# == Numpy, Pandas, Matplotlib

# Jupyter notebook
# 데이터 사이언스에 많이 사용
# 코드 실행, 텍스트 문서 작성, 시각화
# 마크다운 기능도 있음


# numpy

import numpy as np

lst = [1,2,3,4,5]
result_lst = lst * 2

print(result_lst) # 1,2,3,4,5,1,2,3,4,5

numpy_array = np.array([1,2,3,4,5])
result_array = numpy_array * 2 # 벡터 연산이 가능한 numpy -> 그래서 데이터 분석에 사용
print(result_array)

