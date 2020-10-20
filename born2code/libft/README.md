## 프로젝트 소개

본 프로젝트의 목적은 흔히 쓰이는 함수들을 재편성한 C라이브러리를 구현하기 위한 것이다.

42 seoul에서는 이미 정의 되어있는 표준 함수들을 사용해 프로젝트를 진행하는 것이 금지되어있다.

필요하다고 생각되는 함수라면 직접 구현해 사용해야 한다.

이 과정을 통해서 C 표준함수의 작동 원리, 사용법, 데이터와 메모리의 효율적 관리에 대해 배울 수 있었다.


## 규칙

* 프로젝트는 Norm 규칙에 맞게 작성되어야 한다.

* 함수들은 정의되지 않은 행동들과는 별개로 예기치 않게 중단되어서는 안된다.(예를 들어, segmentation fault, bus error, double free 등.)

* 필요한 경우 Heap에 할당된 모든 메모리 공간은 적절하게 해제되어야 한다.

* Makefile은 최소한 $(NAME), all, clean, fclean, re 규칙을 포함해야 한다.

* 전역 변수는 사용할 수 없다.

* 복잡한 함수를 작성하기 위해 하위 함수가 필요한 경우에는, 이러한 하위 함수를 라이브러리와 함께 배포하지하지 않도록 static(정적)으로 정의해야 한다.
  이러한 습관은 이후 여러분이 프로젝트를 하는데 도움이 될 것이다.
  
  
## 함수 리스트
  
  #### Part 1 - Libc functions
  
  첫 번째 파트에서는, man에 정의되어 있는 대로 libc 함수들의 구성을 다시 구현하였다.
  함수들은 원본과 같은 형식의 프로토타입으로 선언해야하고 같은 방식으로 동작한다. 
  함수의 이름 앞에는 `ft_`를 붙여 재구현하였다. 
  예를 들어 `strlen`은 다음과 같이된다. `ft_strlen`.
  
  > • memset • bzero • memcpy • memccpy • memmove • memchr • memcmp • strlen 
  • strlcpy • strlcat • strchr • strrchr • strnstr • strncmp • atoi • isalpha 
  • isdigit • isalnum • isascii • isprint • toupper • tolower
  
  아래의 함수들은 `malloc`함수를 사용하여 재구현 했다.

  > • calloc • strdup
  
  #### Part 2 - Addtional fuctions
  
  두 번째 파트에서는, libc에 포함되있지 않거나 다른 형식으로 포함된 함수들의 구성을 코드 화해야 합니다. 
  이러한 함수 중 일부는 파트1의 함수들을 쓰는 데 유용할 수 있습니다.
  
  > • substr • strjoin • strtrim • split • itoa • strmapi • putchar_fd • putstr_fd • putendl_fd • putnbr_fd
  
  
  #### Part 3 - List fuctions
  
  메모리와 문자열을 조작하는 함수를 갖는 것은 매우 유용하지만, 리스트를 조작하는 함수를 다루는 것이 필요하다.
  
  리스트의 요소들은 다음의 구조를 갖는다. 이 구조는 libft.h에 추가함
  
 ```c
	typedef struct s_list
	{
		void		*content;
		struct s_list 	*next;
	}			t_list;
  
 ```

t_list 구조체 설명
* content : 요소에 포함된 데이터. void 포인터는 어떠한 종류의 자료형이든 저장할 수 있습니다. 
* next : 마지막 요소인 경우에는 NULL. 또는 다음 요소의 주소.

> • ft_lstnew • ft_lstadd_front • ft_lstsize • ft_lstlast • ft_lstadd_back • ft_lstdelone • ft_lstclear • ft_lstiter • ft_lstmap
  
  
  
