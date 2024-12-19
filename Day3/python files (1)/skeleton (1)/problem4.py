import requests
from pprint import pprint

# 문제4. C번의 데이터를 활용하여, 섭씨 온도 데이터를 추가합니다.

def get_weather(api_key):
    api_key = '9fa589f18669c246b5a87a3d5040e178'
    city = "Seoul,KR"
    url = f'http://api.openweathermap.org/data/2.5/weather?q={city}&appid={api_key}'

    # 요구사항에 맞도록 이곳의 코드를 수정합니다.

    result = requests.get(url).json()
    return result


# 아래 코드는 수정하지 않습니다.
if __name__ == '__main__':
    # 여러분의 OpenWeatherMap API 키를 설정하세요
    api_key = 'API_KEY'

    result = get_weather(api_key)
    # pprint(result)

    description = result['weather'][0]['description']

    print(f'날씨 설명: {description}')