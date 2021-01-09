# Get Next Line

파일 디스크립터로부터 읽혀진, newline으로 끝나는 라인을
반환하는 함수를 코드화 하는 것입니다.

```
int get_next_line(int fd, char **line);
```

</br>

## 과제 준비

[PREPARE](https://github.com/meeansub/42seoul/tree/master/get_next_line/PREPARE)

</br>

## 구현 목록

get_next_line.c

get_next_line.utils.c

get_next_line.h

get_next_line_bonus.c

get_next_line_utils_bonus.c

get_next_line_bonus.h

</br>

## get_next_line 로직


1. 파일을 read 할 임시 버퍼를 만든다.
    - char buf[BUFFER_SIZE + 1];

2. read한 버퍼를 백업할 static 버퍼를 만든다.
    - static char *backup

3. read(fd, buf, BUFFER_SIZE);를 해서 라인을 읽은 다음,

4. buf를 static 변수 backup에 백업한다.

5. backup 안에 개행문자가 있는지 없는지 검사한다.

6. 개행문자가 있으면 다음 단계로 넘어가고, 없다면 개행 문자가 있을 때 까지 3번으로 돌아가 파일을 계속 읽으면서
  6_1. 기존에 백업한 것과 계속 합쳐나간다.
    - ft_strjoin(backip[fd], buf)

7. 개행문자가 있는 backup을 개행문자 전과 후로 잘라서, \n 전까지는 line 에다가 주고 \n 후는 다시 static 변수 backup에 백업한다.
    - return_line

</br>

---

### gnl 기본로직

1. 파일을 연다.
2. BUFFER_SIZE만큼 읽어 버퍼에 저장한다.
3. 버퍼에서 개행문자를 찾는다
4. 개행문자를 찾았다면 처음부터 개행문자까지 리턴.
5. 개행문자를 못찾았거나, 버퍼에 데이터가 남아있다면 저장 해둔다.
6. 파일을 다 읽을때까지 2번 부터 5번까지 반복
7. 파일을 다 읽었다면 남은 저장된 데이터가 없어질때 까지 3 ~ 5 반복
8. 종료

---

</br>

# Subject

<details>
<summary>보기</summary>

page 0

# Get Next Line

fd에서 한 줄을 읽는다는 것은 엄청 지루할 것입니다.


요약: 이 프로젝트의 목적은 파일 디스크립터로부터 읽혀진, newline으로 끝나는 라인을
반환하는 함수를 코드화 하는 것입니다.

---

page 2

# Chapter 1

Goals

이 프로젝트는 당신의 콜렉션(아마 라이브러리)에 아주 편리한 함수를 추가하게 할 뿐만 아니라, C 프로그래밍에서 아주 흥미로운 새로운 개념인 '정적 변수'를 배울 수 있도록 할 것입니다.

---

page 3

# Chpater 2

Common Instructions

* 프로젝트는 Norm 규칙에 맞춰 작성되어야 합니다. 보너스 파일/함수가 있는 경우,해당 파일/함수
  들은 norm 검사에 포함되며, norm error가 있을 시, 0점을 받게 될것입니다.
* 함수들은 정의되지 않은 행동들과는 별개로 예기치 않게 중단되어서는 안 됩니다.(예를 들어,
  segmentation fault, bus error, double free 등.) 만약 이렇게 중단되면, 당신의 프로젝트는 작동하지 않는 것으로 여겨지고 평가에서 0점을 받을 것입니다.
* 필요한 경우 heap에 할당된 모든 메모리 공간은 적절하게 해제되어야 합니다. 메모리 누수는 용
  납되지 않을 것입니다.
* 그 과제에서 필요한 경우, Makefile을 제출해야 합니다. 그것은 -Wall -Wextra -Werror 플래그를
  지정하여 컴파일할 것입니다. 그리고 Makefile은 relink 되어서는안됩니다.
* Makefile은 최소한 $(NAME), all, clean, fclean, re를 포함해야 합니다.
* 프로젝트에 보너스를 제출하려면, Makefile에 보너스 규칙을 포함해야 합니다. 이보너스 규칙은
  프로젝트의 메인 부분에서 금지되었던 모든 다양한 헤더, 라이브러리,또는 함수들은 추가해야 할
  것입니다. 보너스는 반드시 _bonus.{c/h}라는 다른 파일에 있어야 합니다. 의무적으로 해야 될 파
  트과 보너스 파트는 별도로 평가될 것입니다.
* 프로젝트에서 여러분의 libft를 허용한다면, 소스들과 그것과 연관된 Makefile을 연관된 Makefile과
  함께 libft폴더에 복사해야 합니다. 프로젝트의 Makefile은 Makefile을 사용하여 라이브러리를 컴
  파일한 다음, 프로젝트를 컴파일해야 합니다.
* 이 과제물을 제출할 필요가 없고, 채점 받을 필요가 없을지라도, 우리는 프로젝트를 위한 테스트 프로그램을 만들 것을 권장합니다. 그것은 여러분의 과제물과 동료들의 과제물을 쉽게 테스트할 기회를 제공할 것입니다. 평가하는 동안 이 테스트 프로그램들이 특히 유용하다는 것을 알게 될 것입니다. 사실, 평가하는 동안, 여러분의 테스트 프로그램과 평가 받는 동료의 테스트 프로그램들을 자유롭게 사용할 수 있을것입니다.
* 할당된 git 저장소에 과제물을 제출하세요. 오직 git 저장소에 있는 과제물만 등급이매겨질 것입
  니다. 만약 과제를 평가받는데 Deepthought가 배정된다면, 그것은 동료평가 이후에 이루어질 것입니다. 만약 Deepthought 평가 중에 오류가 발생한다면, 그 즉시 평가는 중지될 것입니다.

---

page 4

# Chpater 3

Mandatory part - Get_next_line
|||
|---|---|
|Function name|get_next_line|
|Prototype int|get_next_line(int fd, char **line);|
|Turn in files|get_next_line.c, get_next_line_utils.c, get_next_line.h
|Parameters   |#1. file descriptor for reading </br> #2. The value of what has been read
|Return value|1 : A line has been read </br>0 : EOF has been reached</br>-1 : An error happened|
|External functs.|read, malloc, free|
|Description|Write a function which returns a line read from a</br>file descriptor, without the newline.|

</br>

* get_next_line 함수를 반복문 안에서 호출하면 파일 디스크립터에서 사용할 수 있는 텍스트를 EOF가 올때까지 한 번에 한 줄씩 읽을 수 있을 것입니다.
* 파일에서 읽을 때 그리고 표준입력으로부터 읽어드릴 때, 함수가 제대로 동작하는지 확인하십시오.
* libft는 이 프로젝트에서 사용할 수 없습니다. get_next_line이 동작하는 데 필요한 함수들이 들어있는
  get_next_line_utils.c 파일을 추가해야 합니다.
* 당신의 프로그램은 -D BUFFER_SIZE=xx 플래그를 붙여서 컴파일 해야 합니다. 그것은 여러분의 get_next_line에서 read함수를 호출하기 위한 buffer size로 사용될 것입니다.
* 컴파일은 이런 식으로 진행됩니다 : gcc -Wall -Wextra -Werror -D BUFFER_SIZE=32
  get_next_line.c get_next_line_utils.c
* 여러분의 read 함수는 표준입력으로 또는 파일로부터 읽어드리기 위해서 컴파일할 때 정의된
  BUFFER_SIZE를 사용해야 합니다.
* get_next_line.h (헤더 파일)에는 적어도 get_next_line 함수의 프로토타입이 있어야 합니다.


---

page 5

```
BUFFER_SIZE 값이 9999인 경우에도 함수는 여전히 작동하나요? BUFFER_SIZE 값이 1이라면? 10000000이라면? 왜 그런지 아시나요?
```

```
get_next_line이 호출될 때마다 가능한 한 적게 읽도록 해야 합니다. 만약 newline을 만나면, 현재라인을 반환해야 합니다. 전체 파일을 읽은 다음에 한줄씩 처리하려고 하지 마세요.
```

```
테스트하지 않고 프로젝트를 제출하지 마세요. 돌려볼 테스트는 많아요. 생각해볼 수 있는 모든 문제상황을 고려하세요. 파일로부터, redirection으로부터, stdin으로부터의 읽기를 시도하세요. 표준 출력에 newline을 보낼 때 프로그램은 어떻게 동작하나요? , CTRL-D?
```

* 만약 동일한 파일 디스크립터의 두 호출 사이에서 첫 번째 fd에서 EOF에 도달하기 전에 다른
  파일로 전환될 경우, 우리는 get_next_line이 정의되지 않은 동작을 가진다고 생각합니다.
* lseek은 허용된 함수가 아닙니다. 파일 읽기는 오로지 한번만 행해져야합니다.
* 마지막으로 바이너리 파일을 읽을 때, 우리는 get_next_line이 정의되지 않은 동작을 가진다고
  생각합니다. 그러나 여러분이 원한다면, 이러한 동작을 논리적으로 만들 수 있습니다.
* 전역 변수는 금지되어 있습니다.

```
좋은 시작은 정적 변수가 무엇인지 아는 것일 겁니다 :
https://en.wikipedia.org/wiki/Static_variable
```

---

page 6

# Bonus part


get_next_line 프로젝트는 간단해서 보너스를 받기 위해 할 수 있는 것들이 거의 없지만, 우리는 여러분의  상상력이 풍부하다고 확신합니다. 만약 여러분이 필수적으로 해야하는 부분들을 완벽하게 숙달했다면, 어떻게든 더 나아가 이 보너스 파트를 완성하세요. 다시 말하지만, 필수적으로 해야하는 부분들이 완벽하지 않다면, 보너스는 고려되지 않을 것입니다.
이 파트를 위해서는 모든 3개의 원래의 파일에 _bonus를 붙여서 제출하세요.



* 하나의 정적변수로 get_next_line 성공하는 것.
* get_next_line을 사용하여 다중 파일 디스크립터를 관리 할 수 있는 것. 예를 들어, 파일 디스크립터 3, 4, 5가 읽을 수 있는 경우, get_next_line은 3에서 한 번, 4에서 한 번, 다시 3에서 한 번, 5에서 한 번 호출할 수 있습니다. 각 디스크립터의 리딩 쓰레드를 잃지 않고..

</details>
