# PWN-labs

| 等级     | 题目                  | 考点                                                                    |
| -------- | --------------------- | ----------------------------------------------------------------------- |
| Level 0  | Shellcode             | 直接连接的Shell                                                         |
| Level 1  | ret2text              | 直接溢出,返回地址中写入shell地址                                        |
| Level 2  | Ret2ShellCode         | 自己构造shellcode到bbs中,此题需要注意系统内核版本。                     |
| Level 3  | Ret2SysCall           | 拼出一个系统调用。                                                      |
| Level 4  | Ret2Libc1             | 动态链接调用,plt利用。                                                  |
| Level 5  | Ret2Libc2             | 自己构造命令执行过程。                                                  |
| Level 6  | Ret2Libc3             | 提供libc,去系统中找libc的偏移                                           |
| Level 7  | Ret2Libc3-libc?       | 不提供libc,通过随机后的地址寻找libc然后再去找偏移                       |
| Level 8  | jarvisoj_level3_x64_1 | 64位的高级ROP提供libc,通过自己构造的ROP反弹出函数地址，通过libc找偏移   |
| Level 9  | jarvisoj_level3_x64_2 | 64位的高级ROP不提供libc,通过自己构造的ROP反弹出函数地址，通过libc找偏移 |
| Level 10 | fmtstr1               | 格式化字符串漏洞入门，任意地址写入内容                                  |


题目均来源于网络。CTF题目构建模板均来自于[CTF-Archives/ctf-docker-template](https://github.com/CTF-Archives/ctf-docker-template)。