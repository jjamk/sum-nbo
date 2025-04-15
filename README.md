### 과제 소개
32bit 숫자가 4byte크기로 저장되어 있는 파일 1개 이상을 읽어 합(sum)을 구한다.

### 사용방법
syntax : sum-nbo <file1> [<file2>...] </br>
sample : sum-nbo a.bin b.bin c.bin

#### example
``` bash
$ echo -n -e \\x00\\x00\\x03\\xe8 > thousand.bin
$ echo -n -e \\x00\\x00\\x01\\xf4 > five-hundred.bin
$ echo -n -e \\x00\\x00\\x00\\xc8 > two-hundred.bin
$ ./sum-nbo thousand.bin five-hundred.bin two-hundred.bin
1000(0x000003e8) + 500(0x000001f4) + 200(0x000000c8)= 1700(0x000006a4)
```

과제 소개 출처 : https://gitlab.com/gilgil/sns/-/wikis/byte-order/byte-order

