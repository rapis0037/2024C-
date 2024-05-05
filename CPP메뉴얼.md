1. SQLite 홈페이지에 들어가 Download 버튼을 클릭한다.
![스크린샷 2024-05-05 195358](https://github.com/rapis0037/2024CPP/assets/127822589/c3acad20-d88a-448f-aeb0-d7e6f455748f)

2. source code와 자신의 OS환경에 맞게 Precompiled Binaries를 다운받는다.(본인은 원도우 64를 사용한다.)
![스크린샷 2024-05-05 200044](https://github.com/rapis0037/2024CPP/assets/127822589/b2beb23a-e728-4732-ad84-256ac2031741)
![스크린샷 2024-05-05 195639](https://github.com/rapis0037/2024CPP/assets/127822589/827b3aa5-e431-4073-980a-7fad19babd96)

3. https://cafe.naver.com/cpp1에 들어가 sqlite3.lib 파일을 다운로드한다
![스크린샷 2024-05-05 201035](https://github.com/rapis0037/2024CPP/assets/127822589/11cbc8bb-0cb6-4e7f-bb4e-5e375d5c5099)


4. sqlite-amalgamation-XXXXXXX 압축파일에서 sqlite3.h, sqlite-dll-win-x64-xxxxxx 압축파일에서 sqlite3.dll, 카페에서 다운받은 sqlite3.lib 파일들을 자신의 프로젝트 내부에 넣는다.
(C:\Users\사용자이름\source\repos\프로젝트 이름\프로젝트이름)
![스크린샷 2024-05-05 201516](https://github.com/rapis0037/2024CPP/assets/127822589/222866a6-4e90-4a27-ba8d-3f1dce8c9da4)

5. 프로젝트를 실행하여 "sqlite3.h"를 include한다.----------------------------------------------------------------------------------
![스크린샷 2024-05-05 201702](https://github.com/rapis0037/2024CPP/assets/127822589/83cbdc5b-f9d9-4956-ac71-ebb501b91e1e)

-끝
#소감문
SQLite를 사용하여 데이터베이스를 다루는 것은 매우 편리하고 유연한 경험이었습니다. sqlite에서 지원하는 작고 가볍지만 강력한 데이터베이스 엔진을 사용하여, 간단한 응용 프로그램을 작성해봤을 때 그 성능이 매우 좋았습니다. SQL 쿼리를 통해 데이터를 조작하고 검색하는 과정에서 데이터베이스 설계와 관련하여 다양한 측면을 고려해볼 수 있었습니다. 또한, SQLite의 가벼움과 속도는 특히 모바일 애플리케이션 개발에서 유용하게 사용될 수 있음을 깨달았습니다. 또한 GUI없이 cmd를 통해 데이터베이스 관리와 SQL 쿼리 작성을 진행해야 하기 때문에 query문에 대한 실력을 향상시킬 수 있었습니다.
