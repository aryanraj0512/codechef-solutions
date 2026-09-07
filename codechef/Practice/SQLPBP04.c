// Problem: SQLPBP04
// Platform: codechef
// Language: ┌─────────────┬───────┐
│ player_name │ score │
├─────────────┼───────┤
│ David       │ 1600  │
│ Bob         │ 1500  │
│ Charlie     │ 1300  │
└─────────────┴───────┘
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/sql-case-studies-topic-wise/SQLBP01/problems/SQLPBP04?tab=statement
// Solved on: 2026-09-07T18:18:24.106Z

SELECT DISTINCT p.player_name, p.score
FROM Players p 
JOIN Matches m ON m.winner = p.player_name
ORDER BY p.score desc
LIMIT 3;
