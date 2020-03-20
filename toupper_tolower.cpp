#include <bits/stdc++.h>

string str = "Test";
transform(str.begin(), str.end(), str.begin(), ::tolower); //To lowercase.
transform(str.begin(), str.end(), str.begin(), ::toupper); //To uppercase.

/*
  <bits/stdc++.h> must be included in the program to use 'transform' functionality.
*/
