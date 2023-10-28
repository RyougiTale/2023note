## Knuth-Morris-Pratt (以三个发明者命名)
- 操作
有一个文本字符串 T 和一个模式字符串 P
预处理模式字符串 P，构建一个“最长前缀后缀”表（也称为“部分匹配”表或“失配函数”）
其实也就是通过预处理, 跳过所有不可能匹配的情况
我感觉我也会写了, 应该就是处理一次P, 维护一个数组arr[], arr[x]不为0时, 和P[x]比较, 相同可以+1, 不相同变成0开始重新和P[0]比较


## ref
https://www.zhihu.com/question/21923021
https://oi-wiki.org/string/kmp/
[直接拉14分钟](https://www.bilibili.com/video/BV16X4y137qw/)