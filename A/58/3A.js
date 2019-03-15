var word = readline();

function hello(s1, s2, i, j) {
    if(i == 0) return true;
    if(j == 0) return false;

    if(s1[i-1] === s2[j-1]) {
        return hello(s1, s2, i - 1, j - 1);
    }else {
        return hello(s1, s2, i, j - 1);
    }
}

var sub = "hello";

if(hello(sub, word, sub.length, word.length))
    print("YES");
else
    print("NO");
