//20190160 윤요한
#include <iostream>
#include "sqlite3.h"
using namespace std;

int main() {
    sqlite3* db;
    sqlite3_stmt* stmt; //sqlite문을 나타내는 포인터. 데이터베이스에서 실행될 준비가 된 줄에 대한 포인터를 반환

    int rc = sqlite3_open("sj.db", &db); // connect_mysql같은 역할을 맡음
    if (rc) {
        cerr << "데이터베이스를 열 수 없습니다: " << sqlite3_errmsg(db) << endl;
        return 1;
    }

    // 쿼리 실행: 학생별 총점 및 평균 계산
    const char* query = "SELECT name,korean, math, korean + math AS total_score, (korean + math) / 2.0 AS average FROM student";
    rc = sqlite3_prepare_v2(db, query, -1, &stmt, nullptr); // query_mysql  같은 느낌의 함수
    if (rc != SQLITE_OK) {
        cerr << "쿼리를 준비할 수 없습니다: " << sqlite3_errmsg(db) << endl;
        return 1;
    }

    // 결과 출력
    cout << "학생별 총점 및 평균:" << endl;
    while ((rc = sqlite3_step(stmt)) == SQLITE_ROW) { //sqlite3_prepare_v2() 반환된 포인터 stmt에 담고 sqlite3_step()를 호출하여 실행결과를 반환. 성공적이면 SQLITE_ROW, 실패하면 SQLITE_DON
        cout << sqlite3_column_text(stmt, 0) << ": "
            << sqlite3_column_double(stmt, 1) << " (국어), "
            << sqlite3_column_double(stmt, 2) << " (수학)," 
            << sqlite3_column_double(stmt, 3) << " (총점), " 
            << sqlite3_column_double(stmt, 4) << " (평균) " <<endl;
    }

    sqlite3_finalize(stmt);

    // 쿼리 실행: 과목별 총점 및 평균 계산
    query = "SELECT AVG(korean), AVG(math) FROM student";
    rc = sqlite3_prepare_v2(db, query, -1, &stmt, nullptr);
    if (rc != SQLITE_OK) {
        std::cerr << "쿼리를 준비할 수 없습니다: " << sqlite3_errmsg(db) << std::endl;
        return 1;
    }

    // 결과 출력
    std::cout << "\n과목별 총점 및 평균:" << std::endl;
    if (sqlite3_step(stmt) == SQLITE_ROW) {
        std::cout << "국어 평균: " << sqlite3_column_double(stmt, 0) << std::endl;
        std::cout << "수학 평균: " << sqlite3_column_double(stmt, 1) << std::endl;
    }

    sqlite3_finalize(stmt);

    // 데이터베이스 연결 종료
    sqlite3_close(db);

    return 0;
}
