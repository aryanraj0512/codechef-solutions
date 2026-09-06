// Problem: SQLPBP09
// Platform: codechef
// Language: SQL​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/sql-case-studies-topic-wise/SQLBP01/problems/SQLPBP09
// Solved on: 2026-09-06T12:45:22.654Z

SELECT department, COUNT(*) AS total_employees
FROM Employees 
GROUP BY department