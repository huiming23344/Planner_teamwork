#ifndef SQL_H
#define SQL_H
#include<QSqlDatabase>
#include<QSqlError>
#include<QSqlQuery>
#include<QDebug>
#include<QMap>
class sql
{
public:
    sql(QSqlDatabase db);
    ~sql();
    QSqlQuery sql_query;
    void CreatDb(QString db_name);
    bool OpenDb(QSqlDatabase db);
    void CloseDb(QSqlDatabase db);
    void CreateTable(QString creat_sql =
            "create table tasks (id integer primary key autoincrement,m_priority varchar(1), theme varchar(10), description varchar(50),time_start text,time_duration int)");
    void InsertData(QString insert_sql);
    void UpdateData(QString update_sql);
    bool QueryUserData_1();//遍历用户名及密码
    bool QueryUserData_2();//只遍历用户名
    QSqlDatabase db;
};

#endif // SQL_H

