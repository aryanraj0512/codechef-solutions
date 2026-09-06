// Problem: SQLPBP06
// Platform: codechef
// Language: -- Template Code for Approach 1
SELECT DISTINCT author_id, author_name, publication_name
FROM Views
WHERE view_count = 0
ORDER BY author_id ASC;
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/sql-case-studies-topic-wise/SQLBP01/problems/SQLPBP06?tab=solution
// Solved on: 2026-09-06T12:49:50.285Z

SELECT author_id, author_name , publication_name 
FROM Views

WHERE view_count = 0
ORDER BY author_id ASC;