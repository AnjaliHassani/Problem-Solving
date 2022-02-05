#include<bits/stdc++.h>
#include<cctype>
using namespace std;
int main(){
  string s,ans;
//   transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
  ans="";

  cin>> s;
  
  for(int i=0;i<s.length();i++){
      if (s[i]=='a' ||s[i]=='A' ||s[i]=='e' ||s[i]=='E'
       ||s[i]=='i' ||s[i]=='o' ||s[i]=='u'
        ||s[i]=='I'  ||s[i]=='O' ||s[i]=='U'||s[i]=='Y'||s[i]=='y'){
            continue;
        }
        else{
            
            ans=ans+"."+char(tolower(s[i]));
        }
  } 
  if(ans.length()>0) {
 for(int i=0;i<ans.length();i++){
     cout<<ans[i];
 } }
 return 0;
}


// A. String Task

// Petya started to attend programming lessons. On the first lesson his task was to write a simple program. The program was supposed to do the following: in the given string, consisting if uppercase and lowercase Latin letters, it:

// deletes all the vowels,
// inserts a character "." before each consonant,
// replaces all uppercase consonants with corresponding lowercase ones.
// Vowels are letters "A", "O", "Y", "E", "U", "I", and the rest are consonants. The program's input is exactly one string, it should return the output as a single string, resulting after the program's processing the initial string.

// Help Petya cope with this easy task.

// Input
// The first line represents input string of Petya's program. This string only consists of uppercase and lowercase Latin letters and its length is from 1 to 100, inclusive.

// Output
// Print the resulting string. It is guaranteed that this string is not empty.

// Examples
// input
// tour
// output
// .t.r
// input
// Codeforces
// output
// .c.d.f.r.c.s
// input
// aBAcAba
// output
// .b.c.b
