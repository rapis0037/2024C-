1. OpenCV 홈페이지로 가서 Windows용 파일을 다운로드 받는다.

   -https://opencv.org/releases/

2. 다운 받은 opencv파일의 압축을 해제하고 C드라이브 루트에 파일을 넣는다.

   -C:\opencv


3. Visual Studio를 실행하고 새로운 프로젝트를 생성한 후 오른쪽 상단 '솔루션 탐색기'에 위치한 프로젝트 이름에 우클릭을 한다.

   "속성(Properties)"을 클릭한다.


4. C드라이브 루트에 넣어놨던 opencv 폴더내  'include` 디렉터리 경로를 C/C++ → 일반 → 추가 포함 디렉터리(Additional Include Directories)에 입력한다.

   'C:\opencv\build\include`


5. 링커 → 일반 → 추가 라이브러리 디렉터리(Additional Library Directories)에 lib 경로를 추가한다.

   `C:\opencv\build\x64\vc16\lib`


6. 링커 → 입력 → 추가 종속성(Additional Dependencies)에 사용하려는 OpenCV 모듈에 맞는 .lib 파일들을 추가한다.

   디버그 모드는 'opencv_world490d.lib' -이 lib를 사용한다.


7. 윈도우 검색창에 시스템 환경 변수 편집을 입력하여 '시스템 환경 변수 편집'으로 들어간다.

   '환경변수' 버튼을 누르고 변수 이름이 'Path'인 것을 클릭한다.

   환경 변수 편집창이 나오면 오른쪽에 위치한 '새로 만들기'를 누르고 `C:\opencv\build\x64\vc16\bin`를 입력한다.


8. 프로젝트 속성에서 구성속성>디버깅>명령인수에 자신이 테스트할 이미지의 이름을 넣는다.

   예) example.jpg


9. 아래의 코드를 입력후 실행하여 성공여부를 확인한다.


#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    cv::Mat image = cv::imread("example.jpg"); // 테스트 이미지 파일
    if (image.empty()) {
        std::cout << "이미지를 불러올 수 없습니다." << std::endl;
        return -1;
    }
    cv::imshow("Image", image);
    cv::waitKey(0);
    return 0;
}


아래는 OpenCV설정부터 edge 실행까지를 담은 유튜브 영상 링크이다.

https://youtu.be/Cu7Eui_Yhbw






