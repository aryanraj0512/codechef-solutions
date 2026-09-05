// Problem: SQLPBP09
// Platform: codechef
// Language: SQL​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/sql-case-studies-topic-wise/SQLBP01/problems/SQLPBP09?tab=statement
// Solved on: 2026-09-05T16:29:23.684Z

SELECT department, COUNT(*) AS total_employees
FROM Employees 
GROUP BY department